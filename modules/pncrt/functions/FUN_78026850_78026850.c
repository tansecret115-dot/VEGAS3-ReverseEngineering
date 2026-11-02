/* Module: pncrt.dll
   Function: FUN_78026850
   Address: 78026850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78026850(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  wchar_t *_Source;
  wchar_t local_8 [4];
  
  pwVar1 = wcsrchr(param_1,L'.');
  uVar2 = wcstoul(pwVar1 + 1,(wchar_t **)0x0,0x20);
  if (0x7ffe < uVar2 + 1) {
    return 0xffffffff;
  }
  _Source = _ultow(uVar2 + 1,local_8,0x20);
  wcscpy(pwVar1 + 1,_Source);
  return 0;
}


