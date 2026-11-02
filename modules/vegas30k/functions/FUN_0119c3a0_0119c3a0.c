/* Module: vegas30k.dll
   Function: FUN_0119c3a0
   Address: 0119c3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119c3a0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 1;
  if ((((*(byte *)(param_1 + 8) & 4) == 0) &&
      (iVar1 = (**(code **)(*param_1 + 200))(param_1,0,0), iVar1 < 0)) ||
     (puVar4 = (undefined4 *)param_1[0x18e], iVar1 = iVar3, puVar4 == (undefined4 *)0x0)) {
    return iVar1;
  }
  while (((puVar4[9] == 0 && (param_1[9] == 1)) ||
         (iVar3 = (**(code **)(*(int *)*puVar4 + 0x154))(param_1), iVar3 == 0))) {
    puVar4 = (undefined4 *)puVar4[0x19];
    if (puVar4 == (undefined4 *)0x0) goto LAB_0119c40e;
  }
  for (puVar4 = (undefined4 *)param_1[0x18e]; puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[0x19]) {
    (**(code **)(*(int *)*puVar4 + 0x15c))(param_1);
  }
LAB_0119c40e:
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar2 = FUN_011aaf10(param_1);
  FUN_011aaee0(param_1,uVar2 | 0x10);
  param_1[8] = param_1[8] | 0x10;
  return 0;
}


