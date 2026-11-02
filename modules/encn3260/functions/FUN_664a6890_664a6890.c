/* Module: encn3260.dll
   Function: FUN_664a6890
   Address: 664a6890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a6890(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xcc);
  param_2[1] = *(undefined4 *)(param_1 + 0xd0);
  return 0;
}


