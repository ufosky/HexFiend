//
//  HFRepresenterHexTextView.h
//  HexFiend_2
//
//  Copyright 2007 ridiculous_fish. All rights reserved.
//

#import <HexFiend/HFRepresenterTextView.h>


@interface HFRepresenterHexTextView : HFRepresenterTextView {
    CGGlyph glyphTable[16];
    CGFloat glyphAdvancement;
    CGFloat spaceAdvancement;
}

@end
