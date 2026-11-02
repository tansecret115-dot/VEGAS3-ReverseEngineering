/* Module: vegas30.exe
   Function: FUN_00596170
   Address: 00596170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00596170(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_2 + 4) == 2) {
    FUN_00595760(param_1,param_2);
    iVar2 = 0;
    iVar1 = **(int **)(param_2 + 0x5d0);
    if (0 < iVar1) {
      do {
        FUN_00595ba0(param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x5d0) + 8) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_2 + 0x5d0),0,0xffffffff,0);
    *(undefined4 *)(param_2 + 0x400) = 1;
    *(undefined4 *)(param_2 + 0x404) = 0xc0000000;
    puVar3 = (undefined4 *)(param_2 + 0x400);
    puVar4 = (undefined4 *)(param_2 + 0x408);
    for (iVar1 = 0x72; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_00595790(param_1,param_2);
  }
  return;
}


