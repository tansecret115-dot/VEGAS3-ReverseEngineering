/* Module: rmbe3260.dll
   Function: FUN_66061790
   Address: 66061790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66061790(int *param_1,byte *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (*(void **)((int)param_1 + 0x4e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x4e));
    *(undefined4 *)((int)param_1 + 0x4e) = 0;
    *(undefined4 *)((int)param_1 + 0x52) = 0;
  }
  piVar2 = operator_new(0x19);
  piVar7 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    *(undefined2 *)(piVar2 + 4) = 0;
    *(undefined2 *)((int)piVar2 + 0x13) = 0;
    *(undefined4 *)((int)piVar2 + 0x15) = 0;
    *(undefined1 *)((int)piVar2 + 0x12) = 0;
    *piVar2 = (int)&PTR_FUN_66068d78;
    piVar7 = piVar2;
  }
  (**(code **)(*piVar7 + 4))(piVar7);
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    *(ushort *)((int)param_1 + 0x56) = (ushort)bVar1 << 8;
    *(ushort *)((int)param_1 + 0x56) = CONCAT11(bVar1,param_2[1]);
    *(ushort *)(param_1 + 0x16) = (ushort)param_2[2] << 8;
    *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) | (ushort)param_2[3];
  }
  if (*(short *)((int)param_1 + 0x56) == 0) {
    param_3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,piVar7);
  }
  else if (*(short *)((int)param_1 + 0x56) == 1) {
    param_3 = (**(code **)(*param_1 + 0x24))(param_1,param_2,param_3,piVar7);
  }
  else {
    param_3 = -0x7ffbfffb;
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    param_3 = (**(code **)(*piVar2 + 0xc))(piVar2,piVar7,param_4);
  }
  if (-1 < param_3) {
    piVar2 = (int *)(**(code **)(*piVar7 + 0x10))(piVar7);
    if (piVar2 != (int *)0x0) {
      if (*(void **)((int)param_1 + 0x4e) != (void *)0x0) {
        operator_delete(*(void **)((int)param_1 + 0x4e));
        *(undefined4 *)((int)param_1 + 0x4e) = 0;
        *(undefined4 *)((int)param_1 + 0x52) = 0;
      }
      uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
      *(uint *)((int)param_1 + 0x52) = uVar3;
      pvVar4 = operator_new(uVar3);
      uVar3 = *(uint *)((int)param_1 + 0x52);
      *(void **)((int)param_1 + 0x4e) = pvVar4;
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))(piVar2);
      puVar8 = *(undefined4 **)((int)param_1 + 0x4e);
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
  }
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  return param_3;
}


