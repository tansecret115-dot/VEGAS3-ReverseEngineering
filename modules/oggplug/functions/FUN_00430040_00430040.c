/* Module: oggplug.dll
   Function: FUN_00430040
   Address: 00430040
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00430040(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pvVar1 = calloc(1,0xe28);
  param_1[7] = pvVar1;
  return;
}


