/* Module: sftrans1.dll
   Function: FUN_00544d70
   Address: 00544d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00544d70(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)FUN_00545bb0();
  *param_1 = *puVar1;
  if (0 < (int)param_3) {
    FUN_00545c10(param_3);
    puVar1 = (undefined4 *)*param_1;
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      puVar1 = puVar1 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar1 = param_2;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    return param_1;
  }
  return param_1;
}


