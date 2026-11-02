/* Module: 14_43260.dll
   Function: FUN_10001780
   Address: 10001780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_10001780(void *this,uint param_1,uint param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  ushort **ppuVar7;
  ushort *local_138 [64];
  ushort *local_38 [13];
  
  puVar1 = param_3;
  *param_3 = 0;
  if ((short)param_1 != 0) {
    return 0;
  }
  if (*(void **)((int)this + 0x26) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x26));
    *(undefined4 *)((int)this + 0x26) = 0;
  }
  switch(param_2 & 0xffff) {
  case 0:
    uVar2 = (**(code **)(*(int *)this + 8))(param_1,param_2,local_38,0x32);
    *puVar1 = uVar2;
    if (uVar2 == 0) goto switchD_100017dd_caseD_8;
    *puVar1 = uVar2 + 1;
    puVar4 = operator_new((uint)(ushort)(uVar2 + 1));
    *(undefined4 **)((int)this + 0x26) = puVar4;
    uVar6 = (uint)*puVar1;
    ppuVar7 = local_38;
    break;
  case 1:
    *puVar1 = 4;
    puVar4 = operator_new(4);
    *(undefined4 **)((int)this + 0x26) = puVar4;
    uVar6 = (uint)*puVar1;
    ppuVar7 = (ushort **)((int)this + (param_1 & 0xffff) * 4 + 0x1e);
    break;
  case 2:
    *puVar1 = 10;
    puVar3 = operator_new(10);
    *(undefined4 **)((int)this + 0x26) = puVar3;
    uVar2 = *puVar1;
    puVar4 = (undefined4 *)((int)this + (param_1 & 0xffff) * 10 + 4);
    for (uVar6 = (uint)(uVar2 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    return *(undefined4 *)((int)this + 0x26);
  case 3:
    *puVar1 = 10;
    puVar3 = operator_new(10);
    *(undefined4 **)((int)this + 0x26) = puVar3;
    uVar2 = *puVar1;
    puVar4 = (undefined4 *)((int)this + (param_1 & 0xffff) * 10 + 0xe);
    for (uVar6 = (uint)(uVar2 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    return *(undefined4 *)((int)this + 0x26);
  case 4:
  case 7:
    uVar2 = (**(code **)(*(int *)this + 8))(param_1,param_2,local_138,0x100);
    *puVar1 = uVar2;
    if (uVar2 == 0) goto switchD_100017dd_caseD_8;
    *puVar1 = uVar2 + 1;
    puVar4 = operator_new((uint)(ushort)(uVar2 + 1));
    *(undefined4 **)((int)this + 0x26) = puVar4;
    uVar6 = (uint)*puVar1;
    ppuVar7 = local_138;
    break;
  case 5:
    *puVar1 = 2;
    puVar3 = operator_new(2);
    *(undefined4 **)((int)this + 0x26) = puVar3;
    uVar2 = *puVar1;
    puVar4 = (undefined4 *)((int)this + (param_1 & 0xffff) * 2 + 0x18);
    for (uVar6 = (uint)(uVar2 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    return *(undefined4 *)((int)this + 0x26);
  case 6:
    *puVar1 = 4;
    puVar4 = operator_new(4);
    *(undefined4 **)((int)this + 0x26) = puVar4;
    uVar6 = (uint)*puVar1;
    ppuVar7 = (ushort **)((int)this + (param_1 & 0xffff) * 4 + 0x1a);
    break;
  default:
    goto switchD_100017dd_caseD_8;
  case 0x13:
    *puVar1 = 4;
    puVar3 = operator_new(4);
    *(undefined4 **)((int)this + 0x26) = puVar3;
    uVar2 = *puVar1;
    puVar4 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x22);
    for (uVar6 = (uint)(uVar2 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    return *(undefined4 *)((int)this + 0x26);
  case 0x14:
    param_3 = (ushort *)(*(int *)((int)this + 0x1a) << 3);
    *puVar1 = 4;
    puVar4 = operator_new(4);
    *(undefined4 **)((int)this + 0x26) = puVar4;
    uVar6 = (uint)*puVar1;
    ppuVar7 = &param_3;
  }
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = *ppuVar7;
    ppuVar7 = ppuVar7 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)ppuVar7;
    ppuVar7 = (ushort **)((int)ppuVar7 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
switchD_100017dd_caseD_8:
  return *(undefined4 *)((int)this + 0x26);
}


