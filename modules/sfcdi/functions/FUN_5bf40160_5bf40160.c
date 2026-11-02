/* Module: sfcdi.dll
   Function: FUN_5bf40160
   Address: 5bf40160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf40160(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_5bf3fe30(param_1);
  if (-1 < iVar1) {
    iVar1 = FUN_5bf3fa30(param_1);
    if (-1 < iVar1) {
      iVar1 = FUN_5bf3ff90(param_1);
      if (-1 < iVar1) {
        FUN_5bf3fed0(param_1);
      }
    }
  }
  return;
}


