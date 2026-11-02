/* Module: vidcap30.exe
   Function: FUN_0044a310
   Address: 0044a310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044a310(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  int local_4;
  
  piVar1 = param_1;
  iVar6 = 0;
  local_c = 0;
  local_4 = DAT_005bb838;
  _SfList_DeleteList_16(param_1[0xba],0,0xffffffff,0);
  iVar2 = _SfList_CreateExZ_32(&param_1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (-1 < iVar2) {
    iVar2 = FUN_00448740(piVar1[0x22],1);
    if ((iVar2 != 0) && (iVar3 = FUN_0044c620(iVar2), 0 < iVar3)) {
      do {
        uVar4 = FUN_0044c5c0(iVar2,iVar6);
        iVar5 = FUN_0044c6e0(uVar4);
        if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x38) & 4) != 0)) {
          local_8 = iVar5;
          _SfList_InsertList_16(param_1,0xffffffff,&local_8,1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    if (*param_1 < 1) {
      SfMsgBox(piVar1[2],0x40,"No clips are currently marked for batch capture.");
    }
    else {
      FUN_004446a0(param_1,1);
      local_c = FUN_00415510(piVar1[2],local_4,param_1);
      if (local_c != 0) {
        iVar6 = 0;
        iVar2 = *param_1;
        if (0 < iVar2) {
          do {
            iVar3 = *(int *)(param_1[2] + iVar6 * 4);
            if ((*(byte *)(iVar3 + 0x38) & 4) != 0) {
              local_4 = iVar3;
              _SfList_InsertList_16(piVar1[0xba],0xffffffff,&local_4,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
      }
    }
  }
  if (param_1 != (int *)0x0) {
    _SfList_Destroy_4(param_1);
  }
  if (*(int *)piVar1[0xba] != 0) {
    return local_c;
  }
  return 0;
}


