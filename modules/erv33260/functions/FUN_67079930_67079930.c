/* Module: erv33260.dll
   Function: FUN_67079930
   Address: 67079930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_67079930(void *this,uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
            char param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *local_28;
  byte *local_1c;
  uint local_10;
  uint local_c;
  byte local_6;
  byte local_5;
  
  uVar2 = param_1 >> 4;
  uVar3 = ((param_1 >> 2) - 1) * param_2;
  uVar12 = ((param_2 >> 2) - 1) * param_1;
  local_6 = 0;
  local_5 = 0;
  uVar4 = (uVar3 + uVar12) * 3 >> 1;
  if ((*(uint *)((int)this + 0x24) < uVar4) || (*(int *)((int)this + 8) == 0)) {
    if (*(void **)((int)this + 8) != (void *)0x0) {
      FUN_67072140(*(void **)((int)this + 8));
      *(undefined4 *)((int)this + 8) = 0;
    }
    iVar5 = FUN_67072130(uVar4 + 8);
    *(int *)((int)this + 8) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x24) = 0;
      return 2;
    }
    uVar6 = iVar5 + 7U & 0xfffffff8;
    *(uint *)((int)this + 0xc) = uVar6;
    iVar5 = uVar6 + uVar3;
    *(int *)((int)this + 0x10) = iVar5;
    iVar5 = iVar5 + uVar12;
    *(int *)((int)this + 0x14) = iVar5;
    iVar5 = iVar5 + (uVar3 >> 2);
    iVar13 = (uVar12 >> 2) + iVar5;
    *(int *)((int)this + 0x18) = iVar5;
    *(int *)((int)this + 0x1c) = iVar13;
    *(uint *)((int)this + 0x24) = uVar4;
    *(uint *)((int)this + 0x20) = iVar13 + (uVar3 >> 2);
  }
  pbVar14 = *(byte **)((int)this + 0xc);
  local_10 = 0;
  if (param_2 != 0) {
    do {
      local_c = 4;
      if (4 < param_1) {
        do {
          iVar5 = (local_c >> 4) + (local_10 >> 4) * uVar2;
          pbVar11 = (byte *)(param_3 + iVar5 * param_4);
          bVar8 = *(byte *)(*(int *)this + (uint)*pbVar11);
          uVar4 = (local_c >> 2 & 3) + (local_10 & 0xc);
          puVar1 = (uint *)(param_5 + iVar5 * param_6 * 4);
          uVar3 = *puVar1;
          if (((&DAT_67090f70)[uVar4] & uVar3) == 0) {
            if ((uVar4 & 3) == 0) {
              if (((&DAT_67090f7c)[uVar4] & *(uint *)(param_5 + (iVar5 + -1) * param_6 * 4)) == 0) {
LAB_67079a96:
                bVar8 = 0;
              }
              else {
                bVar8 = *(byte *)((uint)*(byte *)((iVar5 + -1) * param_4 + param_3) + *(int *)this);
              }
            }
            else if (((&DAT_67090f6c)[uVar4] & uVar3) == 0) goto LAB_67079a96;
          }
          pbVar14[3] = bVar8;
          pbVar14[2] = bVar8;
          pbVar14[1] = bVar8;
          *pbVar14 = bVar8;
          uVar4 = uVar4 + 4;
          bVar7 = *(byte *)(*(int *)this + (uint)*pbVar11);
          uVar3 = *puVar1;
          if (((&DAT_67090f70)[uVar4] & uVar3) == 0) {
            if ((uVar4 & 3) == 0) {
              if (((&DAT_67090f7c)[uVar4] & *(uint *)(param_5 + (iVar5 + -1) * param_6 * 4)) == 0)
              goto LAB_67079b07;
              bVar7 = *(byte *)((uint)*(byte *)((iVar5 + -1) * param_4 + param_3) + *(int *)this);
            }
            else if (((&DAT_67090f6c)[uVar4] & uVar3) == 0) {
LAB_67079b07:
              bVar7 = 0;
            }
          }
          pbVar14[7] = bVar7;
          local_6 = local_6 | bVar8 | bVar7;
          pbVar14[6] = bVar7;
          pbVar14[5] = bVar7;
          pbVar14[4] = bVar7;
          local_c = local_c + 4;
          pbVar14 = pbVar14 + 8;
        } while (local_c < param_1);
      }
      local_10 = local_10 + 8;
    } while (local_10 < param_2);
  }
  local_28 = *(byte **)((int)this + 0x10);
  local_10 = 4;
  if (4 < param_2) {
    do {
      local_c = 0;
      if (param_1 != 0) {
        do {
          iVar5 = (local_c >> 4) + (local_10 >> 4) * uVar2;
          uVar4 = (local_c >> 2 & 3) + (local_10 & 0xc);
          bVar8 = *(byte *)((uint)*(byte *)(iVar5 * param_4 + param_3) + *(int *)this);
          uVar3 = *(uint *)(param_5 + iVar5 * param_6 * 4);
          if (((&DAT_67090f70)[uVar4] & uVar3) == 0) {
            if (uVar4 < 4) {
              if (((&DAT_67090fa0)[uVar4] & *(uint *)(param_5 + (iVar5 - uVar2) * param_6 * 4)) == 0
                 ) goto LAB_67079c02;
              bVar8 = *(byte *)((uint)*(byte *)((iVar5 - uVar2) * param_4 + param_3) + *(int *)this)
              ;
            }
            else if (((&DAT_67090f60)[uVar4] & uVar3) == 0) {
LAB_67079c02:
              bVar8 = 0;
            }
          }
          local_c = local_c + 4;
          local_28[3] = bVar8;
          local_28[2] = bVar8;
          local_28[1] = bVar8;
          *local_28 = bVar8;
          local_28 = local_28 + 4;
          local_6 = local_6 | bVar8;
        } while (local_c < param_1);
      }
      local_10 = local_10 + 4;
    } while (local_10 < param_2);
  }
  if (param_7 != '\0') {
    _param_7 = *(byte **)((int)this + 0x14);
    local_1c = *(byte **)((int)this + 0x1c);
    local_10 = 0;
    if (param_2 != 0) {
      do {
        local_c = 8;
        if (8 < param_1) {
          do {
            iVar5 = (local_c >> 4) + (local_10 >> 4) * uVar2;
            pbVar14 = (byte *)(iVar5 * param_4 + param_3);
            uVar3 = local_c >> 3 & 1;
            bVar8 = *(byte *)((uint)*pbVar14 + *(int *)this);
            puVar1 = (uint *)(param_5 + iVar5 * param_6 * 4);
            if ((*puVar1 & (&DAT_67090fb0)[uVar3]) == 0) {
              if (uVar3 == 0) {
                if ((_DAT_67090fb4 & *(uint *)(param_5 + (iVar5 + -1) * param_6 * 4)) == 0)
                goto LAB_67079d1b;
                bVar8 = *(byte *)((uint)*(byte *)((iVar5 + -1) * param_4 + param_3) + *(int *)this);
              }
              else if ((*(uint *)(&DAT_67090fac + uVar3 * 4) & *puVar1) == 0) {
LAB_67079d1b:
                bVar8 = 0;
              }
            }
            _param_7[3] = bVar8;
            _param_7[2] = bVar8;
            _param_7[1] = bVar8;
            *_param_7 = bVar8;
            bVar7 = *(byte *)((uint)*pbVar14 + *(int *)this);
            if (((&DAT_67090fc0)[uVar3] & *puVar1) == 0) {
              if (uVar3 == 0) {
                if ((_DAT_67090fc4 & *(uint *)(param_5 + (iVar5 + -1) * param_6 * 4)) == 0)
                goto LAB_67079d90;
                bVar7 = *(byte *)((uint)*(byte *)((iVar5 + -1) * param_4 + param_3) + *(int *)this);
              }
              else if ((*(uint *)(&DAT_67090fbc + uVar3 * 4) & *puVar1) == 0) {
LAB_67079d90:
                bVar7 = 0;
              }
            }
            uVar3 = uVar3 + 2;
            local_1c[3] = bVar7;
            local_1c[2] = bVar7;
            local_1c[1] = bVar7;
            *local_1c = bVar7;
            bVar9 = *(byte *)((uint)*pbVar14 + *(int *)this);
            if (((&DAT_67090fb0)[uVar3] & *puVar1) == 0) {
              if ((uVar3 & 1) == 0) {
                if ((*(uint *)(&DAT_67090fb4 + uVar3 * 4) &
                    *(uint *)(param_5 + (iVar5 + -1) * param_6 * 4)) == 0) goto LAB_67079e08;
                bVar9 = *(byte *)((uint)*(byte *)((iVar5 + -1) * param_4 + param_3) + *(int *)this);
              }
              else if ((*(uint *)(&DAT_67090fac + uVar3 * 4) & *puVar1) == 0) {
LAB_67079e08:
                bVar9 = 0;
              }
            }
            _param_7[7] = bVar9;
            _param_7[6] = bVar9;
            _param_7[5] = bVar9;
            _param_7[4] = bVar9;
            bVar10 = *(byte *)((uint)*pbVar14 + *(int *)this);
            if (((&DAT_67090fc0)[uVar3] & *puVar1) == 0) {
              if ((uVar3 & 1) == 0) {
                if ((*(uint *)(&DAT_67090fc4 + uVar3 * 4) &
                    *(uint *)(param_5 + (iVar5 + -1) * param_6 * 4)) == 0) goto LAB_67079e72;
                bVar10 = *(byte *)((uint)*(byte *)((iVar5 + -1) * param_4 + param_3) + *(int *)this)
                ;
              }
              else if ((*(uint *)(&DAT_67090fbc + uVar3 * 4) & *puVar1) == 0) {
LAB_67079e72:
                bVar10 = 0;
              }
            }
            local_5 = local_5 | bVar8 | bVar7 | bVar9 | bVar10;
            _param_7 = _param_7 + 8;
            local_1c[7] = bVar10;
            local_1c[6] = bVar10;
            local_1c[5] = bVar10;
            local_1c[4] = bVar10;
            local_c = local_c + 8;
            local_1c = local_1c + 8;
          } while (local_c < param_1);
        }
        local_10 = local_10 + 0x10;
      } while (local_10 < param_2);
    }
    local_1c = *(byte **)((int)this + 0x20);
    _param_7 = *(byte **)((int)this + 0x18);
    local_10 = 8;
    if (8 < param_2) {
      do {
        local_c = 0;
        if (param_1 != 0) {
          do {
            iVar5 = (local_c >> 4) + (local_10 >> 4) * uVar2;
            uVar4 = (local_c >> 3 & 1) + (local_10 >> 2 & 2);
            pbVar14 = (byte *)(iVar5 * param_4 + param_3);
            bVar8 = *(byte *)((uint)*pbVar14 + *(int *)this);
            puVar1 = (uint *)(param_5 + iVar5 * param_6 * 4);
            uVar3 = *puVar1;
            if (((&DAT_67090fb0)[uVar4] & uVar3) == 0) {
              if (uVar4 < 2) {
                if (((&DAT_67090fb8)[uVar4] & *(uint *)(param_5 + (iVar5 - uVar2) * param_6 * 4)) ==
                    0) goto LAB_67079f91;
                bVar8 = *(byte *)((uint)*(byte *)((iVar5 - uVar2) * param_4 + param_3) +
                                 *(int *)this);
              }
              else if ((*(uint *)(&UNK_67090fa8 + uVar4 * 4) & uVar3) == 0) {
LAB_67079f91:
                bVar8 = 0;
              }
            }
            _param_7[3] = bVar8;
            _param_7[2] = bVar8;
            _param_7[1] = bVar8;
            *_param_7 = bVar8;
            _param_7 = _param_7 + 4;
            uVar3 = *puVar1;
            bVar7 = *(byte *)((uint)*pbVar14 + *(int *)this);
            if (((&DAT_67090fc0)[uVar4] & uVar3) == 0) {
              if (uVar4 < 2) {
                if (((&DAT_67090fc8)[uVar4] & *(uint *)(param_5 + (iVar5 - uVar2) * param_6 * 4)) ==
                    0) goto LAB_6707a006;
                bVar7 = *(byte *)((uint)*(byte *)((iVar5 - uVar2) * param_4 + param_3) +
                                 *(int *)this);
              }
              else if (((&DAT_67090fb8)[uVar4] & uVar3) == 0) {
LAB_6707a006:
                bVar7 = 0;
              }
            }
            local_1c[3] = bVar7;
            local_1c[2] = bVar7;
            local_1c[1] = bVar7;
            *local_1c = bVar7;
            local_1c = local_1c + 4;
            local_5 = local_5 | bVar8 | bVar7;
            local_c = local_c + 8;
          } while (local_c < param_1);
        }
        local_10 = local_10 + 8;
      } while (local_10 < param_2);
    }
  }
  *(uint *)((int)this + 0x28) = (uint)(local_6 == 0);
  *(uint *)((int)this + 0x2c) = (uint)(local_5 == 0);
  return 0;
}


