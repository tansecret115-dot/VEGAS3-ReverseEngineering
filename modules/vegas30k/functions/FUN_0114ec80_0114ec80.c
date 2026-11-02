/* Module: vegas30k.dll
   Function: FUN_0114ec80
   Address: 0114ec80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114ec80(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = **(int **)(param_1 + 0x44);
  if (iVar1 != 0) {
    while (param_2 != **(int **)(*(int *)(param_1 + 0x44) + 8)) {
      _SfList_DeleteList_16(*(int *)(param_1 + 0x44),0,1,0);
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) {
        return;
      }
    }
    uVar2 = 1;
  }
  if (1 < iVar1) {
    iVar1 = iVar1 + -1;
    do {
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x44),uVar2,1,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


