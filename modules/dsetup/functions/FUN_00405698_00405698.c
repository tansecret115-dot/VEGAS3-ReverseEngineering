/* Module: dsetup.dll
   Function: FUN_00405698
   Address: 00405698
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00405698(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_0040ac68 = 1;
                    /* WARNING: Could not recover jumptable at 0x004056b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_0040ac68 = 1;
                    /* WARNING: Could not recover jumptable at 0x004056c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_0040ac94;
  }
  DAT_0040ac68 = (uint)bVar2;
  return param_1;
}


