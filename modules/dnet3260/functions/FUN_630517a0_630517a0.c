/* Module: dnet3260.dll
   Function: FUN_630517a0
   Address: 630517a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_630517a0(void *this,uint param_1,uint param_2,ushort *param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  ushort **ppuVar8;
  ushort *local_138 [64];
  ushort *local_38 [13];
  
  puVar2 = param_3;
  *param_3 = 0;
  if (0xb < (ushort)param_1) {
    return 0;
  }
  if (*(void **)((int)this + 0x1fc) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x1fc));
    *(undefined4 *)((int)this + 0x1fc) = 0;
  }
  switch(param_2 & 0xffff) {
  case 0:
    uVar3 = (**(code **)(*(int *)this + 8))(param_1,param_2,local_38,0x32);
    *puVar2 = uVar3;
    if (uVar3 == 0) goto switchD_630517fb_caseD_8;
    *puVar2 = uVar3 + 1;
    puVar5 = operator_new((uint)(ushort)(uVar3 + 1));
    *(undefined4 **)((int)this + 0x1fc) = puVar5;
    uVar7 = (uint)*puVar2;
    ppuVar8 = local_38;
    break;
  case 1:
    *puVar2 = 4;
    puVar5 = operator_new(4);
    *(undefined4 **)((int)this + 0x1fc) = puVar5;
    uVar7 = (uint)*puVar2;
    ppuVar8 = (ushort **)((int)this + (param_1 & 0xffff) * 4 + 0x13c);
    break;
  case 2:
    *puVar2 = 10;
    puVar4 = operator_new(10);
    *(undefined4 **)((int)this + 0x1fc) = puVar4;
    uVar3 = *puVar2;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 10 + 4);
    for (uVar7 = (uint)(uVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return *(int *)((int)this + 0x1fc);
  case 3:
    *puVar2 = 10;
    puVar4 = operator_new(10);
    *(undefined4 **)((int)this + 0x1fc) = puVar4;
    uVar3 = *puVar2;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 10 + 0x7c);
    for (uVar7 = (uint)(uVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return *(int *)((int)this + 0x1fc);
  case 4:
  case 7:
    uVar3 = (**(code **)(*(int *)this + 8))(param_1,param_2,local_138,0x100);
    *puVar2 = uVar3;
    if (uVar3 == 0) goto switchD_630517fb_caseD_8;
    *puVar2 = uVar3 + 1;
    puVar5 = operator_new((uint)(ushort)(uVar3 + 1));
    *(undefined4 **)((int)this + 0x1fc) = puVar5;
    uVar7 = (uint)*puVar2;
    ppuVar8 = local_138;
    break;
  case 5:
    *puVar2 = 2;
    puVar4 = operator_new(2);
    *(undefined4 **)((int)this + 0x1fc) = puVar4;
    uVar3 = *puVar2;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 2 + 0xf4);
    for (uVar7 = (uint)(uVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return *(int *)((int)this + 0x1fc);
  case 6:
    *puVar2 = 4;
    puVar5 = operator_new(4);
    *(undefined4 **)((int)this + 0x1fc) = puVar5;
    uVar7 = (uint)*puVar2;
    ppuVar8 = (ushort **)((int)this + (param_1 & 0xffff) * 4 + 0x10c);
    break;
  default:
    goto switchD_630517fb_caseD_8;
  case 0xb:
    *puVar2 = 2;
    puVar4 = operator_new(2);
    *(undefined4 **)((int)this + 0x1fc) = puVar4;
    uVar3 = *puVar2;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 2 + 0x16c);
    for (uVar7 = (uint)(uVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return *(int *)((int)this + 0x1fc);
  case 0xc:
    *puVar2 = 2;
    puVar5 = operator_new(2);
    *(undefined4 **)((int)this + 0x1fc) = puVar5;
    uVar7 = (uint)*puVar2;
    ppuVar8 = (ushort **)((int)this + (param_1 & 0xffff) * 2 + 0x184);
    break;
  case 0xe:
    *puVar2 = 4;
    puVar5 = operator_new(4);
    *(undefined4 **)((int)this + 0x1fc) = puVar5;
    uVar7 = (uint)*puVar2;
    ppuVar8 = (ushort **)((int)this + (param_1 & 0xffff) * 4 + 0x1cc);
    break;
  case 0x13:
    *puVar2 = 4;
    puVar4 = operator_new(4);
    *(undefined4 **)((int)this + 0x1fc) = puVar4;
    uVar3 = *puVar2;
    puVar5 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x19c);
    for (uVar7 = (uint)(uVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return *(int *)((int)this + 0x1fc);
  case 0x14:
    iVar1 = *(int *)((int)this + (param_1 & 0xffff) * 4 + 0x10c);
    *puVar2 = 4;
    param_3 = (ushort *)(iVar1 << 3);
    puVar5 = operator_new(4);
    *(undefined4 **)((int)this + 0x1fc) = puVar5;
    uVar7 = (uint)*puVar2;
    ppuVar8 = &param_3;
  }
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar5 = *ppuVar8;
    ppuVar8 = ppuVar8 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)ppuVar8;
    ppuVar8 = (ushort **)((int)ppuVar8 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
switchD_630517fb_caseD_8:
  return *(int *)((int)this + 0x1fc);
}


