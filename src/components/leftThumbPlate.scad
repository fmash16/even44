include <../config.scad>;
use <../modules/plate.scad>;
use <../modules/keys.scad>;
module leftThumbPlate() {
        
linear_extrude(PLATE_THICKNESS)
    plate(
        keyPositions = THUMB_GRID,
        keyHeight = 1.25,
        boltPositions = THUMB_BOLT_HOLES,
        cutHoles = true,
        $fn = 100);

linear_extrude(PLATE_THICKNESS)
    plate(
        keyPositions = THUMB_GRID_2,
        keyHeight = 1,
        boltPositions = THUMB_BOLT_HOLES,
        cutHoles = true,
        $fn = 100);
}
mirror([1,0,0])
leftThumbPlate();
    
if(DRAW_DEBUG)
    %keys(
        keyPositions = THUMB_GRID,
        keyHeight = 1.25,
        $fn = 20);
if(DRAW_DEBUG)
    %keys(
        keyPositions = THUMB_GRID_2,
        keyHeight = 1,
        $fn = 20);