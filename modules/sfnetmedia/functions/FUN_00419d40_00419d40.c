/* Module: sfnetmedia.dll
   Function: FUN_00419d40
   Address: 00419d40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00419d40(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_00441ffc == 0) {
    uVar1 = FUN_00419ba0();
    DAT_00441d54 = (uint)uVar1;
    DAT_00441ffc = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_00441d54 & param_1;
}


