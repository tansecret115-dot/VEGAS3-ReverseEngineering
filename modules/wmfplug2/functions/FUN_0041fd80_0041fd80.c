/* Module: wmfplug2.dll
   Function: FUN_0041fd80
   Address: 0041fd80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041fd80(undefined4 *param_1,HRSRC param_2)

{
  if (((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) {
    SizeofResource((HMODULE)param_1[0x4e],param_2);
    return;
  }
  SizeofResource((HMODULE)*param_1,param_2);
  return;
}


