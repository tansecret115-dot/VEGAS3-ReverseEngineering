/* Module: erv23260.dll
   Function: FUN_63804290
   Address: 63804290
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_63804290(void *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_3c [13];
  void *local_8;
  
  if ((param_1 == (undefined4 *)0x0) ||
     (local_8 = this, uVar3 = (*(code *)**(undefined4 **)this)(), pvVar2 = local_8, param_2 < uVar3)
     ) {
    return 1;
  }
  *param_1 = 0x98;
  param_1[1] = 0xbc;
  param_1[2] = 0x34;
  param_1[3] = 0x54;
  puVar9 = (undefined4 *)((int)this + 0x7a0);
  puVar7 = param_1 + 4;
  for (iVar5 = 0x26; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar7 = puVar7 + 1;
  }
  piVar1 = (int *)((int)local_8 + -4);
  uVar4 = (**(code **)(*(int *)((int)local_8 + -4) + 4))();
  param_1[0x2a] = uVar4;
  puVar9 = param_1 + 0x2b;
  iVar5 = (**(code **)(*piVar1 + 4))();
  if (iVar5 == 0) {
    uVar3 = (**(code **)(*(int *)((int)pvVar2 + -0x68) + 0x38))(local_3c);
    if (uVar3 != 0) {
      return uVar3;
    }
    puVar7 = local_3c;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar9 = (undefined4 *)((int)local_8 + 0x1c);
    puVar7 = param_1 + 0x38;
    for (iVar5 = 0x2f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
    }
    return (uint)(param_2 < 0x19c);
  }
  iVar5 = 0;
  if (0 < *(int *)((int)pvVar2 + 0x18)) {
    puVar7 = (undefined4 *)((int)pvVar2 + 0x1c);
    puVar8 = puVar9;
    do {
      puVar9 = puVar8 + 0x2f;
      puVar10 = puVar7;
      for (iVar6 = 0x2f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 0x1df;
      puVar8 = puVar9;
    } while (iVar5 < *(int *)((int)local_8 + 0x18));
  }
  return (uint)(param_2 < (uint)((int)puVar9 - (int)param_1));
}


