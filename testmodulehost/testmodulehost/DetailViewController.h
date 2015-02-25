//
//  DetailViewController.h
//  testmodulehost
//
//  Created by Rodrigo Birriel on 2/25/15.
//
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

