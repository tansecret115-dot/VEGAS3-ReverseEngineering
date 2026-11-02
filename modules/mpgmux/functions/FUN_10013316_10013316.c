/* Module: mpgmux.dll
   Function: FUN_10013316
   Address: 10013316
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10013316(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1001b15c = 1;
                    /* WARNING: Could not recover jumptable at 0x10013330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1001b15c = 1;
                    /* WARNING: Could not recover jumptable at 0x10013345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1001b190;
  }
  DAT_1001b15c = (uint)bVar2;
  return param_1;
}


