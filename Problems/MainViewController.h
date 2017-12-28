
#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController

@property (nonatomic, retain) NSArray *list;
@property (nonatomic, retain) IBOutlet UIButton *button;

//- (IBAction)buttonTapped:(id)sender;
@property (retain, nonatomic) IBOutlet UIButton *buttonTapped;
- (IBAction)buttonTapped:(id)sender;

@end
