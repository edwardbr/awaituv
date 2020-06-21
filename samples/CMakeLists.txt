# Example use of awaituv

add_executable (test1 test1.cpp)
add_executable (test2 test2.cpp)
add_executable (test3 test3.cpp)
add_executable (test5 test5.cpp)
add_executable (test6 test6.cpp)


#[[# Example use of awaituv

add_executable (test1 test1.cpp)
target_compile_options(test1 PUBLIC -fcoroutines-ts -stdlib=libc++ -std=c++2a)
target_link_libraries (test1 ${CURL_LIBRARIES} libuv::uv)

add_executable (test2 test2.cpp)
target_compile_options(test2 PUBLIC -fcoroutines-ts -stdlib=libc++ -std=c++2a)
target_link_libraries (test2 ${CURL_LIBRARIES} libuv::uv)


add_executable (test3 test3.cpp)
target_compile_options(test3 PUBLIC -fcoroutines-ts -stdlib=libc++ -std=c++2a)
target_link_libraries (test3 ${CURL_LIBRARIES} libuv::uv)

add_executable (test5 test5.cpp)
target_compile_options(test5 PUBLIC -fcoroutines-ts -stdlib=libc++ -std=c++2a)
target_link_libraries (test5 ${CURL_LIBRARIES} libuv::uv)


add_executable (test6 test6.cpp)
target_compile_options(test6 PUBLIC -fcoroutines-ts -stdlib=libc++ -std=c++2a)
target_link_libraries (test6 ${CURL_LIBRARIES} libuv::uv)

#add_executable (new_test new_test.cpp)


#target_compile_options(new_test PUBLIC -fcoroutines-ts -std=c++20)
#target_link_libraries (new_test ${CURL_LIBRARIES} libuv::uv)

]]