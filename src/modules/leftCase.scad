include <../config.scad>;
use <./case.scad>;

module leftCase(){
    case([
        caseSection(
            keyPositions = FINGER_GRID,
            keyHeight = 1.0,
            rotation = HAND_ROTATION,
            boltPositions = FINGER_BOLT_HOLES,
            plateHull = false,
            caseBottomThickness = CASE_BOTTOM_THICKNESS,
            plateUndersideClearance =
                PCB_PLATE_OFFSET_Z + 
                PCB_UNDERSIDE_CLEARANCE + 
                PCB_THICKNESS,
            boltLength = BOLT_LENGTH,
            flangeStandoffs = true),
        caseSection(
            keyPositions = THUMB_GRID,
            keyHeight = 1.25,
            offset = THUMB_OFFSET,
            rotation = THUMB_ROTATION,
            boltPositions = [],
            plateHull = false,
            caseBottomThickness = CASE_BOTTOM_THICKNESS,
            plateUndersideClearance =
                PCB_PLATE_OFFSET_Z + 
                PCB_UNDERSIDE_CLEARANCE + 
                PCB_THICKNESS,
            boltLength = BOLT_LENGTH),
        caseSection(
            keyPositions = THUMB_GRID_2,
            keyHeight = 1,
            offset = THUMB_OFFSET,
            rotation = THUMB_ROTATION,
            boltPositions = THUMB_BOLT_HOLES,
            plateHull = false,
            caseBottomThickness = CASE_BOTTOM_THICKNESS,
            plateUndersideClearance =
                PCB_PLATE_OFFSET_Z + 
                PCB_UNDERSIDE_CLEARANCE + 
                PCB_THICKNESS,
            boltLength = BOLT_LENGTH)],
        usbCutoutPosition = [
            PLATE_BEZEL + 3.5 * 1U, 
            66, 
            PCB_UNDERSIDE_CLEARANCE - max(MCU_PCB_OFFSET, USB_C_SIZE.z) + USB_C_SIZE.z / 2],
        trrsCutoutPosition = [
            PLATE_BEZEL + 5 * 1U + 0.5, 
            60, 
            PCB_UNDERSIDE_CLEARANCE - 3.5 / 2 - 0.5],
        feetPositions = FEET_POSITIONS);
}
leftCase($fn = 20);
//mirror([1,0,0])
//translate([-350,0,0])
//leftCase($fn = 20);