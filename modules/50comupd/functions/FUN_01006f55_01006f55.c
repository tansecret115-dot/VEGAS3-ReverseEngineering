/* Module: 50comupd.exe
   Function: FUN_01006f55
   Address: 01006f55
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01006f55(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_0100701b(param_1[10]);
  return 0;
}


