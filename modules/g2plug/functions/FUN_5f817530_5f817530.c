/* Module: g2plug.dll
   Function: FUN_5f817530
   Address: 5f817530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f817530(undefined4 *param_1,LPCSTR param_2,LPCSTR param_3)

{
  HRSRC pHVar1;
  
  if ((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
     (pHVar1 = FindResourceExA((HMODULE)param_1[0x4e],param_3,param_2,*(WORD *)(param_1 + 0x4f)),
     pHVar1 != (HRSRC)0x0)) {
    return;
  }
  FindResourceA((HMODULE)*param_1,param_2,param_3);
  return;
}


