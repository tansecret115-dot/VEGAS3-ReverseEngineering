/* Module: rmto3260.dll
   Function: FUN_662c38a0
   Address: 662c38a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c38a0(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x2c);
    return 0;
  }
  return 0x80040007;
}


