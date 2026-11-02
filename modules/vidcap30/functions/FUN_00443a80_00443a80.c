/* Module: vidcap30.exe
   Function: FUN_00443a80
   Address: 00443a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00443a80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = 1;
  FUN_0042f4b0(param_1,1);
  iVar3 = param_3;
  iVar2 = param_2;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar5 = -0x7fffbffd;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 != param_3) {
      uVar4 = FUN_004449e0(param_3,param_2);
      param_2 = iVar2;
      iVar5 = _SfList_InsertList_16(*(undefined4 *)(iVar3 + 0x10),uVar4,&param_2,1);
      if (-1 < iVar5) {
        uVar4 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 0x10),0,0xffffffff,iVar2);
        _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0x10),uVar4,1,0);
        *(int *)(iVar2 + 4) = iVar3;
        **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x200;
      }
    }
  }
  FUN_0042f5d0(param_1,1);
  return iVar5;
}


