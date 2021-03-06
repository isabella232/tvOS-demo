/****************************************************************************
 * Copyright 2016, Optimizely, Inc. and contributors                        *
 *                                                                          *
 * Licensed under the Apache License, Version 2.0 (the "License");          *
 * you may not use this file except in compliance with the License.         *
 * You may obtain a copy of the License at                                  *
 *                                                                          *
 *    http://www.apache.org/licenses/LICENSE-2.0                            *
 *                                                                          *
 * Unless required by applicable law or agreed to in writing, software      *
 * distributed under the License is distributed on an "AS IS" BASIS,        *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 * See the License for the specific language governing permissions and      *
 * limitations under the License.                                           *
 ***************************************************************************/

// Model object representing an event relationship

#import <Foundation/Foundation.h>
#import <JSONModel/JSONModelLib.h>

@protocol OPTLYEventRelatedEvent
@end

@interface OPTLYEventRelatedEvent : JSONModel

// The id of the related event
@property (nonatomic, strong, nullable) NSString<Optional> *eventId;
// The type of the relationship to this event
@property (nonatomic, strong, nullable) NSString<Optional> *relationship;

@end
