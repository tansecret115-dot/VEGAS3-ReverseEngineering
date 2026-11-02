/* Module: Setup.exe
   Function: _SfList_SortTo@16
   Address: 0041a920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_SortTo_16(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
                    /* 0x1a920  249  _SfList_SortTo@16 */
  piVar3 = param_2;
  uVar1 = param_2[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar4 = GetCurrentThreadId(), DVar4 != piVar3[0xd])) {
    return 0x80004005;
  }
  piVar2 = param_1;
  param_1[0xc] = param_3;
  param_2 = (int *)*piVar3;
  if (param_4 != (undefined *)0x0) {
    if ((uVar1 >> 2 & 1) == 0) {
      iVar6 = 0;
      if (0 < (int)param_2) {
        do {
          piVar7 = *(int **)(piVar3[2] + iVar6 * 4);
          iVar5 = _SfList_FindSortedInsertIndexRange_20
                            (piVar2,piVar7,0,(undefined4 *)0xffffffff,param_4);
          param_1 = piVar7;
          _SfList_InsertList_16(piVar2,iVar5,(int *)&param_1,1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_2);
      }
    }
    else {
      iVar6 = 0;
      if (0 < (int)param_2) {
        do {
          piVar7 = (int *)(piVar3[1] * iVar6 + piVar3[2]);
          iVar5 = _SfList_FindSortedInsertIndexRange_20
                            (piVar2,piVar7,0,(undefined4 *)0xffffffff,param_4);
          _SfList_InsertList_16(piVar2,iVar5,piVar7,1);
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


