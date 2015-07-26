//
//  ViewController.h
//  Quiz
//
//  Created by 董涛 on 15/7/26.
//  Copyright (c) 2015年 DONG TAO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic) int currentQuestionIndex;
@property (nonatomic, copy) NSArray *questions;
@property (nonatomic, copy) NSArray *answers;
@property (weak, nonatomic) IBOutlet UILabel *questionLabel;
@property (weak, nonatomic) IBOutlet UILabel *answerLabel;

- (IBAction)showQuestion:(UIButton *)sender;
- (IBAction)showAnswer:(UIButton *)sender;

@end

