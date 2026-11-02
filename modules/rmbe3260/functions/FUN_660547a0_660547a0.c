/* Module: rmbe3260.dll
   Function: FUN_660547a0
   Address: 660547a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_660547a0(void *this,int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  
  piVar3 = operator_new(0x34);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = param_1;
    piVar3[2] = 1;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0xb] = 0;
    *piVar3 = (int)&PTR_FUN_660689b0;
    piVar3[6] = 0;
    piVar4 = operator_new(4);
    if (piVar4 == (int *)0x0) {
      piVar3[8] = 0;
      piVar3[7] = 0;
    }
    else {
      piVar4 = FUN_660576e0(piVar4);
      piVar3[7] = (int)piVar4;
      piVar3[8] = 0;
    }
  }
  iVar5 = (**(code **)(*param_3 + 4))(param_2,piVar3);
  if (iVar5 != 0) {
    pvVar6 = operator_new(0x1c);
    if (pvVar6 == (void *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = FUN_66057140(pvVar6,iVar5,0x10,FUN_66056fa0,&DAT_66060c20);
    }
    (**(code **)(*piVar3 + 0x18))(puVar7);
    puVar1 = *(uint **)((int)this + 8);
    if ((double)*puVar1 * _DAT_660689a8 < (double)puVar1[2]) {
      pvVar6 = operator_new((*puVar1 + puVar1[1]) * 4);
      uVar8 = 0;
      if (*puVar1 != 0) {
        do {
          uVar8 = uVar8 + 1;
          *(undefined4 *)((int)pvVar6 + uVar8 * 4 + -4) =
               *(undefined4 *)((puVar1[4] - 4) + uVar8 * 4);
        } while (uVar8 < *puVar1);
      }
      if (uVar8 < *puVar1 + puVar1[1]) {
        puVar7 = (undefined4 *)((int)pvVar6 + uVar8 * 4);
        do {
          *puVar7 = 0;
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 < *puVar1 + puVar1[1]);
      }
      operator_delete((void *)puVar1[4]);
      uVar8 = *puVar1;
      puVar1[4] = (uint)pvVar6;
      *puVar1 = uVar8 + puVar1[1];
      puVar1[1] = uVar8 + puVar1[1] >> 1;
    }
    uVar9 = (puVar1[3] + 1) % *puVar1;
    uVar8 = puVar1[4];
    iVar2 = *(int *)(uVar8 + uVar9 * 4);
    while (iVar2 != 0) {
      uVar9 = (uVar9 + 1) % *puVar1;
      iVar2 = *(int *)(uVar8 + uVar9 * 4);
    }
    puVar1[3] = uVar9;
    *(int *)(uVar8 + uVar9 * 4) = iVar5;
    puVar1[2] = puVar1[2] + 1;
    *(uint *)(iVar5 + 8) = uVar9 + 1;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    return iVar5;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)*piVar3)(1);
  }
  return 0;
}


