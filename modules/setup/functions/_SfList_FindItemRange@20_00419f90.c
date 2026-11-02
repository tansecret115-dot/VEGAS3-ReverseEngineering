/* Module: Setup.exe
   Function: _SfList_FindItemRange@20
   Address: 00419f90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfList_FindItemRange_20
               (int *param_1,uint param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  
                    /* 0x19f90  227  _SfList_FindItemRange@20 */
  uVar1 = param_1[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar3 = GetCurrentThreadId(), DVar3 != param_1[0xd])) {
    return 0xffffffff;
  }
  iVar2 = *param_1;
  uVar5 = ((int)param_2 < 0) - 1 & param_2;
  if (param_3 < 0) {
    param_3 = iVar2 - uVar5;
  }
  else if ((int)(iVar2 - uVar5) <= param_3) {
    param_3 = iVar2 - uVar5;
  }
  if ((int)uVar5 < iVar2) {
    if (param_3 < 1) {
      uVar5 = 0xffffffff;
    }
    else {
      iVar2 = (uVar5 - 1) + param_3;
      for (; (int)uVar5 <= iVar2; uVar5 = uVar5 + 1) {
        if ((uVar1 >> 2 & 1) == 0) {
          iVar4 = *(int *)(param_1[2] + uVar5 * 4);
        }
        else {
          iVar4 = param_1[1] * uVar5 + param_1[2];
        }
        iVar4 = (*(code *)param_5)(param_4,iVar4);
        if (iVar4 == 0) {
          if ((int)uVar5 <= iVar2) goto LAB_0041a051;
          break;
        }
      }
      uVar5 = 0xffffffff;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
LAB_0041a051:
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return uVar5;
}


