/* Module: vidpcore.dll
   Function: FUN_5df0b130
   Address: 5df0b130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5df0b130(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x200] == 1) && (*param_1 != 0)) && (*(int *)(*param_1 + 4) != 0)) {
    iVar1 = FUN_5df12d60();
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0;
}


