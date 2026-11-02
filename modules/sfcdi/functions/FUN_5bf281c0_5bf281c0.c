/* Module: sfcdi.dll
   Function: FUN_5bf281c0
   Address: 5bf281c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf281c0(undefined4 *param_1,HRSRC param_2)

{
  HGLOBAL pvVar1;
  
  if ((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
     (pvVar1 = LoadResource((HMODULE)param_1[0x4e],param_2), pvVar1 != (HGLOBAL)0x0)) {
    return;
  }
  LoadResource((HMODULE)*param_1,param_2);
  return;
}


