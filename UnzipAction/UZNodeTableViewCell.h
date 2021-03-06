//
//  UZNodeTableViewCell.h
//  Unzip
//
//  Created by Indragie on 8/6/14.
//  Copyright (c) 2014 Indragie Karunaratne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UZNodeTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UIImageView *glyphImageView;
@property (nonatomic, weak) IBOutlet UILabel *fileNameLabel;
@property (nonatomic, weak) IBOutlet UILabel *fileSizeLabel;

+ (NSString *)reuseIdentifier;
+ (CGFloat)rowHeight;

@end
