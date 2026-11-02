/* Module: mcplugrw.dll
   Function: FUN_0044d060
   Address: 0044d060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044d060(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
  }
  if ((param_2 != (undefined4 *)0x0) && (pvVar1 = (void *)*param_2, pvVar1 != (void *)0x0)) {
    FUN_00475ac0((int)puVar2,*(void **)((int)pvVar1 + 0x35));
    FUN_00475a60(pvVar1);
    *param_2 = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0044d0c0(puVar2);
    FUN_00475a60(puVar2);
    *param_1 = 0;
  }
  return;
}


