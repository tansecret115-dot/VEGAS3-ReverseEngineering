/* Module: rmto3260.dll
   Function: FUN_662d7950
   Address: 662d7950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d7950(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  return 0;
}


