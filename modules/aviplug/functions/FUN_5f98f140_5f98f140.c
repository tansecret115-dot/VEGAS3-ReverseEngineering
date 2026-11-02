/* Module: aviplug.dll
   Function: FUN_5f98f140
   Address: 5f98f140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f98f140(int *param_1,undefined4 param_2,uchar *param_3)

{
  uchar *_Dest;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  SIZE_T dwBytes;
  UINT uFlags;
  
  dwBytes = *param_1 * 8 + 8;
  if ((LPCVOID)param_1[1] == (LPCVOID)0x0) {
    pvVar1 = GlobalAlloc(0x42,dwBytes);
  }
  else {
    pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalUnlock(pvVar1);
    uFlags = 0x42;
    pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
    pvVar1 = GlobalReAlloc(pvVar1,dwBytes,uFlags);
  }
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  iVar3 = *param_1;
  *param_1 = iVar3 + 1;
  param_1[1] = (int)pvVar2;
  *(undefined4 *)((int)pvVar2 + (iVar3 + 1) * 8 + -8) = param_2;
  *(undefined4 *)(param_1[1] + -4 + *param_1 * 8) = 0;
  if (param_3 != (uchar *)0x0) {
    iVar3 = lstrlenA((LPCSTR)param_3);
    pvVar1 = GlobalAlloc(0x42,iVar3 + 1);
    pvVar2 = GlobalLock(pvVar1);
    *(LPVOID *)(param_1[1] + -4 + *param_1 * 8) = pvVar2;
    _Dest = *(uchar **)(param_1[1] + -4 + *param_1 * 8);
    if (_Dest == (uchar *)0x0) {
      return 0x8007000e;
    }
    _mbscpy(_Dest,param_3);
  }
  return 0;
}


