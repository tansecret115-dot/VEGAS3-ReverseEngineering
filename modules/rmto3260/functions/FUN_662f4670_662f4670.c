/* Module: rmto3260.dll
   Function: FUN_662f4670
   Address: 662f4670
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_662f4670(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_662f4470();
  if (iVar1 == 0) {
    return 0;
  }
  return (byte)_mbctype_exref[(param_1 & 0xff) + 1] & 4;
}


