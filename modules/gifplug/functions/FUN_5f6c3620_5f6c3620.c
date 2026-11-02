/* Module: gifplug.dll
   Function: FUN_5f6c3620
   Address: 5f6c3620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f6c3620(void *this,int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int local_14;
  int local_10;
  int local_8;
  
  iVar9 = 0;
  bVar2 = false;
  local_14 = 0;
  bVar3 = false;
  local_10 = 0;
  if (0 < param_1) {
    local_8 = param_1;
    local_10 = param_1;
    do {
      pbVar4 = (byte *)(*(int *)((int)this + 0x32d) + iVar9);
      if ((*(int *)(pbVar4 + 0x315) != 0) && ((*pbVar4 & 0x1c) < 5)) {
        if ((pbVar4[0xc] & 0x80) == 0) {
          if (!bVar2) {
            iVar7 = 1 << (*(byte *)((int)this + 0x1c) & 7) + 1;
            if (0 < iVar7) {
              puVar5 = (undefined1 *)(param_3 + 1 + local_14 * 4);
              iVar6 = iVar7;
              puVar11 = (undefined1 *)((int)this + 0x20);
              do {
                puVar5[1] = puVar11[-1];
                *puVar5 = *puVar11;
                puVar5[-1] = puVar11[1];
                puVar5[2] = 0xff;
                puVar5 = puVar5 + 4;
                iVar6 = iVar6 + -1;
                puVar11 = puVar11 + 3;
              } while (iVar6 != 0);
            }
            if ((*(byte *)(*(int *)((int)this + 0x32d) + iVar9) & 1) != 0) {
              *(undefined1 *)
               (param_3 + 3 +
               ((uint)*(byte *)(*(int *)((int)this + 0x32d) + iVar9 + 3) + local_14) * 4) = 0;
            }
            bVar2 = true;
            local_14 = local_14 + iVar7;
            bVar3 = true;
          }
        }
        else {
          iVar7 = 1 << (pbVar4[0xc] & 7) + 1;
          if (0 < iVar7) {
            iVar10 = 0;
            puVar5 = (undefined1 *)(param_3 + 1 + local_14 * 4);
            iVar6 = iVar7;
            iVar12 = iVar9 + 0xf;
            do {
              puVar5[1] = *(undefined1 *)(iVar10 + *(int *)((int)this + 0x32d) + 0xd + iVar9);
              iVar8 = iVar10 + *(int *)((int)this + 0x32d);
              iVar10 = iVar10 + 3;
              iVar6 = iVar6 + -1;
              *puVar5 = *(undefined1 *)(iVar8 + 0xe + iVar9);
              puVar5[-1] = *(undefined1 *)(iVar12 + *(int *)((int)this + 0x32d));
              puVar5[2] = 0xff;
              puVar5 = puVar5 + 4;
              iVar12 = iVar12 + 3;
              bVar2 = bVar3;
            } while (iVar6 != 0);
          }
          if ((*(byte *)(*(int *)((int)this + 0x32d) + iVar9) & 1) != 0) {
            *(undefined1 *)
             (param_3 + 3 +
             ((uint)*(byte *)(*(int *)((int)this + 0x32d) + iVar9 + 3) + local_14) * 4) = 0;
          }
          local_14 = local_14 + iVar7;
        }
      }
      iVar9 = iVar9 + 0x319;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  iVar9 = param_1 * 0x319;
  bVar1 = *(byte *)(iVar9 + 0xc + *(int *)((int)this + 0x32d));
  if ((bVar1 & 0x80) == 0) {
    if (bVar2) {
      return 0;
    }
    iVar9 = 1 << (*(byte *)((int)this + 0x1c) & 7) + 1;
    if (0 < iVar9) {
      puVar5 = (undefined1 *)(param_3 + 1 + local_14 * 4);
      puVar11 = (undefined1 *)((int)this + 0x20);
      do {
        puVar5[1] = puVar11[-1];
        *puVar5 = *puVar11;
        puVar5[-1] = puVar11[1];
        puVar5[2] = 0xff;
        puVar5 = puVar5 + 4;
        iVar9 = iVar9 + -1;
        puVar11 = puVar11 + 3;
      } while (iVar9 != 0);
    }
    pbVar4 = (byte *)(local_10 * 0x319 + *(int *)((int)this + 0x32d));
    if (*(int *)(local_10 * 0x319 + 0x315 + *(int *)((int)this + 0x32d)) == 0) {
      return 0;
    }
    bVar1 = *pbVar4;
  }
  else {
    iVar7 = 1 << (bVar1 & 7) + 1;
    if (0 < iVar7) {
      iVar12 = 0;
      iVar6 = iVar9 + 0xf;
      puVar5 = (undefined1 *)(param_3 + 1 + local_14 * 4);
      do {
        iVar12 = iVar12 + 3;
        iVar6 = iVar6 + 3;
        puVar5[1] = *(undefined1 *)(iVar9 + *(int *)((int)this + 0x32d) + 10 + iVar12);
        iVar7 = iVar7 + -1;
        *puVar5 = *(undefined1 *)(iVar9 + *(int *)((int)this + 0x32d) + 0xb + iVar12);
        puVar5[-1] = *(undefined1 *)(*(int *)((int)this + 0x32d) + -3 + iVar6);
        puVar5[2] = 0xff;
        puVar5 = puVar5 + 4;
      } while (iVar7 != 0);
    }
    pbVar4 = (byte *)(local_10 * 0x319 + *(int *)((int)this + 0x32d));
    if (*(int *)(local_10 * 0x319 + 0x315 + *(int *)((int)this + 0x32d)) == 0) {
      return 0;
    }
    bVar1 = *pbVar4;
  }
  if ((bVar1 & 1) != 0) {
    *(undefined1 *)(param_3 + 3 + ((uint)pbVar4[3] + local_14) * 4) = 0;
  }
  return 0;
}


