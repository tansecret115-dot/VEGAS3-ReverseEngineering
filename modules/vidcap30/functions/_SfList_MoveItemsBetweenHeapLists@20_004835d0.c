/* Module: vidcap30.exe
   Function: _SfList_MoveItemsBetweenHeapLists@20
   Address: 004835d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfList_MoveItemsBetweenHeapLists_20
              (int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x835d0  513  _SfList_MoveItemsBetweenHeapLists@20 */
  iVar1 = param_1[10];
  iVar3 = -0x7fffbffb;
  iVar2 = param_3[10];
  if (iVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  if (iVar2 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 3));
  }
  if ((((*(byte *)(param_1 + 10) & 2) != 0) && ((param_3[10] & 2U) != 0)) && (param_1[0x13] == 0)) {
    if (param_2 < 0) {
      param_2 = *param_1;
    }
    if (param_5 < 0) {
      param_5 = *param_3;
    }
    if (param_5 == 0) {
      iVar3 = 0;
    }
    else if (param_5 + param_4 <= *param_3) {
      iVar4 = param_5 + param_4 + -1;
      param_3[10] = param_3[10] & 0xfffffffd;
      if (param_4 <= iVar4) {
        while( true ) {
          param_1[0x13] = *(int *)(param_3[2] + iVar4 * 4);
          iVar3 = _SfList_InsertList_16(param_1,param_2,0,0xffffffff);
          if (iVar3 < 0) break;
          iVar3 = _SfList_DeleteList_16(param_3,iVar4,1,0);
          if ((iVar3 < 0) || (iVar4 = iVar4 + -1, iVar4 < param_4)) break;
        }
      }
      param_3[10] = param_3[10] | 2;
      param_1[0x13] = 0;
    }
  }
  if (iVar2 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_3 + 3));
  }
  if (iVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return iVar3;
}


