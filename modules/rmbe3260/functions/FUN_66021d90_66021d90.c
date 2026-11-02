/* Module: rmbe3260.dll
   Function: FUN_66021d90
   Address: 66021d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021d90(int param_1,int param_2,undefined4 *param_3)

{
  if (param_2 != 0) {
    return 0x80004001;
  }
  *(undefined4 *)(param_1 + 0x19e) = *param_3;
  return 0;
}


