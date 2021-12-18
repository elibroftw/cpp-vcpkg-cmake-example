// CMakeProject4.cpp : Defines the entry point for the application.
//

#include "CMakeProject4.h"
#include <cpr/cpr.h>
#include <iostream>

int main()
{
    cpr::Response r = cpr::Get(cpr::Url{ "https://api.github.com/repos/whoshuu/cpr/contributors" },
        cpr::Authentication{ "user", "pass" },
        cpr::Parameters{ {"anon", "true"}, {"key", "value"} });
    r.status_code;                  // 200
    r.header["content-type"];       // application/json; charset=utf-8
    r.text;                         // JSON text string
	std::cout << r.text << std::endl;
	return 0;
}
