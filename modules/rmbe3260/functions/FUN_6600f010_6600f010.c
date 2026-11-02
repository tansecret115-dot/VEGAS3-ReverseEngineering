/* Module: rmbe3260.dll
   Function: FUN_6600f010
   Address: 6600f010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6600f010(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_12;
  undefined4 *local_e;
  
  uVar4 = 0;
  if (param_3 != 0) {
    if (param_4 != 0) {
      uVar2 = CONCAT11(*(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xb));
      local_12 = (uint)uVar2;
      if ((int)(param_3 + 0xe + ((uint)uVar2 - param_3) + -2) <= param_4) {
        uVar4 = uVar2 - 2;
        local_e = (undefined4 *)(param_3 + 0xe);
        goto LAB_6600f0d3;
      }
    }
    uVar4 = (local_12 & 0xffff) - 2;
  }
LAB_6600f0d3:
  puVar1 = operator_new(uVar4 + 1);
  *(undefined1 *)((int)puVar1 + uVar4) = 0;
  if (param_3 != 0) {
    puVar5 = puVar1;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *local_e;
      local_e = local_e + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)local_e;
      local_e = (undefined4 *)((int)local_e + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  FUN_6605b430(0,s__stype__s___s___flags__d__seq__d_6606c7b0);
  operator_delete(puVar1);
  return;
}


