/* Module: pncrt.dll
   Function: FUN_78006020
   Address: 78006020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * __cdecl FUN_78006020(int param_1)

{
  if ((~DAT_78041abc & 1) != 0) {
    return (&PTR_s___based__78036258)[param_1];
  }
  return (&PTR_s___based__78036258)[param_1] + 2;
}


