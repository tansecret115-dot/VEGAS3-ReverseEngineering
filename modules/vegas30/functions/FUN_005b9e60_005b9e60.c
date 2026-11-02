/* Module: vegas30.exe
   Function: FUN_005b9e60
   Address: 005b9e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b9e60(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  _SfList_DeleteList_16(param_2,0,0xffffffff,0);
  if (param_1 != 0) {
    iVar3 = **(int **)(param_1 + 0x1dc);
    uVar4 = param_4 & param_3;
    param_4 = 0;
    local_4 = iVar3;
    if (0 < iVar3) {
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + param_4 * 4);
        if (((*(uint *)(iVar1 + 0x10) & 0x400000) == 0) &&
           ((param_5 == 0 || (*(int *)(iVar1 + 4) != 3)))) {
          iVar2 = **(int **)(iVar1 + 0x24);
          iVar5 = 0;
          if (0 < iVar2) {
            do {
              local_8 = *(int *)(*(int *)(*(int *)(iVar1 + 0x24) + 8) + iVar5 * 4);
              if ((*(uint *)(local_8 + 0x10) & param_3) == uVar4) {
                _SfList_InsertList_16(param_2,0xffffffff,&local_8,1);
              }
              iVar5 = iVar5 + 1;
              iVar3 = local_4;
            } while (iVar5 < iVar2);
          }
        }
        param_4 = param_4 + 1;
      } while ((int)param_4 < iVar3);
    }
    return 0;
  }
  return 0x80070057;
}


