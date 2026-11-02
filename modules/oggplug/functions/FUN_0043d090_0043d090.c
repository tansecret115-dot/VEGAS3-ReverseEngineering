/* Module: oggplug.dll
   Function: FUN_0043d090
   Address: 0043d090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043d090(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    free(param_1);
  }
  return;
}


