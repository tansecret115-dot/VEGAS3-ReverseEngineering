/* Module: sfmarket2.dll
   Function: FUN_0044f810
   Address: 0044f810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_2;
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_3;
  }
  FUN_0044f8a0(puVar3,puVar2,puVar1);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0047e2b0((int)puVar3,*(void **)((int)puVar2 + 0x35));
    FUN_0047e250(puVar2);
    *param_2 = 0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0047e2b0((int)puVar3,*(void **)((int)puVar1 + 0x35));
    FUN_0047e250(puVar1);
    *param_3 = 0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0047e250(puVar3);
    *param_1 = 0;
  }
  return;
}


