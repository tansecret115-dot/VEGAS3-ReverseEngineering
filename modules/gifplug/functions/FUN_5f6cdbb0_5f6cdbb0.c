/* Module: gifplug.dll
   Function: FUN_5f6cdbb0
   Address: 5f6cdbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f6cdbb0(HMODULE param_1)

{
  int iVar1;
  
  FUN_5f6fb580();
  FUN_5f6fb590();
  DAT_5f70bec8 = FUN_5f6cd390();
  DAT_5f70bee8 = param_1;
  DAT_5f70bee4 = FUN_5f6cda80(0);
  _DAT_5f70c160 = 100;
  _DAT_5f70c154 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5f70c158 = 0;
  _DAT_5f70c164 = 0;
  FUN_5f6f8f50();
  FUN_5f6fa900(1);
  iVar1 = FUN_5f6ccc50();
  if (-1 < iVar1) {
    iVar1 = FUN_5f6cc410(&DAT_5f70bef0,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5f6ccc60(DAT_5f70bef0,&PTR_s_The_reason_for_the_error_could_n_5f70b024,0x1a8,4000);
      FUN_5f6cc5e0((uint *)0x0,0);
    }
  }
  FUN_5f6fb5a0();
  return -1 < iVar1;
}


