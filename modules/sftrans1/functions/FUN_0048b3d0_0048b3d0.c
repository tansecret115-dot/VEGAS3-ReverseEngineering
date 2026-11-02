/* Module: sftrans1.dll
   Function: FUN_0048b3d0
   Address: 0048b3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048b3d0(undefined4 *param_1)

{
  wchar_t *_Str;
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return -1;
  }
  iVar1 = FUN_00486940(*param_1);
  if ((iVar1 != 0) && (*(LPCSTR *)(iVar1 + 0x10) != (LPCSTR)0x0)) {
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar2 = lstrlenA(*(LPCSTR *)(iVar1 + 0x10));
    iVar5 = 0;
    iVar2 = iVar2 + (2 - iVar4);
    if (0 < iVar4) {
      iVar4 = param_1[1];
      do {
        _Str = *(wchar_t **)(iVar4 + iVar5 * 4);
        if (_Str != (wchar_t *)0x0) {
          sVar3 = wcslen(_Str);
          iVar2 = iVar2 + sVar3;
          iVar4 = param_1[1];
          if (**(short **)(iVar4 + iVar5 * 4) == 0x20) {
            iVar2 = iVar2 + 2;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar1 + 0xc));
    }
    return iVar2 + 1;
  }
  return 0;
}


