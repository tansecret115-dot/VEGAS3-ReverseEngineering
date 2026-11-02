/* Module: pncrt.dll
   Function: FUN_78019e60
   Address: 78019e60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78019e60(byte param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  
  pwVar2 = param_2;
  if (param_2[1] == L':') {
    pwVar2 = param_2 + 2;
  }
  wVar1 = *pwVar2;
  if ((((wVar1 == L'\\') || (wVar1 == L'/')) && (pwVar2[1] == L'\0')) ||
     (((param_1 & 0x10) != 0 || (uVar4 = 0x8000, wVar1 == L'\0')))) {
    uVar4 = 0x4040;
  }
  uVar4 = uVar4 | (uint)(~param_1 & 1 | 2) << 7;
  pwVar2 = wcsrchr(param_2,L'.');
  if (pwVar2 != (wchar_t *)0x0) {
    iVar3 = _wcsicmp(pwVar2,L".exe");
    if (iVar3 != 0) {
      iVar3 = _wcsicmp(pwVar2,L".cmd");
      if (iVar3 != 0) {
        iVar3 = _wcsicmp(pwVar2,L".bat");
        if (iVar3 != 0) {
          iVar3 = _wcsicmp(pwVar2,L".com");
          if (iVar3 != 0) goto LAB_78019f0c;
        }
      }
    }
    uVar4 = uVar4 | 0x40;
  }
LAB_78019f0c:
  return (uVar4 & 0x1c0) >> 6 | uVar4 | uVar4 >> 3 & 0x38;
}


