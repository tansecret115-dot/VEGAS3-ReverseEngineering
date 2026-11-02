/* Module: oggplug.dll
   Function: FUN_00430e80
   Address: 00430e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00430e80(int *param_1,undefined4 *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_2[0x10] = param_1;
  param_2[0x13] = 0;
  param_2[0x11] = 0;
  if (*param_1 != 0) {
    FUN_00441d50(param_2 + 1);
    pvVar1 = calloc(1,8);
    param_2[0x1a] = pvVar1;
    *(undefined4 *)((int)pvVar1 + 4) = 0xc61c3c00;
  }
  return 0;
}


