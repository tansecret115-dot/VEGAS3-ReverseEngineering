/* Module: erv23260.dll
   Function: FUN_637f7030
   Address: 637f7030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637f7030(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7,int param_8,uint param_9)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int local_28;
  int local_24;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = param_9;
  if (param_8 != 0) {
    local_8 = *(uint *)(&DAT_6382f588 + param_9 * 4);
  }
  iVar1 = param_4 * 8;
  param_1 = param_1 + iVar1;
  local_10 = param_1 + param_4 * -2;
  local_c = param_1 + param_4;
  iVar12 = (-(uint)(param_5 != 0) & param_6) + param_7;
  local_14 = 8;
  param_4 = param_1 - param_4;
  param_7 = iVar12;
  if (8 < param_3) {
    do {
      local_28 = 0;
      uVar9 = (int)local_14 >> 0x1f;
      if (0 < param_2) {
        do {
          if (param_5 == 0) {
            iVar10 = local_28 >> 4;
            iVar7 = iVar12;
            if (((local_14 ^ uVar9) - uVar9 & 0xf ^ uVar9) - uVar9 != 8) goto LAB_637f70e4;
          }
          else {
            iVar10 = local_28 >> 3;
LAB_637f70e4:
            iVar7 = iVar12 - param_6;
          }
          bVar8 = *(byte *)(iVar7 + iVar10) & 0x1f;
          if (((bVar8 != 0) || ((*(byte *)(iVar12 + iVar10) & 0x1f) != 0)) || (param_9 != 0)) {
            if ((*(byte *)(iVar12 + iVar10) & 0x1f) == 0) {
              if (bVar8 == 0) {
                local_8 = -(uint)(param_9 != 0) & local_8;
              }
              else {
                local_8 = *(byte *)(iVar7 + iVar10) & 0x1f;
              }
            }
            else {
              local_8 = *(byte *)(iVar12 + iVar10) & 0x1f;
            }
            if (param_8 != 0) {
              local_8 = *(uint *)(&DAT_6382f588 + local_8 * 4);
            }
            cVar2 = *(char *)(local_8 + (int)this);
            local_24 = local_28 + 8;
            if (local_28 < local_24) {
              pbVar11 = (byte *)(param_4 + -8 + local_24);
              local_24 = local_24 - local_28;
              do {
                bVar8 = pbVar11[param_1 - param_4];
                bVar3 = *pbVar11;
                bVar4 = pbVar11[local_10 - param_4];
                bVar5 = pbVar11[local_c - param_4];
                iVar12 = ((uint)bVar4 + ((uint)bVar8 - (uint)bVar3) * 4) - (uint)bVar5;
                iVar12 = (int)*(char *)((int)this +
                                       ((int)(iVar12 + (iVar12 >> 0x1f & 7U)) >> 3) +
                                       cVar2 * 0x1ff + -199);
                iVar10 = (uint)bVar4 - (uint)bVar5;
                iVar7 = iVar12 / 2;
                iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
                if (iVar7 < 0) {
                  iVar7 = -iVar7;
                }
                iVar6 = iVar7;
                if ((iVar7 < iVar10) || (iVar6 = -iVar7, iVar10 < -iVar7)) {
                  iVar10 = iVar6;
                }
                pbVar11[local_10 - param_4] = bVar4 - (char)iVar10;
                *pbVar11 = (&DAT_6382a400)[iVar12 + (uint)bVar3];
                pbVar11 = pbVar11 + 1;
                pbVar11[(param_1 - param_4) + -1] = (&DAT_6382a400)[(uint)bVar8 - iVar12];
                pbVar11[(local_c - param_4) + -1] = bVar5 + (char)iVar10;
                local_24 = local_24 + -1;
                iVar12 = param_7;
              } while (local_24 != 0);
            }
          }
          local_28 = local_28 + 8;
        } while (local_28 < param_2);
      }
      param_1 = param_1 + iVar1;
      local_c = local_c + iVar1;
      param_4 = param_4 + iVar1;
      local_10 = local_10 + iVar1;
      if ((param_5 != 0) || (((local_14 ^ uVar9) - uVar9 & 0xf ^ uVar9) - uVar9 == 8)) {
        iVar12 = iVar12 + param_6;
        param_7 = iVar12;
      }
      local_14 = local_14 + 8;
    } while ((int)local_14 < param_3);
  }
  return;
}


