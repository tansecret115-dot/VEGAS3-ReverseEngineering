/* Module: atrc3260.dll
   Function: FUN_68001490
   Address: 68001490
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_68001490(void *this,uint param_1,uint param_2,ushort *param_3)

{
  undefined2 uVar1;
  int iVar2;
  ulonglong uVar3;
  ushort *puVar4;
  ushort uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  ushort **ppuVar11;
  undefined4 local_144 [64];
  undefined4 local_44 [14];
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 local_8;
  undefined1 uStack_7;
  
  puVar4 = param_3;
  *param_3 = 0;
  if (7 < (ushort)param_1) {
    return 0;
  }
  if (*(void **)((int)this + 0x1d4) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x1d4));
    *(undefined4 *)((int)this + 0x1d4) = 0;
  }
  uVar9 = param_2 & 0xffff;
  if (1000 < uVar9) goto switchD_680014fd_caseD_8;
  if (uVar9 == 1000) {
    *puVar4 = 2;
    puVar8 = operator_new(2);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar9 = (uint)*puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 2 + 0x124);
    goto LAB_680019ae;
  }
  switch(uVar9) {
  case 0:
    uVar5 = (**(code **)(*(int *)this + 8))(param_1,param_2,local_44,0x32);
    *puVar4 = uVar5;
    if (uVar5 != 0) {
      *puVar4 = uVar5 + 1;
      puVar8 = operator_new((uint)(ushort)(uVar5 + 1));
      *(undefined4 **)((int)this + 0x1d4) = puVar8;
      uVar5 = *puVar4;
      puVar7 = local_44;
      for (uVar9 = (uint)(uVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar9 = uVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      return *(int *)((int)this + 0x1d4);
    }
    goto switchD_680014fd_caseD_8;
  case 1:
    *puVar4 = 4;
    puVar8 = operator_new(4);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar9 = (uint)*puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0xd4);
    break;
  case 2:
    *puVar4 = 10;
    puVar8 = operator_new(10);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar9 = (uint)*puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 10 + 4);
    break;
  case 3:
    *puVar4 = 10;
    puVar8 = operator_new(10);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar9 = (uint)*puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 10 + 0x54);
    break;
  case 4:
    uVar5 = (**(code **)(*(int *)this + 8))(param_1,param_2,local_144,0x100);
    *puVar4 = uVar5;
    if (uVar5 != 0) {
      *puVar4 = uVar5 + 1;
      puVar8 = operator_new((uint)(ushort)(uVar5 + 1));
      *(undefined4 **)((int)this + 0x1d4) = puVar8;
      uVar5 = *puVar4;
      puVar7 = local_144;
      for (uVar9 = (uint)(uVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar9 = uVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      return *(int *)((int)this + 0x1d4);
    }
    goto switchD_680014fd_caseD_8;
  case 5:
    *puVar4 = 2;
    puVar8 = operator_new(2);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar9 = (uint)*puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 2 + 0xa4);
    break;
  case 6:
    *puVar4 = 4;
    puVar8 = operator_new(4);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar5 = *puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0xb4);
    for (uVar9 = (uint)(uVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar9 = uVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    return *(int *)((int)this + 0x1d4);
  case 7:
    uVar5 = (**(code **)(*(int *)this + 8))(param_1,param_2,local_144,0x100);
    *puVar4 = uVar5;
    if (uVar5 != 0) {
      *puVar4 = uVar5 + 1;
      puVar8 = operator_new((uint)(ushort)(uVar5 + 1));
      *(undefined4 **)((int)this + 0x1d4) = puVar8;
      uVar5 = *puVar4;
      puVar7 = local_144;
      for (uVar9 = (uint)(uVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar9 = uVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      return *(int *)((int)this + 0x1d4);
    }
  default:
    goto switchD_680014fd_caseD_8;
  case 0xd:
    *puVar4 = 4;
    puVar8 = operator_new(4);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar5 = *puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0xf4);
    for (uVar9 = (uint)(uVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar9 = uVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    return *(int *)((int)this + 0x1d4);
  case 0xe:
    *puVar4 = 4;
    puVar8 = operator_new(4);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar5 = *puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x134);
    for (uVar9 = (uint)(uVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar9 = uVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    return *(int *)((int)this + 0x1d4);
  case 0xf:
    *puVar4 = 4;
    puVar8 = operator_new(4);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar9 = (uint)*puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x154);
    break;
  case 0x10:
    *puVar4 = 4;
    puVar8 = operator_new(4);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar5 = *puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x174);
    for (uVar9 = (uint)(uVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar9 = uVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    return *(int *)((int)this + 0x1d4);
  case 0x11:
    uVar10 = param_1 & 0xffff;
    if (*(int *)((int)this + uVar10 * 4 + 0x194) == 0) goto switchD_680014fd_caseD_8;
    uVar5 = (short)(*(uint *)((int)this + uVar10 * 4 + 0xb4) /
                   *(uint *)((int)this + uVar10 * 4 + 0xf4)) *
            *(short *)((int)this + uVar10 * 4 + 0x154) * 2;
    *puVar4 = uVar5;
    puVar8 = operator_new((uint)uVar5);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar9 = (uint)*puVar4;
    puVar7 = *(undefined4 **)((int)this + uVar10 * 4 + 0x194);
    break;
  case 0x12:
    uVar9 = param_1 & 0xffff;
    uVar3 = (ulonglong)*(uint *)((int)this + uVar9 * 4 + 0x134) /
            ((ulonglong)*(uint *)((int)this + uVar9 * 4 + 0xb4) /
            (ulonglong)*(uint *)((int)this + uVar9 * 4 + 0xf4));
    uVar1 = *(undefined2 *)((int)this + uVar9 * 2 + 0x114);
    uStack_a = (undefined1)uVar1;
    uStack_9 = (undefined1)((ushort)uVar1 >> 8);
    local_c = (undefined1)uVar3;
    uStack_b = (undefined1)(uVar3 >> 8);
    uVar1 = *(undefined2 *)((int)this + uVar9 * 2 + 0x124);
    local_8 = (undefined1)uVar1;
    uStack_7 = (undefined1)((ushort)uVar1 >> 8);
    *puVar4 = 10;
    puVar6 = operator_new(10);
    *(undefined1 **)((int)this + 0x1d4) = puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 4;
    puVar6[4] = uStack_b;
    puVar6[5] = local_c;
    puVar6[6] = uStack_9;
    puVar6[7] = uStack_a;
    puVar6[8] = uStack_7;
    puVar6[9] = local_8;
    return *(int *)((int)this + 0x1d4);
  case 0x13:
    *puVar4 = 4;
    puVar8 = operator_new(4);
    *(undefined4 **)((int)this + 0x1d4) = puVar8;
    uVar9 = (uint)*puVar4;
    puVar7 = (undefined4 *)((int)this + (param_1 & 0xffff) * 4 + 0x1b4);
    break;
  case 0x14:
    iVar2 = *(int *)((int)this + (param_1 & 0xffff) * 4 + 0xf4);
    *puVar4 = 4;
    param_3 = (ushort *)(iVar2 << 3);
    puVar7 = operator_new(4);
    *(undefined4 **)((int)this + 0x1d4) = puVar7;
    uVar5 = *puVar4;
    ppuVar11 = &param_3;
    for (uVar9 = (uint)(uVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = *ppuVar11;
      ppuVar11 = ppuVar11 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar9 = uVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)ppuVar11;
      ppuVar11 = (ushort **)((int)ppuVar11 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    return *(int *)((int)this + 0x1d4);
  }
LAB_680019ae:
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
switchD_680014fd_caseD_8:
  return *(int *)((int)this + 0x1d4);
}


