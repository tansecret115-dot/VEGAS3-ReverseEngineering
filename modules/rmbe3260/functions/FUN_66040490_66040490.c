/* Module: rmbe3260.dll
   Function: FUN_66040490
   Address: 66040490
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66040490(void *this,int param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  void *pvVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined2 local_38;
  ushort local_36;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 *puStack_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  DWORD local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if ((DAT_660752f0 == 0) && (DAT_660752f4 == 0)) {
    BVar2 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660752f0);
    if ((BVar2 != 0) &&
       (BVar2 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660752f8), BVar2 != 0))
    goto LAB_66040547;
LAB_66040564:
    local_10 = GetTickCount();
  }
  else {
    BVar2 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660752f8);
    if (BVar2 == 0) goto LAB_66040564;
LAB_66040547:
    puStack_20 = (undefined4 *)0x0;
    local_24 = DAT_660752f0;
    local_10 = ftol();
  }
  *(undefined4 *)((int)this + 0x184) = 0;
  if (*(int *)((int)this + 0x284) == 0) {
    *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)((int)this + 0x7a);
    *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)((int)this + 0x7a);
    *(undefined4 *)((int)this + 0x1e8) = *(undefined4 *)((int)this + 0x7a);
    uVar12 = *(undefined4 *)((int)this + 0x7a);
    *(undefined4 *)((int)this + 0x230) = uVar12;
    *(undefined4 *)((int)this + 0x234) = uVar12;
    *(undefined4 *)((int)this + 0x250) = uVar12;
    *(undefined4 *)((int)this + 0x10b) = uVar12;
    *(undefined4 *)((int)this + 0x284) = 1;
  }
  if ((*(uint *)(param_1 + 0x10) == *(uint *)((int)this + 0x178)) ||
     ((*(int *)((int)this + 0x124) != 0 &&
      (*(uint *)(param_1 + 0x10) <= *(uint *)((int)this + 0x178))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if (*(int *)((int)this + 0xf5) == 0x59555632) {
      puVar10 = *(undefined4 **)((int)this + 0x180);
      local_8 = *(undefined4 **)(param_1 + 0xc);
      if (puVar10 != (undefined4 *)0x0) {
        uVar6 = *(uint *)((int)this + 0x154);
        uVar5 = *(uint *)((int)this + 0x14c);
        iVar3 = uVar6 * *(int *)((int)this + 0x158);
        local_18 = (undefined4 *)(iVar3 + (int)puVar10);
        local_1c = (undefined4 *)(((uint)(iVar3 * 5) >> 2) + (int)puVar10);
        puVar4 = (undefined4 *)
                 (*(uint *)((int)this + 0x15c) * uVar5 + (int)local_8 + *(uint *)((int)this + 0x160)
                 );
        uVar7 = *(uint *)((int)this + 0x160) >> 1;
        iVar8 = (uVar5 >> 1) * (*(uint *)((int)this + 0x15c) >> 1);
        iVar3 = *(int *)((int)this + 0x150) * uVar5;
        local_14 = (undefined4 *)((int)local_8 + uVar7 + iVar8 + iVar3);
        puStack_20 = (undefined4 *)0x0;
        local_8 = (undefined4 *)(((uint)(iVar3 * 5) >> 2) + (int)local_8 + uVar7 + iVar8);
        local_c = puVar10;
        if ((*(uint *)((int)this + 0x158) & 0xfffffffe) != 0) {
          do {
            puVar10 = puVar4;
            puVar9 = local_c;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            uVar6 = *(uint *)((int)this + 0x154);
            puVar4 = (undefined4 *)((int)puVar4 + *(int *)((int)this + 0x14c));
            puVar10 = puVar4;
            puVar9 = (undefined4 *)((int)local_c + uVar6);
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puVar4 = (undefined4 *)((int)puVar4 + *(int *)((int)this + 0x14c));
            uVar5 = *(uint *)((int)this + 0x154);
            local_c = (undefined4 *)((int)((int)local_c + uVar6) + uVar5);
            puVar10 = local_14;
            puVar9 = local_18;
            for (uVar6 = uVar5 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar6 = uVar5 >> 1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            local_14 = (undefined4 *)((int)local_14 + (*(uint *)((int)this + 0x14c) >> 1));
            uVar5 = *(uint *)((int)this + 0x154) >> 1;
            local_18 = (undefined4 *)((int)local_18 + uVar5);
            puVar10 = local_8;
            puVar9 = local_1c;
            for (uVar6 = *(uint *)((int)this + 0x154) >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            local_8 = (undefined4 *)((int)local_8 + (*(uint *)((int)this + 0x14c) >> 1));
            uVar6 = *(uint *)((int)this + 0x154);
            local_1c = (undefined4 *)((int)local_1c + (uVar6 >> 1));
            puStack_20 = (undefined4 *)((int)puStack_20 + 1);
          } while (puStack_20 < (undefined4 *)(*(uint *)((int)this + 0x158) >> 1));
        }
        local_8 = *(undefined4 **)((int)this + 0x180);
      }
    }
    else {
      puVar10 = *(undefined4 **)((int)this + 0x180);
      local_8 = (undefined4 *)(*(int *)((int)this + 0x164) + *(int *)(param_1 + 0xc));
      if (puVar10 != (undefined4 *)0x0) {
        local_1c = (undefined4 *)0x0;
        puStack_20 = puVar10;
        if (*(int *)((int)this + 0x158) != 0) {
          do {
            uVar6 = *(uint *)((int)this + 0x174);
            puVar4 = (undefined4 *)((int)local_8 + *(int *)((int)this + 0x168));
            puVar9 = puVar10;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar9 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puVar10 = (undefined4 *)((int)puVar10 + *(int *)((int)this + 0x170));
            local_8 = (undefined4 *)((int)local_8 + *(int *)((int)this + 0x16c));
            local_1c = (undefined4 *)((int)local_1c + 1);
            puStack_20 = puVar10;
          } while (local_1c < *(undefined4 **)((int)this + 0x158));
        }
        local_8 = *(undefined4 **)((int)this + 0x180);
      }
    }
    if ((*(int *)((int)this + 0x10f) != 0) && (*(int *)((int)this + 0x113) != 0)) {
      (**(code **)(**(int **)((int)this + 0x120) + 0x1c))(*(int *)((int)this + 0x113));
      *(undefined4 *)((int)this + 0x113) = 0;
    }
    if ((*(int **)((int)this + 0xaa) != (int *)0x0) &&
       (iVar3 = *(int *)(param_1 + 0x14), *(int *)((int)this + 0x10f) != iVar3)) {
      *(int *)((int)this + 0x10f) = iVar3;
      if (iVar3 == 0) {
        pcVar13 = (code *)0x0;
        uVar12 = 0;
        pvVar11 = (void *)0x0;
      }
      else {
        uVar12 = *(undefined4 *)((int)this + 0x120);
        pcVar13 = CEngineVideoStream::PreviewCallback;
        pvVar11 = this;
      }
      (**(code **)(**(int **)((int)this + 0xaa) + 0x3c))(pvVar11,uVar12,pcVar13);
    }
    uVar6 = *(uint *)(param_1 + 8);
    uVar5 = *(uint *)((int)this + 0x10b);
    if (uVar6 < uVar5) {
      uVar5 = (uVar6 - uVar5) - 1;
    }
    else {
      uVar5 = uVar6 - uVar5;
    }
    if ((*(int *)(param_1 + 0x2c) == 0) && ((*(int *)((int)this + 0xbe) == 0 || (uVar5 < 15000)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(uint *)((int)this + 0x10b) = uVar6;
    }
    if (*(int *)((int)this + 0x124) == 0) {
      local_44 = *(undefined4 *)((int)this + 0x17c);
    }
    else {
      local_44 = *(undefined4 *)(param_1 + 0x10);
    }
    local_40 = (int)local_8;
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined2 *)((int)this + 0xb6);
    local_30 = 1;
    *(int *)((int)this + 0xb6) = *(int *)((int)this + 0xb6) + 1;
    local_36 = -(ushort)bVar1 & 2;
    local_34 = (uint)(*(int *)(param_1 + 0x28) == 1);
    local_2c = 1;
    local_28 = 0;
    iVar3 = FUN_66042850(*(void **)(*(int *)((int)this + 0x128) + 8),
                         *(undefined4 *)((int)this + 0xa6),0,&local_44);
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)this + 0x184);
      iVar3 = (-(uint)(iVar3 != -0x7ffbff76) & 0x31) + 0xffc1;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((int)this + 0x113);
      *(uint *)(param_1 + 0x1c) =
           *(int *)((int)this + 0x158) *
           (*(int *)((int)this + 0x154) * 0x18 + 0x1fU >> 3 & 0x1ffffffc);
      iVar3 = 0;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)this + 0x184);
    }
  }
  else {
    iVar3 = 0xfff7;
  }
  if (iVar3 != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x42) + 4) = 1;
  }
  if ((DAT_660752f0 == 0) && (DAT_660752f4 == 0)) {
    BVar2 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660752f0);
    if (BVar2 != 0) {
      iVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660752f8);
      goto joined_r0x66040a10;
    }
  }
  else {
    iVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660752f8);
joined_r0x66040a10:
    if (iVar8 != 0) {
      puStack_20 = (undefined4 *)0x0;
      local_24 = DAT_660752f0;
      uVar6 = ftol();
      goto LAB_66040a66;
    }
  }
  uVar6 = GetTickCount();
LAB_66040a66:
  if (uVar6 < local_10) {
    uVar6 = (uVar6 - local_10) - 1;
  }
  else {
    uVar6 = uVar6 - local_10;
  }
  *(double *)((int)this + 0x62) = (double)uVar6 + *(double *)((int)this + 0x62);
  return iVar3;
}


