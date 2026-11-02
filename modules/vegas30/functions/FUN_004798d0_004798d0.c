/* Module: vegas30.exe
   Function: FUN_004798d0
   Address: 004798d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004798d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = **(int **)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar2 = (*(int **)(param_2 + 0x30))[2];
    piVar4 = (int *)(*(int *)(param_1 + 0x54) + 0x20);
    if (*piVar4 == 0) {
      _SfList_CreateExZ_32(piVar4,0x10,iVar1,4,0x40000004,0,0,0);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 0x20);
    if (iVar3 != 0) {
      _SfList_DeleteList_16(iVar3,0,0xffffffff,0);
      _SfList_InsertList_16(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x20),0,iVar2,iVar1);
    }
  }
  return;
}


