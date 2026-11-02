/* Module: wavplug.dll
   Function: FUN_5f38cfe0
   Address: 5f38cfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f38cfe0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = -0x7fffbffb;
  if (*(int *)(param_1 + 0x230) == 0) {
    iVar1 = FUN_5f38cc80(param_1);
  }
  if ((*(int *)(param_1 + 0x230) != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x230) + 4);
    iVar1 = 0;
  }
  return iVar1;
}


