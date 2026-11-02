/* Module: sfpagepeel.dll
   Function: FUN_0040a540
   Address: 0040a540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040a540(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 **ppuVar2;
  
  ppuVar2 = &param_1;
  iVar1 = (**(code **)*param_1)(param_1);
  if (-1 < iVar1) {
    (**(code **)(DAT_00475528 + 0xc))(&DAT_00475528,ppuVar2,0x18);
    (*(code *)(*ppuVar2)[2])(ppuVar2);
    return;
  }
  return;
}


