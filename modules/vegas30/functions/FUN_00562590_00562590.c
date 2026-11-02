/* Module: vegas30.exe
   Function: FUN_00562590
   Address: 00562590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00562590(undefined4 param_1,int param_2,int param_3)

{
  if (((param_2 == 0x8000) || (param_2 == 0x8004)) && (*(int *)(param_3 + 4) == 5)) {
    return 1;
  }
  return 0;
}


