/* Module: vidcap30.exe
   Function: _SfSummary_SetItem@12
   Address: 004b6630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSummary_SetItem_12(int param_1,undefined4 param_2,uchar *param_3)

{
  LPCVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  HGLOBAL pvVar4;
  uchar *_Dest;
  SIZE_T dwBytes;
  UINT uFlags;
  
                    /* 0xb6630  634  _SfSummary_SetItem@12 */
  if (param_3 == (uchar *)0x0) {
    dwBytes = 0;
  }
  else {
    iVar2 = lstrlenA((LPCSTR)param_3);
    dwBytes = iVar2 + 1;
  }
  iVar2 = _SfSummary_GetItemIndex_8(param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = FUN_004b6560(param_1,param_2,param_3);
    return uVar3;
  }
  if (dwBytes == 0) {
    pvVar1 = *(LPCVOID *)(*(int *)(param_1 + 4) + 4 + iVar2 * 8);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(*(LPCVOID *)(*(int *)(param_1 + 4) + 4 + iVar2 * 8));
      GlobalFree(pvVar4);
      *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar2 * 8) = 0;
      return 0;
    }
  }
  else {
    pvVar1 = *(LPCVOID *)(*(int *)(param_1 + 4) + 4 + iVar2 * 8);
    if (pvVar1 == (LPCVOID)0x0) {
      pvVar4 = GlobalAlloc(0x42,dwBytes);
    }
    else {
      pvVar4 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar4);
      uFlags = 0x42;
      pvVar4 = GlobalHandle(*(LPCVOID *)(*(int *)(param_1 + 4) + 4 + iVar2 * 8));
      pvVar4 = GlobalReAlloc(pvVar4,dwBytes,uFlags);
    }
    _Dest = GlobalLock(pvVar4);
    if (_Dest == (uchar *)0x0) {
      return 0x8007000e;
    }
    _mbscpy(_Dest,param_3);
    *(uchar **)(*(int *)(param_1 + 4) + 4 + iVar2 * 8) = _Dest;
  }
  return 0;
}


