/* Module: wavplug.dll
   Function: FUN_5f3889e0
   Address: 5f3889e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3889e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (((*(int *)(param_1 + 0x28) == 0) || (*(int *)(param_1 + 0x2c) == 0)) &&
     (iVar1 = FUN_5f388520(param_1 + -0xa8), iVar1 < 0)) {
    return iVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x28);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x2c);
  }
  return iVar1;
}


