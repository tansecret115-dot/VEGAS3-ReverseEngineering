/* Module: InstMsi-x86a.exe
   Function: FUN_010076a0
   Address: 010076a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_010076a0(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_010077b0(param_1[10]);
  return 0;
}


