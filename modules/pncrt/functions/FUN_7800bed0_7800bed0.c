/* Module: pncrt.dll
   Function: FUN_7800bed0
   Address: 7800bed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_7800bed0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_78042414 = 1;
                    /* WARNING: Could not recover jumptable at 0x7800beed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_78042414 = 1;
                    /* WARNING: Could not recover jumptable at 0x7800bf02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = __lc_codepage;
  }
  DAT_78042414 = (uint)bVar2;
  return param_1;
}


