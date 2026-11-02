/* Module: sftrans1.dll
   Function: FUN_0048b030
   Address: 0048b030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048b030(int param_1,int param_2,int param_3,wchar_t *param_4)

{
  size_t sVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  HGLOBAL pvVar4;
  wchar_t *_Str;
  int iVar5;
  LPVOID local_8;
  LPVOID local_4;
  
  iVar5 = param_2;
  if (param_2 < 0) {
    iVar5 = 0;
  }
  if (param_3 < 0) {
    param_3 = **(int **)(param_1 + 0xa4) + -1;
  }
  if ((((param_4 != (wchar_t *)0x0) && (-1 < iVar5)) && (iVar5 < **(int **)(param_1 + 0xa4))) &&
     ((-1 < param_3 && (param_3 < **(int **)(param_1 + 0xa4))))) {
    param_2 = 0;
    FUN_0048adc0(&param_4,iVar5);
    _Str = param_4;
    sVar1 = wcslen(param_4);
    if (sVar1 != 0) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      FUN_00486ff0(iVar5,param_3,0);
      param_3 = iVar5;
      if (_Str < param_4 + sVar1) {
        do {
          pwVar2 = wcsstr(_Str,L"\r\n");
          if ((pwVar2 == (wchar_t *)0x0) || (param_4 + sVar1 < pwVar2)) {
LAB_0048b200:
            param_2 = 1;
            break;
          }
          sVar3 = wcslen(L"\r\n");
          sVar3 = sVar3 + ((int)pwVar2 - (int)_Str >> 1);
          pvVar4 = GlobalAlloc(0x40,sVar3 * 2 + 2);
          pwVar2 = GlobalLock(pvVar4);
          if (pwVar2 == (wchar_t *)0x0) goto LAB_0048b200;
          wcsncpy(pwVar2,_Str,sVar3);
          pwVar2[sVar3] = L'\0';
          pvVar4 = GlobalAlloc(0x40,0x10);
          local_8 = GlobalLock(pvVar4);
          if (local_8 == (LPVOID)0x0) {
            param_2 = 1;
            break;
          }
          iVar5 = FUN_0048b680(pwVar2,local_8);
          if (iVar5 != 0) {
            FUN_00486ba0(param_3,local_8);
          }
          _Str = _Str + sVar3;
          pvVar4 = GlobalHandle(pwVar2);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(pwVar2);
          GlobalFree(pvVar4);
          param_3 = param_3 + 1;
        } while (_Str < param_4 + sVar1);
      }
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
      local_4 = (LPVOID)FUN_0048c9a0(param_1 + 0x100);
      if (local_4 != (LPVOID)0x0) {
        FUN_0048c640(param_1 + 0x100,0);
        return param_2;
      }
      local_8 = local_4;
      FUN_0048c640(&local_8,0);
      return param_2;
    }
  }
  return 1;
}


