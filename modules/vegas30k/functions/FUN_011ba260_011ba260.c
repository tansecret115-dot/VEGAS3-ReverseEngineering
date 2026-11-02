/* Module: vegas30k.dll
   Function: FUN_011ba260
   Address: 011ba260
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011ba260(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 1;
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (param_2 < *(int *)(param_1 + 0x10))) {
    piVar2 = *(int **)(*(int *)(iVar1 + 8) + param_2 * 4);
    if (piVar2 != (int *)0x0) {
      iVar3 = _SfList_DeleteList_16(iVar1,param_2,1,1);
      if (-1 < iVar3) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
    if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return iVar3;
    }
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x14);
  }
  return iVar3;
}


