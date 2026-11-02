/* Module: aviplug.dll
   Function: FUN_5f9401f0
   Address: 5f9401f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f9401f0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  
  puVar2 = param_5;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  piVar6 = (int *)0x0;
  if (param_2 != 0) {
    piVar6 = (int *)(param_2 - 8);
    if (((uint)piVar6 & *(int *)(param_1 + 0x90) - 1U) != 0) {
      return (undefined4 *)0x0;
    }
    if (*piVar6 != 0x72657375) {
      return (undefined4 *)0x0;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x90);
  uVar7 = param_3 + 8;
  if (uVar1 != 0) {
    if (uVar1 < 3) {
      puVar4 = (undefined4 *)(uVar7 + (uVar7 & 1));
      goto LAB_5f94029a;
    }
    if (uVar1 == 4) {
      puVar3 = (undefined4 *)((uVar7 & 1) + uVar7);
      puVar4 = (undefined4 *)((int)puVar3 + 3U & 0xfffffffc);
      if ((puVar4 != puVar3) && ((uint)((int)puVar4 - (int)puVar3) < 8)) {
        puVar4 = puVar4 + 2;
      }
      goto LAB_5f94029a;
    }
  }
  puVar3 = (undefined4 *)((uVar7 & 1) + uVar7);
  puVar4 = (undefined4 *)((int)puVar3 + (uVar1 - 1) & ~(uVar1 - 1));
  if ((puVar4 != puVar3) && ((uint)((int)puVar4 - (int)puVar3) < 8)) {
    puVar4 = (undefined4 *)((int)puVar4 + uVar1);
  }
LAB_5f94029a:
  puVar3 = FUN_5f943000(piVar6,(SIZE_T)puVar4,0,param_4,(SIZE_T *)&param_5,(SIZE_T *)0x0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x72657375;
    puVar5 = param_5 + -2;
    puVar3[1] = puVar5;
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar5 < puVar4) {
        puVar5 = puVar4;
      }
      *puVar2 = puVar5 + -2;
    }
    return puVar3 + 2;
  }
  return (undefined4 *)0x0;
}


