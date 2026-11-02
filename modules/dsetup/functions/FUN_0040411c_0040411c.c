/* Module: dsetup.dll
   Function: FUN_0040411c
   Address: 0040411c
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_0040411c(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_0040b03c;
  while( true ) {
    if (DAT_0040b03c + DAT_0040b038 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


