//
//  DetailViewController.h
//  KaraokeLibrary
//
//  Created by Mohan Gopalkrishna on 4/16/16.
//  Copyright © 2016 Mohan Gopalkrishna. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

