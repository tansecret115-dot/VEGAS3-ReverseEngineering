/* Module: vidcap30.exe
   Function: FUN_0044fa10
   Address: 0044fa10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044fa10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_005bb838;
  iVar3 = *(int *)(param_1 + 0x420);
  uVar4 = 0;
  switch(*(undefined4 *)(*(int *)(param_1 + 0x438) + 0x424)) {
  case 2:
  case 4:
    if ((*(int *)(&DAT_0058bbd8 + param_2 * 8) != 0) && ((*(byte *)(iVar3 + 0x38) & 2) != 0)) {
      FUN_00441970(*(undefined4 *)(iVar3 + 0x14));
      FUN_0044fb80(*(undefined4 *)(iVar3 + 0x14));
      FUN_00443b20(iVar3,0,2);
    }
    if (*(int *)(&DAT_0058bbdc + param_2 * 8) != 0) {
      iVar2 = _SfList_FindSpecificItemRange_16(DAT_005bba98,0,0xffffffff,iVar3);
      if (-1 < iVar2) {
        _SfList_DeleteList_16(DAT_005bba98,iVar2,1,0);
      }
      FUN_00444480(iVar1,iVar3,0);
      return 1;
    }
    break;
  case 3:
    uVar4 = FUN_0045f7b0(DAT_005bb838,*(undefined4 *)(*(int *)(param_1 + 0x438) + 0x420),
                         *(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
    FUN_0045f6a0(iVar1,uVar4);
    return 1;
  case 6:
    FUN_00443b20(iVar3,0,4);
    uVar4 = 1;
    break;
  case 7:
    iVar3 = _SfList_FindSpecificItemRange_16(DAT_005bba98,0,0xffffffff,iVar3);
    if (-1 < iVar3) {
      _SfList_DeleteList_16(DAT_005bba98,iVar3,1,0);
      **(uint **)(iVar1 + 4) = **(uint **)(iVar1 + 4) | 0x8000;
      return 1;
    }
  }
  return uVar4;
}


