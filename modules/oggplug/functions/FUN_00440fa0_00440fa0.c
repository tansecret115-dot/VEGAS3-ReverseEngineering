/* Module: oggplug.dll
   Function: FUN_00440fa0
   Address: 00440fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00440fa0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = param_1;
    for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = 0x4000;
    pvVar1 = malloc(0x4000);
    *param_1 = pvVar1;
    param_1[6] = 0x400;
    pvVar1 = malloc(0x1000);
    param_1[4] = pvVar1;
    pvVar1 = malloc(param_1[6] << 3);
    param_1[5] = pvVar1;
    FUN_00441010();
    param_1[0x54] = param_2;
    return 0;
  }
  return 0xffffffff;
}


