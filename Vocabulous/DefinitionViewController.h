//
//  DefinitionViewController.h
//  Vocabulous
//
//  Created by Nik on 7/28/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DefinitionViewController : UIViewController {
    UIWebView *webView;
    NSString *word;
}

@property (nonatomic, copy) NSString *word;

@end
