/* Module: aifplug.dll
   Function: FUN_5fbd3280
   Address: 5fbd3280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd3280(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x50) == 0) || (*(int *)(param_1 + 0x54) == 0)) &&
     (iVar1 = FUN_5fbd2ef0(param_1), iVar1 < 0)) {
    return iVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x50);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x54);
  }
  return 0;
}


