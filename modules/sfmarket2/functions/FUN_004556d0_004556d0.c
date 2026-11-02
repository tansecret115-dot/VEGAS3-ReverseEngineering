/* Module: sfmarket2.dll
   Function: FUN_004556d0
   Address: 004556d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004556d0(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
  }
  if ((param_2 != (undefined4 *)0x0) && (pvVar1 = (void *)*param_2, pvVar1 != (void *)0x0)) {
    FUN_0047e2b0((int)puVar2,*(void **)((int)pvVar1 + 0x35));
    FUN_0047e250(pvVar1);
    *param_2 = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00455730(puVar2);
    FUN_0047e250(puVar2);
    *param_1 = 0;
  }
  return;
}


