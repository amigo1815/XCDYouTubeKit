/* Copyright (c) 2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLYouTubeLiveChatFanFundingEventDetails.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeLiveChatFanFundingEventDetails (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeLiveChatFanFundingEventDetails
//

@interface GTLYouTubeLiveChatFanFundingEventDetails : GTLObject

// A rendered string that displays the fund amount and currency to the user.
@property (nonatomic, copy) NSString *amountDisplayString;

// The amount of the fund.
@property (nonatomic, retain) NSNumber *amountMicros;  // unsignedLongLongValue

// The currency in which the fund was made.
@property (nonatomic, copy) NSString *currency;

// The comment added by the user to this fan funding event.
@property (nonatomic, copy) NSString *userComment;

@end
