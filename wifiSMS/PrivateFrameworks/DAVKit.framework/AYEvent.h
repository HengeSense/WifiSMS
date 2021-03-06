/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSString;



@interface AYEvent : NSObject 
{
    NSString *_domain;
    NSInteger _code;
    id _info;
}

+ (id)eventWithDomain:(id)arg1 eventCode:(NSInteger)arg2 userInfo:(id)arg3;

- (id)initWithDomain:(id)arg1 eventCode:(NSInteger)arg2 userInfo:(id)arg3;
- (void)dealloc;
- (id)domain;
- (NSInteger)code;
- (id)userInfo;
- (id)description;

@end
