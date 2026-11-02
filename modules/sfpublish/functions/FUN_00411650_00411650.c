/* Module: sfpublish.dll
   Function: FUN_00411650
   Address: 00411650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411650(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x2c) == (undefined4 *)0x0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x2c);
}


