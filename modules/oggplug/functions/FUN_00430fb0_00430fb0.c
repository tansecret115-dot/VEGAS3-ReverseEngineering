/* Module: oggplug.dll
   Function: FUN_00430fb0
   Address: 00430fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00430fb0(undefined4 *param_1)

{
  int iVar1;
  
  if (((int *)param_1[0x10] != (int *)0x0) && (*(int *)param_1[0x10] != 0)) {
    FUN_00441db0(param_1 + 1);
  }
  FUN_00430f40((int)param_1);
  if ((void *)param_1[0x11] != (void *)0x0) {
    free((void *)param_1[0x11]);
  }
  if ((void *)param_1[0x1a] != (void *)0x0) {
    free((void *)param_1[0x1a]);
  }
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


