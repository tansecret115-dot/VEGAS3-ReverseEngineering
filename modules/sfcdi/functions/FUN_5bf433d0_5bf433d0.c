/* Module: sfcdi.dll
   Function: FUN_5bf433d0
   Address: 5bf433d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf433d0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5bf40830(param_1,1,0,0x10);
  if (-1 < (int)uVar1) {
    FUN_5bf42330(param_1);
    uVar1 = FUN_5bf40830(param_1,2,0,1);
    if ((-1 < (int)uVar1) && (uVar1 = FUN_5bf40830(param_1,2,0,1), -1 < (int)uVar1)) {
      if (*(int *)(param_1 + 0xc) == 2) {
        uVar1 = FUN_5bf40830(param_1,3,0,1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        FUN_5bf42490(param_1);
      }
      uVar1 = FUN_5bf40830(param_1,4,0,1);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}


