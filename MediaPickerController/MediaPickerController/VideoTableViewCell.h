//
//  VideoTableViewCell.h
//  MediaPickerController
//
//  Created by Iftekhar on 23/08/14.
//  Copyright (c) 2014 Iftekhar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *imageViewVideo;
@property (strong, nonatomic) IBOutlet UILabel *labelTitle;
@property (strong, nonatomic) IBOutlet UILabel *labelSubtitle;
@property (strong, nonatomic) IBOutlet UIButton *buttonPlay;

@end