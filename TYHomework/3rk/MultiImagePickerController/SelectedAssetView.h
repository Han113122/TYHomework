//
// Created by malczak on 1/10/13.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>


@interface SelectedAssetView : UIView {

    UIImageView *imageView;

    NSString *assetUniqueId;

    ALAsset *asset;

}

@property (nonatomic, assign) BOOL dragged;

@property (nonatomic, readonly, getter=_getAsset) ALAsset *asset;

-(instancetype) initWithFrame:(CGRect) inFrame andAsset:(ALAsset *) inAsset;

-(NSString *) assetUID;

@end