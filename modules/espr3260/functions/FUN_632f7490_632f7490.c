/* Module: espr3260.dll
   Function: FUN_632f7490
   Address: 632f7490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_632f7490(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (0 < param_3) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


