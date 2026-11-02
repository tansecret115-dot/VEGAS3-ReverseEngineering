/* Module: vegas30k.dll
   Function: _SfFindResInstance@12
   Address: 010c4ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfFindResInstance_12(undefined4 *param_1,LPCSTR param_2,LPCSTR param_3)

{
  HRSRC pHVar1;
  
                    /* 0xc4ab0  929  _SfFindResInstance@12 */
  if (((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) {
    pHVar1 = FindResourceExA((HMODULE)param_1[0x4e],param_3,param_2,*(WORD *)(param_1 + 0x4f));
    if (pHVar1 != (HRSRC)0x0) {
      return param_1[0x4e];
    }
  }
  FindResourceA((HMODULE)*param_1,param_2,param_3);
  return *param_1;
}


