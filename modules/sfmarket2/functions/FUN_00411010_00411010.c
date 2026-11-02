/* Module: sfmarket2.dll
   Function: FUN_00411010
   Address: 00411010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00411010(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x80070057;
  if (param_1 != (int *)0x0) {
    iVar2 = 0;
    if (0 < *param_1) {
      do {
        FUN_0040f560(*(undefined4 **)(param_1[2] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    uVar1 = FUN_00428a70(param_1);
  }
  return uVar1;
}


