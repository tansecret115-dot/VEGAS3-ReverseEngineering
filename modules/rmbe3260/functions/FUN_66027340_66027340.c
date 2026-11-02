/* Module: rmbe3260.dll
   Function: FUN_66027340
   Address: 66027340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66027340(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  return 0;
}


