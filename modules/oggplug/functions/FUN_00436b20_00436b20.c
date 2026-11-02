/* Module: oggplug.dll
   Function: FUN_00436b20
   Address: 00436b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00436b20(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    free((void *)param_1[1]);
    free((void *)param_1[2]);
    free((void *)param_1[3]);
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


