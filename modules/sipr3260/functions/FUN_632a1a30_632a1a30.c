/* Module: sipr3260.dll
   Function: FUN_632a1a30
   Address: 632a1a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_632a1a30(void *this,uint param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_138 [64];
  undefined4 local_38 [13];
  
  *param_3 = 0;
  if (3 < (ushort)param_1) {
    return 0;
  }
  if (*(void **)((int)this + 0xac) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0xac));
    *(undefined4 *)((int)this + 0xac) = 0;
  }
  switch(param_2 & 0xffff) {
  case 0:
    uVar1 = (**(code **)(*(int *)this + 8))(param_1,param_2,local_38,0x32);
    *param_3 = uVar1;
    if (uVar1 != 0) {
      *param_3 = uVar1 + 1;
      puVar2 = operator_new((uint)(ushort)(uVar1 + 1));
      *(undefined4 **)((int)this + 0xac) = puVar2;
      uVar1 = *param_3;
      puVar5 = local_38;
      for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      return *(int *)((int)this + 0xac);
    }
    goto switchD_632a1a93_caseD_8;
  case 1:
    *param_3 = 4;
    puVar2 = operator_new(4);
    *(undefined4 **)((int)this + 0xac) = puVar2;
    uVar1 = *param_3;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x6c);
    for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    return *(int *)((int)this + 0xac);
  case 2:
    *param_3 = 10;
    puVar2 = operator_new(10);
    *(undefined4 **)((int)this + 0xac) = puVar2;
    uVar4 = (uint)*param_3;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 10 + 4);
    break;
  case 3:
    *param_3 = 10;
    puVar2 = operator_new(10);
    *(undefined4 **)((int)this + 0xac) = puVar2;
    uVar4 = (uint)*param_3;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 10 + 0x2c);
    break;
  case 4:
  case 7:
    uVar1 = (**(code **)(*(int *)this + 8))(param_1,param_2,local_138,0x100);
    *param_3 = uVar1;
    if (uVar1 != 0) {
      *param_3 = uVar1 + 1;
      puVar2 = operator_new((uint)(ushort)(uVar1 + 1));
      *(undefined4 **)((int)this + 0xac) = puVar2;
      uVar1 = *param_3;
      puVar5 = local_138;
      for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      return *(int *)((int)this + 0xac);
    }
    goto switchD_632a1a93_caseD_8;
  case 5:
    *param_3 = 2;
    puVar2 = operator_new(2);
    *(undefined4 **)((int)this + 0xac) = puVar2;
    uVar1 = *param_3;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 2 + 0x54);
    for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    return *(int *)((int)this + 0xac);
  case 6:
    *param_3 = 4;
    puVar2 = operator_new(4);
    *(undefined4 **)((int)this + 0xac) = puVar2;
    uVar4 = (uint)*param_3;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x5c);
    break;
  default:
    goto switchD_632a1a93_caseD_8;
  case 0xe:
    *param_3 = 4;
    puVar2 = operator_new(4);
    *(undefined4 **)((int)this + 0xac) = puVar2;
    uVar1 = *param_3;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x8c);
    for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    return *(int *)((int)this + 0xac);
  case 0x13:
    *param_3 = 4;
    puVar2 = operator_new(4);
    *(undefined4 **)((int)this + 0xac) = puVar2;
    uVar4 = (uint)*param_3;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x7c);
    break;
  case 0x14:
    *param_3 = 4;
    puVar2 = operator_new(4);
    *(undefined4 **)((int)this + 0xac) = puVar2;
    uVar4 = (uint)*param_3;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x9c);
  }
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
switchD_632a1a93_caseD_8:
  return *(int *)((int)this + 0xac);
}


