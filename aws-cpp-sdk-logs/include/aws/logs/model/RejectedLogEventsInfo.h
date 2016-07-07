/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  class AWS_CLOUDWATCHLOGS_API RejectedLogEventsInfo
  {
  public:
    RejectedLogEventsInfo();
    RejectedLogEventsInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    RejectedLogEventsInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline int GetTooNewLogEventStartIndex() const{ return m_tooNewLogEventStartIndex; }

    
    inline void SetTooNewLogEventStartIndex(int value) { m_tooNewLogEventStartIndexHasBeenSet = true; m_tooNewLogEventStartIndex = value; }

    
    inline RejectedLogEventsInfo& WithTooNewLogEventStartIndex(int value) { SetTooNewLogEventStartIndex(value); return *this;}

    
    inline int GetTooOldLogEventEndIndex() const{ return m_tooOldLogEventEndIndex; }

    
    inline void SetTooOldLogEventEndIndex(int value) { m_tooOldLogEventEndIndexHasBeenSet = true; m_tooOldLogEventEndIndex = value; }

    
    inline RejectedLogEventsInfo& WithTooOldLogEventEndIndex(int value) { SetTooOldLogEventEndIndex(value); return *this;}

    
    inline int GetExpiredLogEventEndIndex() const{ return m_expiredLogEventEndIndex; }

    
    inline void SetExpiredLogEventEndIndex(int value) { m_expiredLogEventEndIndexHasBeenSet = true; m_expiredLogEventEndIndex = value; }

    
    inline RejectedLogEventsInfo& WithExpiredLogEventEndIndex(int value) { SetExpiredLogEventEndIndex(value); return *this;}

  private:
    int m_tooNewLogEventStartIndex;
    bool m_tooNewLogEventStartIndexHasBeenSet;
    int m_tooOldLogEventEndIndex;
    bool m_tooOldLogEventEndIndexHasBeenSet;
    int m_expiredLogEventEndIndex;
    bool m_expiredLogEventEndIndexHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
