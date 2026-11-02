/* Module: hhupd.exe
   Function: FUN_01007590
   Address: 01007590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01007590(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_010076a0(param_1[10]);
  return 0;
}


