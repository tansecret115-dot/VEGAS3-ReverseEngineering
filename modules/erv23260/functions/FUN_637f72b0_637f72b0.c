/* Module: erv23260.dll
   Function: FUN_637f72b0
   Address: 637f72b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637f72b0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,uint param_9)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = param_9;
  if (param_8 != 0) {
    local_8 = *(uint *)(&DAT_6382f588 + param_9 * 4);
  }
  local_1c = 8;
  if (8 < param_2) {
    do {
      local_c = param_7;
      local_10 = 0;
      local_14 = param_1;
      iVar9 = param_7;
      if (0 < param_3) {
        do {
          if (param_5 == 0) {
            uVar5 = (int)local_1c >> 0x1f;
            iVar6 = (int)local_1c >> 4;
            iVar8 = iVar9;
            iVar4 = iVar6;
            if (((local_1c ^ uVar5) - uVar5 & 0xf ^ uVar5) - uVar5 != 8) goto LAB_637f7339;
          }
          else {
            iVar4 = (int)local_1c >> 3;
LAB_637f7339:
            iVar6 = iVar4 + -1;
            iVar8 = iVar9 + -1;
          }
          if ((((*(byte *)(iVar8 + iVar4) & 0x1f) != 0) || ((*(byte *)(iVar9 + iVar4) & 0x1f) != 0))
             || (param_9 != 0)) {
            if ((*(byte *)(iVar9 + iVar4) & 0x1f) == 0) {
              if ((*(byte *)(iVar9 + iVar6) & 0x1f) == 0) {
                local_8 = -(uint)(param_9 != 0) & local_8;
              }
              else {
                local_8 = *(byte *)(iVar9 + iVar6) & 0x1f;
              }
            }
            else {
              local_8 = *(byte *)(iVar9 + iVar4) & 0x1f;
            }
            if (param_8 != 0) {
              local_8 = *(uint *)(&DAT_6382f588 + local_8 * 4);
            }
            local_18 = 8;
            cVar1 = *(char *)(local_8 + (int)this);
            pbVar7 = (byte *)(local_14 + local_1c);
            do {
              bVar2 = pbVar7[1];
              bVar3 = pbVar7[-2];
              iVar9 = (((uint)*pbVar7 - (uint)pbVar7[-1]) * 4 - (uint)bVar2) + (uint)bVar3;
              iVar9 = (int)*(char *)((int)this +
                                    ((int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3) +
                                    cVar1 * 0x1ff + -199);
              iVar4 = (uint)bVar3 - (uint)bVar2;
              iVar8 = iVar9 / 2;
              iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              iVar6 = iVar8;
              if ((iVar8 < iVar4) || (iVar6 = -iVar8, iVar4 < -iVar8)) {
                iVar4 = iVar6;
              }
              pbVar7[-2] = bVar3 - (char)iVar4;
              pbVar7[-1] = (&DAT_6382a400)[iVar9 + (uint)pbVar7[-1]];
              *pbVar7 = (&DAT_6382a400)[(uint)*pbVar7 - iVar9];
              pbVar7[1] = bVar2 + (char)iVar4;
              pbVar7 = pbVar7 + param_4;
              local_18 = local_18 + -1;
              iVar9 = local_c;
            } while (local_18 != 0);
          }
          local_14 = local_14 + param_4 * 8;
          if ((param_5 != 0) ||
             (uVar5 = (int)local_10 >> 0x1f, ((local_10 ^ uVar5) - uVar5 & 0xf ^ uVar5) - uVar5 == 8
             )) {
            iVar9 = iVar9 + param_6;
            local_c = iVar9;
          }
          local_10 = local_10 + 8;
        } while ((int)local_10 < param_3);
      }
      local_1c = local_1c + 8;
    } while ((int)local_1c < param_2);
  }
  return;
}


