/* Module: vegas30.exe
   Function: FUN_005e3ee0
   Address: 005e3ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_005e3ee0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_LAB_0062abd8;
  puVar2 = param_1 + 2;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0xe;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  return param_1;
}


