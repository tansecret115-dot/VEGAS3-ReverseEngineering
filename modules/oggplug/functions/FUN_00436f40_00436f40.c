/* Module: oggplug.dll
   Function: FUN_00436f40
   Address: 00436f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00436f40(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[3];
  for (iVar1 = (*param_1 & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}


