/* Module: g2plug.dll
   Function: FUN_5f8140d0
   Address: 5f8140d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f8140d0(void *this,HWND param_1)

{
  void *pvVar1;
  HWND pHVar2;
  undefined4 *puVar3;
  HGLOBAL pvVar4;
  UINT UVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uchar *puVar10;
  undefined4 *puVar11;
  uchar *puVar12;
  uint local_14;
  uchar *local_10;
  undefined4 *local_c;
  int local_8;
  void *local_4;
  
  puVar8 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (puVar8 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  local_c = puVar8;
  local_4 = this;
  pHVar2 = GetDlgItem(param_1,0x3ed);
  local_8 = FUN_5f80ae40(pHVar2);
  if (-1 < local_8) {
    local_8 = SfRealG2_GetTargetData(puVar8[0x4e],puVar8[0x50],puVar8[0x52],&local_10,&local_14);
    if (-1 < local_8) {
      if ((uint)puVar8[0x19e] < local_14) {
        puVar3 = (undefined4 *)
                 (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                           (*(int **)((int)this + 0x30),0x42,local_14 + 0x67c);
        pvVar1 = local_4;
        if (puVar3 != (undefined4 *)0x0) {
          puVar9 = puVar8;
          puVar11 = puVar3;
          for (iVar6 = 0x19f; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          (**(code **)(**(int **)((int)local_4 + 0x30) + 0x24))
                    (*(int **)((int)local_4 + 0x30),puVar8);
          puVar3[0x19d] = puVar3 + 0x19f;
          *(undefined4 **)(*(int *)(*(int *)((int)pvVar1 + 0x34) + 0x424) + 0x3e) = puVar3;
          *(uint *)(*(int *)(*(int *)((int)pvVar1 + 0x34) + 0x424) + 0x3a) = local_14 + 0x67c;
          puVar3[0x19e] = local_14;
          puVar8 = puVar3;
          local_c = puVar3;
        }
      }
      puVar10 = local_10;
      puVar12 = (uchar *)puVar8[0x19d];
      for (uVar7 = local_14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)puVar12 = *(undefined4 *)puVar10;
        puVar10 = puVar10 + 4;
        puVar12 = puVar12 + 4;
      }
      for (local_14 = local_14 & 3; local_14 != 0; local_14 = local_14 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      pvVar4 = GlobalHandle(local_10);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(local_10);
      GlobalFree(pvVar4);
      puVar8 = local_c;
    }
  }
  UVar5 = GetDlgItemInt(param_1,0x3f3,(BOOL *)0x0,0);
  *(UINT *)((int)puVar8 + 0x663) = UVar5;
  UVar5 = GetDlgItemInt(param_1,0x3f4,(BOOL *)0x0,0);
  *(UINT *)((int)puVar8 + 0x667) = UVar5;
  UVar5 = IsDlgButtonChecked(param_1,0x3f0);
  if (UVar5 == 0) {
    uVar7 = *(uint *)((int)puVar8 + 0x66b) & 0xfffffffe;
  }
  else {
    uVar7 = *(uint *)((int)puVar8 + 0x66b) | 1;
  }
  *(uint *)((int)puVar8 + 0x66b) = uVar7;
  UVar5 = IsDlgButtonChecked(param_1,0x3f1);
  if (UVar5 == 0) {
    uVar7 = *(uint *)((int)puVar8 + 0x66b) & 0xfffffffd;
  }
  else {
    uVar7 = *(uint *)((int)puVar8 + 0x66b) | 2;
  }
  *(uint *)((int)puVar8 + 0x66b) = uVar7;
  UVar5 = IsDlgButtonChecked(param_1,0x3f2);
  if (UVar5 == 0) {
    uVar7 = *(uint *)((int)puVar8 + 0x66b) & 0xfffffffb;
  }
  else {
    uVar7 = *(uint *)((int)puVar8 + 0x66b) | 4;
  }
  *(uint *)((int)puVar8 + 0x66b) = uVar7;
  UVar5 = IsDlgButtonChecked(param_1,0x3f6);
  if (UVar5 != 0) {
    UVar5 = IsDlgButtonChecked(param_1,0x3f8);
    if (UVar5 != 0) {
      *(uint *)((int)puVar8 + 0x66b) = *(uint *)((int)puVar8 + 0x66b) & 0xfffffff7 | 0x10;
      return local_8;
    }
    *(uint *)((int)puVar8 + 0x66b) = *(uint *)((int)puVar8 + 0x66b) & 0xffffffef | 8;
    return local_8;
  }
  *(uint *)((int)puVar8 + 0x66b) = *(uint *)((int)puVar8 + 0x66b) & 0xffffffe7;
  return local_8;
}


