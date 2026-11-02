/* Module: sfxpfx2.dll
   Function: FUN_5c8a69e0
   Address: 5c8a69e0
   Source: Ghidra pseudocode (Stage 10 batch) */


HGLOBAL FUN_5c8a69e0(undefined4 *param_1,LPCSTR param_2,LPCSTR param_3,DWORD *param_4)

{
  HRSRC pHVar1;
  HGLOBAL pvVar2;
  DWORD DVar3;
  
  if ((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
     (pHVar1 = FindResourceExA((HMODULE)param_1[0x4e],param_3,param_2,*(WORD *)(param_1 + 0x4f)),
     pHVar1 != (HRSRC)0x0)) {
    pvVar2 = LoadResource((HMODULE)param_1[0x4e],pHVar1);
    if (param_4 != (DWORD *)0x0) {
      DVar3 = SizeofResource((HMODULE)param_1[0x4e],pHVar1);
      *param_4 = DVar3;
    }
    if (pvVar2 != (HGLOBAL)0x0) {
      return pvVar2;
    }
  }
  pvVar2 = (HGLOBAL)0x0;
  pHVar1 = FindResourceA((HMODULE)*param_1,param_2,param_3);
  if ((pHVar1 != (HRSRC)0x0) &&
     (pvVar2 = LoadResource((HMODULE)*param_1,pHVar1), param_4 != (DWORD *)0x0)) {
    DVar3 = SizeofResource((HMODULE)*param_1,pHVar1);
    *param_4 = DVar3;
  }
  return pvVar2;
}


