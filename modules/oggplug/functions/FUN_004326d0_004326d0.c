/* Module: oggplug.dll
   Function: FUN_004326d0
   Address: 004326d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004326d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = malloc(0xd4);
  for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}


