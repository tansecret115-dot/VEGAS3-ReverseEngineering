/* Module: sftrans1.dll
   Function: FUN_00548d60
   Address: 00548d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00548d60(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  iVar5 = FUN_0054eb40(*param_2,param_2[1],param_2[2],param_2[3]);
  if (iVar5 == -1) {
    return 0;
  }
  puVar2 = *(undefined8 **)
            (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8) +
            iVar5 * 4);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  uVar3 = *(undefined4 *)((int)puVar2 + 0xc);
  uVar4 = *(undefined4 *)(puVar2 + 1);
  uVar1 = *puVar2;
  puVar6 = puVar2;
  for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = (undefined8 *)((int)puVar6 + 4);
  }
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = uVar4;
  *(undefined4 *)((int)puVar2 + 0xc) = uVar3;
  return 1;
}


