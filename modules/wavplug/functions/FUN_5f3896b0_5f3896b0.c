/* Module: wavplug.dll
   Function: FUN_5f3896b0
   Address: 5f3896b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3896b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_5f389530(param_1 + -4);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0x60) != 0) {
      puVar3 = (undefined4 *)(param_1 + 0x48);
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
      return iVar1;
    }
    iVar1 = 1;
  }
  return iVar1;
}


