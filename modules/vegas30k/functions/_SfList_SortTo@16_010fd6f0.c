/* Module: vegas30k.dll
   Function: _SfList_SortTo@16
   Address: 010fd6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_SortTo_16(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
                    /* 0xfd6f0  1086  _SfList_SortTo@16 */
  piVar3 = param_2;
  uVar1 = param_2[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar4 = GetCurrentThreadId(), DVar4 != piVar3[0xd])) {
    return 0x80004005;
  }
  iVar2 = param_1;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  param_2 = (int *)*piVar3;
  if (param_4 != 0) {
    if ((uVar1 >> 2 & 1) == 0) {
      iVar6 = 0;
      if (0 < (int)param_2) {
        do {
          iVar7 = *(int *)(piVar3[2] + iVar6 * 4);
          uVar5 = _SfList_FindSortedInsertIndexRange_20(iVar2,iVar7,0,0xffffffff,param_4);
          param_1 = iVar7;
          _SfList_InsertList_16(iVar2,uVar5,&param_1,1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_2);
      }
    }
    else {
      iVar6 = 0;
      if (0 < (int)param_2) {
        do {
          iVar7 = piVar3[1] * iVar6 + piVar3[2];
          uVar5 = _SfList_FindSortedInsertIndexRange_20(iVar2,iVar7,0,0xffffffff,param_4);
          _SfList_InsertList_16(iVar2,uVar5,iVar7,1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_2);
      }
    }
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3 + 3));
  }
  return 0;
}


