/* Module: wavplug.dll
   Function: FUN_5f391970
   Address: 5f391970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f391970(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = -0x7fffbffb;
  if (*(int *)(param_1 + 0x230) == 0) {
    iVar1 = FUN_5f3916e0(param_1);
  }
  if ((*(int *)(param_1 + 0x230) != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x230) + 4);
    iVar1 = 0;
  }
  return iVar1;
}


