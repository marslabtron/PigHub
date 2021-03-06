//
//  LanguagesModel.h
//  PigHub
//
//  Created by Rainbow on 2016/12/31.
//  Copyright © 2016年 PizzaLiu. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - Language

@interface Language : NSObject <NSCoding>

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *query;

- initWithName:(NSString *)name query:(NSString *)query;

@end

#pragma mark - LanguageModel

@interface LanguagesModel : NSObject

+ (instancetype) sharedStore;
- (NSString *) languageNameForIndex:(NSInteger) index;
- (Language *) languageForIndex:(NSInteger) index;
- (Language *) languageForName:(NSString *) name;
- (Language *) languageForQuery:(NSString *) query;
- (NSInteger) languagesCount;
- (NSArray *) allLanguages;
- (void) moveLanguageAtIndex:(NSInteger) fromIndex toIndex:(NSInteger) toIndex;

@end
