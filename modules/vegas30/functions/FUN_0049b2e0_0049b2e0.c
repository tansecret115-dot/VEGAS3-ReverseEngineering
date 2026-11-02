/* Module: vegas30.exe
   Function: FUN_0049b2e0
   Address: 0049b2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049b2e0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_2;
  iVar4 = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xf7ffffff;
  iVar1 = *param_2;
  param_1 = 0;
  iVar3 = _SfList_CreateExZ_32(&param_1,4,iVar1 + 1,0x10,0,0,0,0);
  if (iVar3 < 0) {
    return 0;
  }
  if (0 < iVar1) {
    do {
      param_2 = *(int **)(piVar2[2] + iVar4 * 4);
      if ((*(uint *)(*(int *)((int)param_2 + 8) + 0x10) & 0x400000) == 0) {
        _SfList_InsertList_16(param_1,0xffffffff,&param_2,1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return param_1;
}


