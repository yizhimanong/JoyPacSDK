//
//  JPCASDKAdatper.h

//
//  Created by 洋吴 on 2019/3/21.
//

#import <Foundation/Foundation.h>
#import <JoyPacSDK/JPCProtocal.h>


//#ifdef __cplusplus
//extern "C"{
//#endif
//
//    void    UnitySendMessage(const char* obj, const char* method, const char* msg);
//
//#ifdef __cplusplus
//}
//#endif

@interface AnyThinkAdatper : NSObject <JPCProtocal>

+ (AnyThinkAdatper *)adatper;

- (void)refreshSegmentWithDictionary:(NSDictionary *)customData;


@end

