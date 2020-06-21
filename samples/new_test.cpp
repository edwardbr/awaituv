#include <iostream>
#include <future>
#include <experimental/coroutine>

class resumable{
public:
  struct promise_type;
  bool resume();
};
struct resumable::promise_type{
  resumable get_return_object() {/**/}
  auto initial_suspend() {/**/}
  auto final_suspend() {/**/}
  void return_void() {}
  void unhandled_exception();
};

std::future<int> foo(){
  std::cout << "Hello" << std::endl;
  co_await std::experimental::suspend_always();
  std::cout << "World" << std::endl;
}