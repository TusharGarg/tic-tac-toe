
#import <Foundation/Foundation.h>

@class Player, TileLocation;

extern NSString * const EMPTY;

@interface Board : NSObject

@property(nonatomic, readonly) NSInteger numberOfMarkedTiles;

+ (instancetype)emptyBoard;
- (instancetype)initWithTiles:(NSArray *)tiles;

- (void)reset;
- (void)markTile:(TileLocation *)location withMark:(NSObject *)mark;
- (NSArray *)checkForThreeContinuousMarks;
- (BOOL)isTileMarked:(TileLocation *)location;

@end
