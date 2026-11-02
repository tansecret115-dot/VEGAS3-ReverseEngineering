/* Module: mpgmux.dll
   Function: FUN_1000d8cb
   Address: 1000d8cb
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_1000d8cb(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1001c678;
  while( true ) {
    if (DAT_1001c678 + DAT_1001c674 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


