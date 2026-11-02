/* Module: Setup.exe
   Function: FUN_00427dc0
   Address: 00427dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00427dc0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


