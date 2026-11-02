/* Module: vidcap30.exe
   Function: FUN_0045c190
   Address: 0045c190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_0045c190(undefined4 *param_1)

{
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *param_1 = &PTR_LAB_0058c2c8;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}


