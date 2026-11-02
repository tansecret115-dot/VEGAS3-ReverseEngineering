/* Module: oggplug.dll
   Function: FUN_0043d0b0
   Address: 0043d0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043d0b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
    }
    if ((void *)param_1[10] != (void *)0x0) {
      free((void *)param_1[10]);
    }
    FUN_00438680(param_1 + 5);
    puVar2 = param_1;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    free(param_1);
  }
  return;
}


