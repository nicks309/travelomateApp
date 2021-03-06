#import "VideoCallVC.h"

// This category for the VideoCallVC serves only to separate code that
// is directly related to the usage of the Sinch SDK, from code that is used
// for improving the look and feel of the sample app.

// Nothing magic here, just regular code interacting with the iOS SDK.

// Includes helper methods for updating UI elements such as labels and buttons.
// Includes helper functionality around dealing with modal presentation of the
// call view.

@interface VideoCallVC (UIAdjustments)

- (void)setCallStatusText:(NSString *)text;

- (void)showButtons:(EVideoButtonsBar)buttons;

- (void)setDuration:(NSInteger)seconds;
- (void)startCallDurationTimerWithSelector:(SEL)sel;
- (void)stopCallDurationTimer;

@end
