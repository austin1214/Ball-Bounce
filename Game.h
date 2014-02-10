//
//  Game.h
//  Ball Bounce
//
//  Created by HDGamer1214 on 1/21/14.
//  Copyright (c) 2014 Austin Brogdon. All rights reserved.
//

#import <UIKit/UIKit.h>

float PlatformMoveDown;
float SideMovement;
float UpMovement;
int RandomPosition;
int Platform3SideMovement;
int Platform5SideMovement;

BOOL BallLeft;
BOOL BallRight;
BOOL StopSideMovement;

int ScoreNumber;
int HighScoreNumber;
int AddedScore;
int LevelNumber;

BOOL Platform1Used;
BOOL Platform2Used;
BOOL Platform3Used;
BOOL Platform4Used;
BOOL Platform5Used;

@interface Game : UIViewController
{
    
    IBOutlet UIButton *Start;
    IBOutlet UIImageView *Ball;
    IBOutlet UIImageView *Platform1;
    IBOutlet UIImageView *Platform2;
    IBOutlet UIImageView *Platform3;
    IBOutlet UIImageView *Platform4;
    IBOutlet UIImageView *Platform5;
    
    IBOutlet UILabel *Score;
    IBOutlet UILabel *GameOver;
    IBOutlet UILabel *FinalScore;
    IBOutlet UILabel *HighScore;
    IBOutlet UIButton *Exit;
    
    
    
    NSTimer *Movement;
}

-(IBAction)StartGame:(id)sender;
-(void)Moving;
-(void)Bounce;
-(void)PlatormMovement;
-(void)PlatformFall;
-(void)Scoring;
-(void)GameOver;



@end
