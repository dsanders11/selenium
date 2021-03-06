// Copyright 2014 Software Freedom Conservancy
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef WEBDRIVER_IE_COMMANDEXECUTOR_H_
#define WEBDRIVER_IE_COMMANDEXECUTOR_H_

#define EVENT_NAME L"WD_START_EVENT"

namespace webdriver {

// Structure to be used for comunication between threads
struct IECommandExecutorThreadContext {
  HWND hwnd;
  int port;
};

} // namespace webdriver

#endif // WEBDRIVER_IE_COMMANDEXECUTOR_H_
