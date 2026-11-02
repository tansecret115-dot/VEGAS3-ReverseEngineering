/* Module: sfpagepeel.dll
   Function: FUN_00469500
   Address: 00469500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00469500(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00469450(param_1,-param_2 - 1);
  uVar1 = FUN_00469450(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_00469450(param_1 >> 0x10,uVar1);
  FUN_00469450(param_1 >> 0x18,uVar1);
  return;
}


