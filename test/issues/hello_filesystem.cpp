//  Boost hello_filesystem.cpp  --------------------------------------------------------//

//  Copyright Beman Dawes 2014

//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

//  Library home page: http://www.boost.org/libs/filesystem

//--------------------------------------------------------------------------------------//
//                                                                                      //
//  In researching filesystem issues it is convenient to have a program that can be     //
//  quickly modified to test reported problems. That's the purpose of this file and     //
//  its associated Visual Studio and Boost.Build infrastructure.                        //
//                                                                                      //
//--------------------------------------------------------------------------------------//

#include <boost/config/warning_disable.hpp>
#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <boost/detail/lightweight_main.hpp>

using std::cout;
using std::endl;
namespace fs = boost::filesystem;

//------------------------------------  cpp_main  --------------------------------------//

int cpp_main(int argc, char* argv[])
{
  cout << "Hello, filesystem world" << endl;

  const wchar_t* wchar_t_p = L".";
  const char* char_p = ".";

  BOOST_TEST(fs::exists(wchar_t_p));
  cout << "test 1 complete" << endl;
  BOOST_TEST(fs::exists(L"."));
  cout << "test 2 complete" << endl;
  BOOST_TEST(fs::exists(char_p));
  cout << "test 3 complete" << endl;
  BOOST_TEST(fs::exists("."));
  cout << "test 4 complete" << endl;

  return ::boost::report_errors();
} // cpp_main