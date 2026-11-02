/* Module: vidcap30.exe
   Function: _SfList_AllocSize@8
   Address: 004831c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfList_AllocSize_8(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  HGLOBAL hMem;
  SIZE_T SVar6;
  uint uVar7;
  int iVar8;
  
                    /* 0x831c0  493  _SfList_AllocSize@8 */
  uVar1 = param_1[10];
  uVar7 = uVar1 >> 2 & 1;
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar3 = GetCurrentThreadId(), DVar3 != param_1[0xd])) {
    return -0x7fffbffb;
  }
  if (param_2 < 0) {
    iVar4 = 0;
    if (uVar7 == 0) {
      iVar2 = *param_1;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          iVar5 = FUN_00481a30(param_1,*(undefined4 *)(param_1[2] + iVar8 * 4));
          iVar4 = iVar4 + iVar5;
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar2);
      }
    }
    hMem = GlobalHandle((LPCVOID)param_1[2]);
    SVar6 = GlobalSize(hMem);
    iVar4 = SVar6 + 0x54 + iVar4;
  }
  else if (uVar7 == 0) {
    iVar4 = FUN_00481a30(param_1,*(undefined4 *)(param_1[2] + param_2 * 4));
  }
  else {
    iVar4 = param_1[1];
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return iVar4;
}


