/* Module: erv33260.dll
   Function: FUN_670739b0
   Address: 670739b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_670739b0(void *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_3c [13];
  void *local_8;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (local_8 = this, uVar3 = (*(code *)**(undefined4 **)this)(), pvVar2 = local_8, uVar3 <= param_2
     )) {
    *param_1 = 0x8c;
    param_1[1] = 0xa8;
    param_1[2] = 0x34;
    param_1[3] = 0x54;
    puVar6 = (undefined4 *)((int)this + 0x224);
    puVar7 = param_1 + 4;
    for (iVar5 = 0x23; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    piVar1 = (int *)((int)local_8 + -4);
    uVar4 = (**(code **)(*(int *)((int)local_8 + -4) + 4))();
    param_1[0x27] = uVar4;
    iVar5 = (**(code **)(*piVar1 + 4))();
    puVar6 = param_1 + 0x28;
    if (iVar5 == 0) {
      uVar3 = (**(code **)(*(int *)((int)pvVar2 + -0x68) + 0x38))(local_3c);
      if (uVar3 != 0) {
        return uVar3;
      }
      puVar6 = param_1 + 0x35;
      puVar7 = local_3c;
      puVar8 = param_1 + 0x28;
      for (iVar5 = 0xd; pvVar2 = local_8, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar7 = (undefined4 *)((int)pvVar2 + 0x1c);
    puVar8 = puVar6;
    for (iVar5 = 0x2a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    return (uint)(param_2 < (uint)((int)puVar6 + (0xa8 - (int)param_1)));
  }
  return 1;
}


