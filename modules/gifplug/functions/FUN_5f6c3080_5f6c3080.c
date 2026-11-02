/* Module: gifplug.dll
   Function: FUN_5f6c3080
   Address: 5f6c3080
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5f6c3080(void *this,undefined1 *param_1,int param_2,undefined4 *param_3,undefined1 *param_4,
            int param_5)

{
  undefined1 uVar1;
  LPCVOID pMem;
  short sVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined1 *local_8;
  int local_4;
  
  local_20 = 0;
  local_c = 0;
  local_10 = 0;
  iVar3 = FUN_5f6c2fb0(this,&local_1c);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = FUN_5f6c2fd0(this,&local_18);
  if (iVar3 < 0) {
    return iVar3;
  }
  pMem = *(LPCVOID *)((int)this + 0x483);
  if (pMem != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
    *(undefined4 *)((int)this + 0x483) = 0;
  }
  pvVar4 = GlobalAlloc(0x40,local_1c + 1);
  pvVar5 = GlobalLock(pvVar4);
  *(LPVOID *)((int)this + 0x483) = pvVar5;
  if (pvVar5 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  uVar9 = local_1c * 4;
  if (*(int *)((int)this + 0x331) == 0) {
    uVar9 = local_1c;
  }
  local_14 = uVar9 + 3 & 0xfffffffc;
  if ((param_5 < param_2) || ((param_5 <= param_2 && (param_4 <= param_1)))) {
    if ((0 < param_5) || (-1 < param_5)) goto LAB_5f6c3232;
  }
  else {
    param_4 = (undefined1 *)0xffffffff;
    param_5 = -1;
  }
  if (*(int *)((int)this + 0x331) != 0) {
    if ((*(int *)(*(byte **)((int)this + 0x32d) + 0x315) == 0) ||
       ((**(byte **)((int)this + 0x32d) & 1) == 0)) {
      if ((*(byte *)((int)this + 0x1c) & 0x80) != 0) {
        uVar9 = (uint)*(byte *)((int)this + 0x1d);
        local_22 = *(undefined1 *)((int)this + uVar9 * 3 + 0x20);
        uVar1 = *(undefined1 *)((int)this + uVar9 * 3 + 0x1f);
        iVar3 = 0;
        local_23 = *(undefined1 *)((int)this + uVar9 * 3 + 0x21);
        if (0 < (int)local_18) {
          local_8 = (undefined1 *)((int)param_3 + 2);
          do {
            iVar11 = 0;
            puVar6 = local_8;
            if (0 < (int)local_1c) {
              do {
                iVar11 = iVar11 + 1;
                puVar6[-2] = local_23;
                puVar6[-1] = local_22;
                *puVar6 = uVar1;
                puVar6[1] = 0xff;
                puVar6 = puVar6 + 4;
              } while (iVar11 < (int)local_1c);
            }
            iVar3 = iVar3 + 1;
            local_8 = local_8 + local_14;
          } while (iVar3 < (int)local_18);
        }
      }
    }
    else {
      puVar12 = param_3;
      for (uVar9 = local_14 * local_18 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
  }
LAB_5f6c3232:
  iVar3 = (int)*(undefined1 **)((int)this + 8) >> 0x1f;
  if ((param_2 <= iVar3) && ((param_2 < iVar3 || (param_1 <= *(undefined1 **)((int)this + 8))))) {
    if (param_1 != (undefined1 *)0x0 || param_2 != 0) {
      if ((param_5 < 1) && (param_5 < 0)) {
        param_4 = (undefined1 *)0x0;
        param_5 = 0;
        local_8 = (undefined1 *)0x0;
      }
      else {
        local_8 = param_4;
        if ((*(byte *)((int)param_4 * 0x319 + *(int *)((int)this + 0x32d)) & 0x1c) < 5) {
          local_8 = param_4 + 1;
          param_5 = param_5 + (uint)((undefined1 *)0xfffffffe < param_4);
        }
      }
      local_4 = param_5;
      if (param_5 <= param_2) {
        if (param_5 < param_2) goto LAB_5f6c32bb;
        do {
          if (param_1 <= local_8) break;
LAB_5f6c32bb:
          do {
            puVar6 = local_8;
            iVar3 = (int)local_8 * 0x319;
            pbVar10 = (byte *)(*(int *)((int)this + 0x32d) + iVar3);
            if (*(int *)(*(int *)((int)this + 0x32d) + 0x315 + iVar3) != 0) {
              uVar9 = (*pbVar10 & 0x1c) >> 2;
              if (uVar9 < 2) {
                SetFilePointer(*(HANDLE *)((int)this + 4),*(LONG *)(pbVar10 + 0x30d),
                               (PLONG)(pbVar10 + 0x311),0);
                if ((*(byte *)(*(int *)((int)this + 0x32d) + iVar3 + 0xc) & 0x80) == 0) {
                  if (local_10 == 0) {
                    local_c = local_20;
                  }
                  uVar8 = FUN_5f6c4260();
                  if ((short)uVar8 != 0) {
                    return -0x7fffbffb;
                  }
                  if (local_10 == 0) {
                    local_10 = 1;
                    local_20 = local_20 + (1 << (*(byte *)((int)this + 0x1c) & 7) + 1);
                  }
                }
                else {
                  uVar8 = FUN_5f6c4260();
                  if ((short)uVar8 != 0) {
                    return -0x7fffbffb;
                  }
                  local_20 = local_20 +
                             (1 << (*(byte *)(*(int *)((int)this + 0x32d) + 0xc + iVar3) & 7) + 1);
                }
              }
              else if ((uVar9 == 2) && (*(int *)((int)this + 0x331) != 0)) {
                if ((*pbVar10 & 1) != 0) {
                  local_23 = 0;
                  local_22 = 0;
                  param_4 = (undefined1 *)0x0;
                  local_21 = 0;
                }
                uVar9 = (uint)*(ushort *)(pbVar10 + 6);
                if (uVar9 < *(ushort *)(pbVar10 + 10) + uVar9) {
                  do {
                    puVar7 = (undefined1 *)
                             ((int)param_3 +
                             (uint)*(ushort *)(pbVar10 + 4) * 4 +
                             ((local_18 - uVar9) + -1) * local_14);
                    iVar11 = 0;
                    if (*(short *)(pbVar10 + 8) != 0) {
                      do {
                        *puVar7 = param_4._0_1_;
                        puVar7[1] = local_22;
                        puVar7[2] = local_23;
                        puVar7[3] = local_21;
                        puVar7 = puVar7 + 4;
                        iVar11 = iVar11 + 1;
                      } while (iVar11 < (int)(uint)*(ushort *)
                                                    (*(int *)((int)this + 0x32d) + 8 + iVar3));
                    }
                    uVar9 = uVar9 + 1;
                    pbVar10 = (byte *)(*(int *)((int)this + 0x32d) + iVar3);
                  } while ((int)uVar9 <
                           (int)((uint)*(ushort *)(*(int *)((int)this + 0x32d) + 10 + iVar3) +
                                (uint)*(ushort *)(pbVar10 + 6)));
                }
              }
            }
            local_8 = puVar6 + 1;
            local_4 = local_4 + (uint)((undefined1 *)0xfffffffe < puVar6);
          } while (local_4 < param_2);
        } while (local_4 <= param_2);
      }
    }
    iVar3 = *(int *)((int)this + 0x32d) + (int)param_1 * 0x319;
    SetFilePointer(*(HANDLE *)((int)this + 4),*(LONG *)(iVar3 + 0x30d),(PLONG)(iVar3 + 0x311),0);
    if ((*(byte *)(*(int *)((int)this + 0x32d) + 0xc + (int)param_1 * 0x319) & 0x80) == 0) {
      uVar8 = FUN_5f6c4260();
      sVar2 = (short)uVar8;
    }
    else {
      uVar8 = FUN_5f6c4260();
      sVar2 = (short)uVar8;
    }
    if (sVar2 == 0) {
      return 0;
    }
  }
  return -0x7fffbffb;
}


