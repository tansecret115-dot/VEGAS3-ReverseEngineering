/* Module: rmbe3260.dll
   Function: FUN_66021d60
   Address: 66021d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021d60(int param_1,int param_2,undefined4 *param_3)

{
  if (param_2 != 0) {
    return 0x80004001;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x19e);
  return 0;
}


