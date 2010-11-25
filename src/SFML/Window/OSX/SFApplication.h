
////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////
/// \brief Event processing
////////////////////////////////////////////////////////////
@interface SFApplication : NSObject


////////////////////////////////////////////////////////////
/// \brief Event processing
///
/// \param block blocking mode means at least one event is proccessed.
////////////////////////////////////////////////////////////
+(void)processEventWithBlockingMode:(BOOL)block;

@end