/* Module: sftrans1.dll
   Function: FUN_00545dd0
   Address: 00545dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00545dd0(int *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_5 + param_3 == 0) {
    puVar1 = (undefined4 *)FUN_00545bb0();
    *param_2 = *puVar1;
    return;
  }
  FUN_00545c10(param_5 + param_3);
  puVar1 = (undefined4 *)(*param_1 + param_4);
  puVar3 = (undefined4 *)*param_2;
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}


