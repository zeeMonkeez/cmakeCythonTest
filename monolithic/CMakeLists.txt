IF(NOT PYTHON)
    find_program(PYTHON "python")
ENDIF()

set(SETUP_PY_IN "${CMAKE_CURRENT_SOURCE_DIR}/python/setup.py.in")
set(SETUP_PY    "${CMAKE_CURRENT_BINARY_DIR}/python/setup.py")

set(PY_OUTPUT      "${CMAKE_CURRENT_BINARY_DIR}/build/pytimestamp")

configure_file(
    ${SETUP_PY_IN}
    ${SETUP_PY}
)

add_custom_command(OUTPUT "${PY_OUTPUT}"
                   COMMAND ${PYTHON} ${SETUP_PY} build_ext
                   COMMAND ${CMAKE_COMMAND} -E touch ${PY_OUTPUT}
               )

add_custom_target(a_py ALL DEPENDS ${PY_OUTPUT})

install(CODE "execute_process(COMMAND ${PYTHON} ${SETUP_PY} install)")

