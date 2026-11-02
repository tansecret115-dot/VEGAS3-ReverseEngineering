/* Module: wmfdist2.exe
   Function: FUN_01007316
   Address: 01007316
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01007316(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_010073dc(param_1[10]);
  return 0;
}


