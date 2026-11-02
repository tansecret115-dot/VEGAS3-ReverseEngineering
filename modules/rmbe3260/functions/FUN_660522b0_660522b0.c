/* Module: rmbe3260.dll
   Function: FUN_660522b0
   Address: 660522b0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_660522b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_66051fe0();
  if (iVar1 == 0) {
    return 0;
  }
  return (byte)_mbctype_exref[(param_1 & 0xff) + 1] & 4;
}


