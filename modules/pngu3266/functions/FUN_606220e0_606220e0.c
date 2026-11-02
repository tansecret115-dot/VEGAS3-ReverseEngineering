/* Module: pngu3266.dll
   Function: FUN_606220e0
   Address: 606220e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_606220e0(void *this,int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  
  iVar10 = (param_2 / 1000) * 1000;
  puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x18))();
  (**(code **)(*param_3 + 4))(param_3);
  *puVar4 = param_3;
  iVar5 = ftol();
  if ((iVar5 < 0x200) && (-1 < iVar5)) {
    uVar2 = *(undefined4 *)((int)this + iVar5 * 4 + 4);
    puVar4[2] = param_1;
    puVar4[1] = uVar2;
    puVar4[3] = iVar10;
    *(undefined4 **)((int)this + iVar5 * 4 + 4) = puVar4;
  }
  else {
    if (param_1 == 0) {
      if (*(int *)((int)this + 0x808) != 0) {
        puVar4[1] = *(undefined4 *)(*(int *)((int)this + 0x808) + 4);
        *(undefined4 **)(*(int *)((int)this + 0x808) + 4) = puVar4;
        *(undefined4 **)((int)this + 0x808) = puVar4;
        puVar4[2] = 0;
        puVar4[3] = iVar10;
        goto LAB_606221ea;
      }
      *(undefined4 **)((int)this + 0x808) = puVar4;
    }
    piVar1 = (int *)((int)this + 0x804);
    for (iVar5 = *(int *)((int)this + 0x804);
        ((iVar5 != 0 && (*(int *)(iVar5 + 8) <= param_1)) &&
        ((*(int *)(iVar5 + 8) != param_1 || (*(int *)(iVar5 + 0xc) < iVar10))));
        iVar5 = *(int *)(iVar5 + 4)) {
      piVar1 = (int *)(iVar5 + 4);
    }
    *piVar1 = (int)puVar4;
    puVar4[2] = param_1;
    puVar4[1] = iVar5;
    puVar4[3] = iVar10;
  }
LAB_606221ea:
  iVar5 = *(int *)((int)this + 0x818);
  if (((iVar5 == 1) || (param_1 < iVar5)) ||
     ((iVar5 == param_1 && (iVar10 < *(int *)((int)this + 0x81c))))) {
    *(int *)((int)this + 0x818) = param_1;
    *(int *)((int)this + 0x81c) = iVar10;
  }
  *(int *)((int)this + 0x80c) = *(int *)((int)this + 0x80c) + 1;
  puVar3 = *(uint **)((int)this + 0x820);
  if ((double)*puVar3 * _DAT_6062d448 < (double)puVar3[2]) {
    pvVar6 = operator_new((*puVar3 + puVar3[1]) * 4);
    uVar7 = 0;
    if (*puVar3 != 0) {
      do {
        uVar7 = uVar7 + 1;
        *(undefined4 *)((int)pvVar6 + uVar7 * 4 + -4) = *(undefined4 *)((puVar3[4] - 4) + uVar7 * 4)
        ;
      } while (uVar7 < *puVar3);
    }
    if (uVar7 < *puVar3 + puVar3[1]) {
      puVar8 = (undefined4 *)((int)pvVar6 + uVar7 * 4);
      do {
        *puVar8 = 0;
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar7 < *puVar3 + puVar3[1]);
    }
    operator_delete((void *)puVar3[4]);
    uVar7 = *puVar3;
    puVar3[4] = (uint)pvVar6;
    *puVar3 = uVar7 + puVar3[1];
    puVar3[1] = uVar7 + puVar3[1] >> 1;
  }
  uVar9 = (puVar3[3] + 1) % *puVar3;
  uVar7 = puVar3[4];
  iVar5 = *(int *)(uVar7 + uVar9 * 4);
  while (iVar5 != 0) {
    uVar9 = (uVar9 + 1) % *puVar3;
    iVar5 = *(int *)(uVar7 + uVar9 * 4);
  }
  puVar3[3] = uVar9;
  *(undefined4 **)(uVar7 + uVar9 * 4) = puVar4;
  puVar3[2] = puVar3[2] + 1;
  puVar4[5] = uVar9 + 1;
  return;
}


