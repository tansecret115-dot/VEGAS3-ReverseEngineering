/* Module: g2plug.dll
   Function: FUN_5f812810
   Address: 5f812810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f812810(void *this,HWND param_1)

{
  undefined2 *puVar1;
  UINT UVar2;
  uint uVar3;
  HWND pHVar4;
  WPARAM WVar5;
  LRESULT LVar6;
  long lVar7;
  undefined4 *puVar8;
  HGLOBAL pvVar9;
  undefined4 uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  undefined4 *puVar15;
  uchar *puVar16;
  undefined4 *puVar17;
  uchar *puVar18;
  undefined4 *local_14;
  uint local_10;
  uchar *local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_14 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (local_14 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  local_14[0x4e] = 0;
  UVar2 = IsDlgButtonChecked(param_1,0x3ee);
  uVar3 = FUN_5f812fd0(local_14[0x4e],0x3ee,UVar2);
  local_14[0x4e] = uVar3;
  UVar2 = IsDlgButtonChecked(param_1,0x3ef);
  uVar3 = FUN_5f812fd0(local_14[0x4e],0x3ef,UVar2);
  local_14[0x4e] = uVar3;
  UVar2 = IsDlgButtonChecked(param_1,0x3f0);
  uVar3 = FUN_5f812fd0(local_14[0x4e],0x3f0,UVar2);
  local_14[0x4e] = uVar3;
  UVar2 = IsDlgButtonChecked(param_1,0x40b);
  uVar3 = FUN_5f812fd0(local_14[0x4e],0x40b,UVar2);
  local_14[0x4e] = uVar3;
  UVar2 = IsDlgButtonChecked(param_1,0x3f3);
  uVar3 = FUN_5f812fd0(local_14[0x4e],0x3f3,UVar2);
  local_14[0x4e] = uVar3;
  UVar2 = IsDlgButtonChecked(param_1,0x408);
  uVar3 = FUN_5f812fd0(local_14[0x4e],0x408,UVar2);
  local_14[0x4e] = uVar3;
  UVar2 = IsDlgButtonChecked(param_1,0x409);
  uVar3 = FUN_5f812fd0(local_14[0x4e],0x409,UVar2);
  local_14[0x4e] = uVar3;
  UVar2 = IsDlgButtonChecked(param_1,0x40a);
  uVar3 = FUN_5f812fd0(local_14[0x4e],0x40a,UVar2);
  local_14[0x4e] = uVar3;
  UVar2 = IsDlgButtonChecked(param_1,0x3f6);
  if (UVar2 == 0) {
    local_14[0x53] = 0;
  }
  else {
    local_14[0x53] = 1;
  }
  if ((local_14[0x4b] != 0) && (pHVar4 = GetDlgItem(param_1,0x3f5), pHVar4 != (HWND)0x0)) {
    WVar5 = SendMessageA(pHVar4,0x147,0,0);
    LVar6 = SendMessageA(pHVar4,0x150,WVar5,0);
    local_14[0x52] = LVar6;
  }
  if ((local_14[0x4a] != 0) && (pHVar4 = GetDlgItem(param_1,0x3f4), pHVar4 != (HWND)0x0)) {
    WVar5 = SendMessageA(pHVar4,0x147,0,0);
    LVar6 = SendMessageA(pHVar4,0x150,WVar5,0);
    local_14[0x50] = LVar6;
    if ((local_14[0x52] == -1) && (LVar6 == -1)) {
      local_14[0x50] = 0;
      SendMessageA(pHVar4,0x14e,0,0);
    }
  }
  pHVar4 = GetDlgItem(param_1,0x406);
  if ((pHVar4 != (HWND)0x0) && (WVar5 = SendMessageA(pHVar4,0x147,0,0), WVar5 != 0xffffffff)) {
    LVar6 = SendMessageA(pHVar4,0x150,WVar5,0);
    local_14[0x4f] = LVar6;
    if (LVar6 < 4) {
      local_14[0x52] = 0xffffffff;
    }
  }
  pHVar4 = GetDlgItem(param_1,0x3fd);
  if ((pHVar4 != (HWND)0x0) && (WVar5 = SendMessageA(pHVar4,0x147,0,0), WVar5 != 0xffffffff)) {
    LVar6 = SendMessageA(pHVar4,0x150,WVar5,0);
    switch(LVar6) {
    case 0:
      iVar12 = *(int *)((int)local_14 + 0x3ef);
      *(undefined4 *)((int)local_14 + 0x3df) = 0;
      if (iVar12 < 0x20) {
        iVar12 = 0x20;
      }
      else if (800 < iVar12) {
        iVar12 = 800;
      }
      *(int *)((int)local_14 + 999) = iVar12;
      iVar12 = *(int *)((int)local_14 + 0x3f3);
      if (iVar12 < 0x20) {
        *(undefined4 *)((int)local_14 + 0x3eb) = 0x20;
      }
      else {
        if (600 < iVar12) {
          iVar12 = 600;
        }
        *(int *)((int)local_14 + 0x3eb) = iVar12;
      }
      break;
    case 1:
      *(undefined4 *)((int)local_14 + 0x3df) = 1;
      *(undefined4 *)((int)local_14 + 999) = 0xf6;
      *(undefined4 *)((int)local_14 + 0x3eb) = 0xf3;
      break;
    case 2:
      *(undefined4 *)((int)local_14 + 0x3df) = 1;
      *(undefined4 *)((int)local_14 + 999) = 0xb0;
      *(undefined4 *)((int)local_14 + 0x3eb) = 0x90;
      break;
    case 3:
      *(undefined4 *)((int)local_14 + 0x3df) = 1;
      *(undefined4 *)((int)local_14 + 999) = 0xa0;
      *(undefined4 *)((int)local_14 + 0x3eb) = 0x78;
      break;
    case 4:
      *(undefined4 *)((int)local_14 + 0x3df) = 1;
      *(undefined4 *)((int)local_14 + 999) = 0x140;
      *(undefined4 *)((int)local_14 + 0x3eb) = 0xf0;
      break;
    default:
      UVar2 = GetDlgItemInt(param_1,0x3fe,(BOOL *)0x0,0);
      *(UINT *)((int)local_14 + 999) = UVar2;
      if ((int)UVar2 < 0x20) {
        UVar2 = 0x20;
      }
      else if (800 < (int)UVar2) {
        UVar2 = 800;
      }
      *(UINT *)((int)local_14 + 999) = UVar2;
      UVar2 = GetDlgItemInt(param_1,0x3ff,(BOOL *)0x0,0);
      *(UINT *)((int)local_14 + 0x3eb) = UVar2;
      if ((int)UVar2 < 0x20) {
        UVar2 = 0x20;
      }
      else if (600 < (int)UVar2) {
        UVar2 = 600;
      }
      *(UINT *)((int)local_14 + 0x3eb) = UVar2;
      *(uint *)((int)local_14 + 0x3df) =
           (uint)(*(int *)((int)local_14 + 999) != *(int *)((int)local_14 + 0x3ef));
    }
    *(LRESULT *)((int)local_14 + 0x3e3) = LVar6;
  }
  lVar7 = SfRealG2_GetTargetData(local_14[0x4e],local_14[0x50],local_14[0x52],&local_c,&local_10);
  if (-1 < lVar7) {
    if (((uint)local_14[0x19e] < local_10) &&
       (puVar8 = (undefined4 *)
                 (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                           (*(int **)((int)this + 0x30),0x42,local_10 + 0x67c),
       puVar8 != (undefined4 *)0x0)) {
      puVar15 = local_14;
      puVar17 = puVar8;
      for (iVar12 = 0x19f; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar17 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar17 = puVar17 + 1;
      }
      (**(code **)(**(int **)((int)this + 0x30) + 0x24))(*(int **)((int)this + 0x30),local_14);
      puVar8[0x19d] = puVar8 + 0x19f;
      *(undefined4 **)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e) = puVar8;
      *(uint *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3a) = local_10 + 0x67c;
      puVar8[0x19e] = local_10;
      local_14 = puVar8;
    }
    puVar16 = local_c;
    puVar18 = (uchar *)local_14[0x19d];
    for (uVar3 = local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)puVar18 = *(undefined4 *)puVar16;
      puVar16 = puVar16 + 4;
      puVar18 = puVar18 + 4;
    }
    for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
      *puVar18 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar18 = puVar18 + 1;
    }
    pvVar9 = GlobalHandle(local_c);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(local_c);
    GlobalFree(pvVar9);
  }
  if (((local_14[0x4a] != 0) && (iVar12 = local_14[0x50], iVar12 != -1)) &&
     (puVar1 = *(undefined2 **)(*(int *)((int)this + 0x34) + 0x424), puVar1 != (undefined2 *)0x0)) {
    uVar11 = puVar1[7];
    puVar1[7] = uVar11;
    sVar14 = (iVar12 == 3) + 1;
    uVar11 = (uVar11 >> 3) * sVar14;
    *puVar1 = *puVar1;
    puVar1[6] = uVar11;
    *(uint *)(puVar1 + 4) = (uint)uVar11 * *(int *)(puVar1 + 2);
    puVar1[1] = sVar14;
    *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2);
    puVar1[8] = 0;
  }
  if ((local_14[0x4b] != 0) && (local_14[0x52] != -1)) {
    iVar12 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
    if (iVar12 == 0) {
      uVar10 = (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                         (*(int **)((int)this + 0x30),0x42,0x98);
      *(undefined4 *)(*(int *)((int)this + 0x34) + 0x428) = uVar10;
      iVar12 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
      if (iVar12 == 0) {
        return 0x8007000e;
      }
    }
    if (*(int *)((int)local_14 + 0x3df) != 0) {
      puVar8 = *(undefined4 **)(iVar12 + 0x48);
      if (puVar8 == (undefined4 *)0x0) {
        uVar10 = (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                           (*(int **)((int)this + 0x30),0x42,0x28);
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 0x48) = uVar10;
        puVar8 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 0x48);
        if (puVar8 == (undefined4 *)0x0) {
          return 0x8007000e;
        }
      }
      FUN_5f81ee40(puVar8,0x1b,*(int *)((int)local_14 + 999),*(int *)((int)local_14 + 0x3eb),
                   (uint *)0x0,0,(int *)0x0);
      puVar8 = *(undefined4 **)(*(int *)((int)this + 0x34) + 0x428);
      puVar15 = (undefined4 *)*puVar8;
      if (puVar15 == (undefined4 *)0x0) {
        uVar10 = (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                           (*(int **)((int)this + 0x30),0x42,0x28);
        **(undefined4 **)(*(int *)((int)this + 0x34) + 0x428) = uVar10;
        puVar8 = *(undefined4 **)(*(int *)((int)this + 0x34) + 0x428);
        puVar15 = (undefined4 *)*puVar8;
        if (puVar15 == (undefined4 *)0x0) {
          return 0x8007000e;
        }
      }
      puVar8 = (undefined4 *)puVar8[0x12];
      for (iVar12 = 10; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar15 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar15 = puVar15 + 1;
      }
    }
    uStack_8 = 0;
    uStack_4 = 0;
    FUN_5f80a4b0(local_14[0x4e],(int *)local_14[0x19d],local_14[0x19e],(double *)&uStack_8);
    iVar12 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
    puVar8 = (undefined4 *)(iVar12 + 0x50);
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(ulonglong *)(iVar12 + 0x60) = CONCAT44(uStack_4,uStack_8);
    *(undefined4 *)(iVar12 + 0x68) = 0;
    *(undefined4 *)(iVar12 + 0x70) = 0;
    *(undefined4 *)(iVar12 + 0x50) = 0x40;
    *(undefined4 *)(iVar12 + 0x54) = 0xffffffff;
    *(undefined4 *)(iVar12 + 0x58) = 0;
    *(undefined4 *)(iVar12 + 0x5c) = 0;
    *(undefined4 *)(iVar12 + 0x6c) = 0x3ff00000;
    *(undefined4 *)(iVar12 + 0x74) = 0;
    *(undefined4 *)(iVar12 + 0x78) = 0;
    *(undefined4 *)(iVar12 + 0x7c) = 0;
    *(undefined4 *)(iVar12 + 0x80) = 0;
    *(undefined4 *)(iVar12 + 0x84) = 0;
    *(undefined4 *)(iVar12 + 0x88) = 0;
    *(undefined4 *)(iVar12 + 0x8c) = 0;
    iVar12 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
    puVar8 = (undefined4 *)(iVar12 + 8);
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(ulonglong *)(iVar12 + 0x18) = CONCAT44(uStack_4,uStack_8);
    *(undefined4 *)(iVar12 + 0x20) = 0;
    *(undefined4 *)(iVar12 + 0x28) = 0;
    *(undefined4 *)(iVar12 + 8) = 0x40;
    *(undefined4 *)(iVar12 + 0xc) = 0xffffffff;
    *(undefined4 *)(iVar12 + 0x10) = 0;
    *(undefined4 *)(iVar12 + 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x24) = 0x3ff00000;
    *(undefined4 *)(iVar12 + 0x2c) = 0;
    *(undefined4 *)(iVar12 + 0x30) = 0;
    *(undefined4 *)(iVar12 + 0x34) = 0;
    *(undefined4 *)(iVar12 + 0x38) = 0;
    *(undefined4 *)(iVar12 + 0x3c) = 0;
    *(undefined4 *)(iVar12 + 0x40) = 0;
    *(undefined4 *)(iVar12 + 0x44) = 0;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 4) = 1;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 0x4c) = 1;
    return 0;
  }
  iVar12 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
  if (iVar12 != 0) {
    *(undefined4 *)(iVar12 + 4) = 0;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 0x4c) = 0;
  }
  return 0;
}


