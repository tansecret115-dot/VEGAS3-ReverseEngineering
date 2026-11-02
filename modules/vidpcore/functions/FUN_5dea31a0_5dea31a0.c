/* Module: vidpcore.dll
   Function: FUN_5dea31a0
   Address: 5dea31a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5dea31a0(undefined4 param_1)

{
  int iVar1;
  
  FUN_5ded8d70();
  FUN_5ded8d80();
  DAT_5df42eb0 = FUN_5dea2980();
  DAT_5df42ed0 = param_1;
  DAT_5df42ecc = FUN_5dea3070(0);
  DAT_5df43148 = 100;
  DAT_5df4313c = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5df43140 = 0;
  _DAT_5df4314c = 0;
  FUN_5ded6740(param_1);
  FUN_5ded80f0(1);
  iVar1 = FUN_5deb8870();
  if (-1 < iVar1) {
    iVar1 = FUN_5deb8030(&DAT_5df42ed8,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5deb8880(DAT_5df42ed8,&PTR_s_The_reason_for_the_error_could_n_5df3d9b0,0x1a9,4000);
      FUN_5deb8200(0,0);
    }
  }
  FUN_5ded8d90();
  return -1 < iVar1;
}


