/* Module: rmbe3260.dll
   Function: FUN_6603d210
   Address: 6603d210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6603d210(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_66067fa8;
  param_1[1] = 0;
  FUN_6605cda0(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_6605b650(param_1 + 10);
  FUN_6605b650(param_1 + 0xd);
  FUN_6605b650(param_1 + 0x10);
  FUN_6605b650(param_1 + 0x13);
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  FUN_6605ef20(param_1 + 0x19,10);
  *param_1 = &PTR_FUN_66067fa0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  puVar1 = FUN_6603d760();
  param_1[0x17] = puVar1;
  return param_1;
}


