/* Module: oggplug.dll
   Function: FUN_00433900
   Address: 00433900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00433900(float *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = 0x38;
  do {
    iVar1 = iVar1 + -1;
    *param_1 = param_2 + *param_1;
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return;
}


