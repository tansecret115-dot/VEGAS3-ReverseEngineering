/* Module: pncrt.dll
   Function: FUN_78019c60
   Address: 78019c60
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl FUN_78019c60(uint param_1,wchar_t *param_2,uint param_3)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  DWORD DVar4;
  uint uVar5;
  wchar_t *pwVar6;
  WCHAR local_214 [4];
  LPWSTR local_20c;
  WCHAR local_208 [260];
  
  if (param_1 == 0) {
    DVar4 = GetCurrentDirectoryW(0x104,local_208);
  }
  else {
    iVar1 = FUN_780190f0(param_1);
    if (iVar1 == 0) {
      puVar2 = __doserrno();
      *puVar2 = 0xf;
      piVar3 = _errno();
      *piVar3 = 0xd;
      return (wchar_t *)0x0;
    }
    local_214[0] = (short)param_1 + L'@';
    local_214[1] = 0x3a;
    local_214[2] = 0x2e;
    local_214[3] = 0;
    DVar4 = GetFullPathNameW(local_214,0x104,local_208,&local_20c);
  }
  if ((DVar4 != 0) && (uVar5 = DVar4 + 1, uVar5 < 0x105)) {
    if (param_2 == (wchar_t *)0x0) {
      if ((int)uVar5 <= (int)param_3) {
        uVar5 = param_3;
      }
      param_2 = malloc(uVar5 * 2);
      if (param_2 == (wchar_t *)0x0) {
        piVar3 = _errno();
        *piVar3 = 0xc;
        return (wchar_t *)0x0;
      }
    }
    else if ((int)param_3 < (int)uVar5) {
      piVar3 = _errno();
      *piVar3 = 0x22;
      return (wchar_t *)0x0;
    }
    pwVar6 = wcscpy(param_2,local_208);
    return pwVar6;
  }
  return (wchar_t *)0x0;
}


