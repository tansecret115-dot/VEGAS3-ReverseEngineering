/* Module: erv33260.dll
   Function: FUN_67081fd0
   Address: 67081fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67081fd0(void *this,uint param_1)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint local_b4 [18];
  char local_6c [8];
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint local_58 [3];
  uint local_4c;
  int local_48;
  int local_44;
  uint *local_40;
  uint local_3c;
  int *local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_18 = *(uint *)((int)this + 0x9c);
  iVar15 = param_1 * 0xc;
  local_14 = *(uint *)(iVar15 + *(int *)((int)this + 0x8c));
  iVar12 = iVar15 + *(int *)((int)this + 0x8c);
  local_4c = (uint)*(byte *)(iVar12 + 4);
  local_c = (uint)*(byte *)(iVar12 + 6);
  local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)(iVar12 + 5));
  local_1c = *(uint **)((int)this + 0xc0);
  local_5c = local_1c + 0x80;
  local_10 = local_1c + 0x90;
  local_40 = local_1c + 0x158;
  local_60 = local_1c + 0x98;
  local_28 = local_1c + 0x168;
  local_38 = (int *)((uint)(byte)(&DAT_67091278)[local_4c] * 0x18);
  local_44 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = *(int *)(*(int *)((int)this + 0x5c) + 4);
  local_64 = local_1c + 0x179;
  local_24 = *(int *)(*(int *)((int)this + 0x68) + 4);
  if (*(char *)((int)this + 0x160) == '\x06') {
    local_30 = *(int *)(*(int *)((int)this + 100) + 4);
  }
  else {
    local_30 = *(int *)(*(int *)((int)this + 0x60) + 4);
  }
  local_34 = param_1 * 0x10;
  piVar4 = (int *)(local_34 + *(int *)((int)this + 0x90));
  iVar12 = *piVar4;
  local_20 = piVar4[2];
  local_58[2] = iVar15;
  if ((1 < local_c) && (local_c != 8)) {
    FUN_6708bad0(this,local_30 + iVar12,local_18,(char *)(*(int *)((int)this + 0x78) + local_20 * 2)
                 ,local_1c,local_c);
  }
  if (local_c == 0) {
    FUN_67082d20(this,local_b4,param_1);
  }
  *(undefined4 *)(iVar15 + 8 + *(int *)((int)this + 0x8c)) = 0;
  if (local_c == 1) {
    FUN_6708e110((int)local_1c,local_48 + iVar12,local_18,(int *)local_28);
    FUN_6708dfd0((int)local_28);
    if (*(int *)((int)this + 200) == 0) {
      bVar2 = (&DAT_670906d8)[local_4c];
    }
    else {
      bVar2 = (byte)local_4c;
    }
    local_1c = (uint *)CONCAT31(local_1c._1_3_,bVar2);
    FUN_6708dce0((uint)bVar2,(uint)bVar2,1,(int)local_28,(int)local_10,(int)local_28);
    local_2c = local_64 + -1;
    iVar5 = FUN_67075410((short *)local_10,local_2c);
    if (iVar5 != 0) {
      return 1;
    }
    if (*local_2c != 0) {
      puVar6 = &DAT_67090f70;
      do {
        if ((short)*local_10 != 0) {
          puVar1 = (uint *)(iVar15 + 8 + *(int *)((int)this + 0x8c));
          *puVar1 = *puVar1 | *puVar6;
        }
        puVar6 = puVar6 + 1;
        local_10 = (uint *)((int)local_10 + 2);
      } while (puVar6 < &DAT_67090fb0);
    }
    FUN_6708dea0((int)local_28);
  }
  local_8 = 0;
  do {
    local_10 = local_60 + local_8 * 8;
    if (local_c == 8) {
      iVar15 = *(int *)((int)this + 0x7c);
      iVar5 = (uint)(byte)(&DAT_67090628)[local_8] * 0x10 + (uint)(byte)(&DAT_67090618)[local_8];
    }
    else {
      iVar15 = *(int *)((int)this + 0xc0);
      iVar5 = (uint)(byte)(&DAT_67090628)[local_8] * 0x10 + (uint)(byte)(&DAT_67090618)[local_8];
    }
    if (local_c == 0) {
      iVar15 = (**(code **)((int)this + 0x234))
                         (local_b4,local_48 + iVar12,local_24 + iVar12,local_8,
                          *(int *)((int)this + 0x84) + local_20,iVar5 + iVar15);
      local_38 = (int *)((int)local_38 + iVar15);
    }
    if (((&DAT_67090f70)[local_8] & local_14) == 0) {
      local_64[local_8] = 0;
      (**(code **)((int)this + 0x244))(local_24 + iVar12);
    }
    else {
      (**(code **)((int)this + 0x23c))(local_18,local_5c);
      (**(code **)((int)this + 0x248))();
      local_2c = (uint *)(**(code **)((int)this + 0x250))(local_c < 2,local_5c,local_10,local_40);
      if ((local_c == 1) && ((**(code **)((int)this + 0x254))(), local_c == 1)) {
        *(undefined2 *)local_10 = 0;
      }
      if (local_2c == (uint *)0x0) {
        local_1c = local_64 + local_8;
        *local_1c = 0;
      }
      else {
        local_1c = local_64 + local_8;
        FUN_67075310((short *)local_10,local_1c);
      }
      local_2c = local_58 + (local_8 >> 1 & 1);
      iVar15 = FUN_67075540(*local_1c);
      *local_2c = *local_2c + iVar15;
      if ((*local_1c == 0) &&
         ((local_14 = local_14 & ~(&DAT_67090f70)[local_8], local_c != 1 || (local_28[local_8] == 0)
          ))) {
        (**(code **)((int)this + 0x244))(local_24 + iVar12);
      }
      else {
        (**(code **)((int)this + 0x24c))();
        (**(code **)((int)this + 0x240))(local_18,local_24 + iVar12);
      }
    }
    if ((~local_8 & 7) == 0) {
      if (local_8 != 0xf) {
        if (1 < local_c) {
          bVar3 = false;
          if (((int)local_58[0] <= DAT_67091048) && ((local_14 & 0x33) != 0)) {
            bVar3 = true;
            local_14 = local_14 & 0xffffffcc;
          }
          if (((int)local_58[1] <= DAT_67091048) && ((local_14 & 0xcc) != 0)) {
            bVar3 = true;
            local_14 = local_14 & 0xffffff33;
          }
          local_44 = local_58[0] + local_58[1];
          local_58[0] = 0;
          local_58[1] = 0;
          if (bVar3) {
            piVar4 = (int *)(*(int *)((int)this + 0x90) + local_34);
            local_20 = piVar4[2];
            iVar12 = *piVar4;
LAB_670825a8:
            local_8 = 0;
            goto LAB_670825c5;
          }
        }
LAB_670825ac:
        iVar15 = *(int *)((int)this + local_8 * 4 + 0x16c);
        goto LAB_670825b8;
      }
      if (local_c < 2) {
        if (((*(int *)((int)this + 200) == 0) || (local_c == 1)) ||
           (local_38 < *(int **)((int)this + 0x164))) goto LAB_670825ac;
        local_14 = *(uint *)((int)this + 0x168);
        local_c = (uint)*(byte *)((int)this + 0x160);
        *(byte *)(local_58[2] + 6 + *(int *)((int)this + 0x8c)) = *(byte *)((int)this + 0x160);
        *(int *)((int)this + 0x15c) = *(int *)((int)this + 0x15c) + -1;
        piVar4 = (int *)(local_34 + *(int *)((int)this + 0x90));
        local_20 = piVar4[2];
        iVar12 = *piVar4;
        if (local_c == 8) goto LAB_670825a8;
        FUN_6708bad0(this,local_30 + iVar12,local_18,
                     (char *)(*(int *)((int)this + 0x78) + local_20 * 2),
                     *(undefined4 *)((int)this + 0xc0),local_c);
        local_8 = 0;
      }
      else if (((local_14 & 0xffff) == 0) ||
              (DAT_6709104c < (int)(local_58[0] + local_58[1] + local_44))) {
        bVar3 = false;
        if (((int)local_58[0] <= DAT_67091048) && ((local_14 & 0x3300) != 0)) {
          local_14 = local_14 & 0xffffccff;
          bVar3 = true;
        }
        if (((int)local_58[1] <= DAT_67091048) && ((local_14 & 0xcc00) != 0)) {
          local_14 = local_14 & 0xffff33ff;
          bVar3 = true;
        }
        local_58[0] = 0;
        local_58[1] = 0;
        if (!bVar3) goto LAB_670825ac;
        local_20 = local_20 + (-3 - *(int *)((int)this + 0xa8));
        local_8 = 8;
        iVar12 = iVar12 + *(int *)((int)this + 0x9c) * -4 + -0xc;
      }
      else {
        local_14 = local_14 & 0xffff0000;
        piVar4 = (int *)(local_34 + *(int *)((int)this + 0x90));
        local_20 = piVar4[2];
        iVar12 = *piVar4;
        local_8 = 0;
      }
    }
    else {
      iVar15 = *(int *)((int)this + local_8 * 4 + 0x16c);
LAB_670825b8:
      local_20 = local_20 + iVar15;
      iVar12 = iVar12 + *(int *)((int)this + local_8 * 4 + 0x1cc);
      local_8 = local_8 + 1;
    }
LAB_670825c5:
  } while (local_8 < 0x10);
  if (local_c == 8) {
    pcVar7 = (char *)(*(int *)((int)this + 0x74) +
                     *(int *)(local_34 + 8 + *(int *)((int)this + 0x90)) * 2);
    uVar8 = (uint)*(byte *)(*(int *)((int)this + 0x88) + 6 + local_58[2]);
  }
  else {
    if (local_c < 2) goto LAB_67082633;
    pcVar7 = (char *)(*(int *)((int)this + 0x78) +
                     *(int *)(local_34 + 8 + *(int *)((int)this + 0x90)) * 2);
    uVar8 = local_c;
  }
  FUN_67082b40(this,pcVar7,(int *)((int)this + 0x5c),local_6c,uVar8);
LAB_67082633:
  local_1c = (uint *)0x14;
  local_48 = *(undefined4 *)(*(int *)((int)this + 0x5c) + 8);
  local_24 = *(int *)(*(int *)((int)this + 0x68) + 8);
  uVar8 = local_8;
  if (*(char *)((int)this + 0x160) == '\b') {
    local_30 = *(int *)(*(int *)((int)this + 0x60) + 8);
    local_2c = *(uint **)(*(int *)((int)this + 100) + 8);
  }
  else if (*(char *)((int)this + 0x160) == '\x06') {
    local_30 = *(int *)(*(int *)((int)this + 100) + 8);
  }
  else {
    local_30 = *(int *)(*(int *)((int)this + 0x60) + 8);
  }
  do {
    puVar13 = *(undefined4 **)((int)this + 0xc0);
    iVar12 = *(int *)(local_34 + 4 + *(int *)((int)this + 0x90));
    if (local_c == 8) {
      FUN_6708c030(this,local_30 + iVar12,(int)local_2c + iVar12,param_1,local_18,local_6c,puVar13,
                   *(undefined4 *)((int)this + 0x80),*(int *)((int)this + 0xb8),
                   *(undefined4 *)((int)this + 0xbc));
      uVar8 = local_8;
    }
    else if (1 < local_c) {
      FUN_6708bd30(this,local_30 + iVar12,local_18,local_6c,puVar13,local_c);
      uVar8 = local_8;
    }
    local_20 = *(int *)(local_34 + 8 + *(int *)((int)this + 0x90));
    if (local_c == 1) {
      FUN_6708d7c0((int)*(char *)(*(int *)((int)this + 0x84) + local_20),local_3c & 0xff,
                   local_24 + iVar12,local_18,puVar13);
      uVar8 = local_8;
    }
    if (uVar8 < local_1c) {
      local_10 = local_64 + uVar8;
      local_28 = local_60 + uVar8 * 8;
      local_38 = (int *)((int)this + uVar8 * 4 + 0x16c);
      local_44 = (int)&DAT_67090f70 - (int)local_64;
      do {
        if (local_c == 0) {
          FUN_6708c9b0((int)*(char *)(*(int *)((int)this + 0x84) + local_20),
                       (uint)(byte)(&DAT_67091788)[local_8] | local_3c & 0xff,local_8,
                       local_24 + iVar12,local_18,puVar13);
        }
        if ((*(uint *)(local_44 + (int)local_10) & local_14) == 0) {
          *local_10 = 0;
LAB_67082849:
          (**(code **)((int)this + 0x244))(local_24 + iVar12);
        }
        else {
          (**(code **)((int)this + 0x23c))(local_18,local_5c);
          (**(code **)((int)this + 0x248))();
          iVar15 = (**(code **)((int)this + 0x250))(local_c < 2,local_5c,local_28,local_40);
          if (iVar15 == 0) {
            *local_10 = 0;
          }
          else {
            FUN_67075310((short *)local_28,local_10);
          }
          if (*local_10 == 0) {
            local_14 = local_14 & ~*(uint *)(local_44 + (int)local_10);
            goto LAB_67082849;
          }
          (**(code **)((int)this + 0x24c))();
          (**(code **)((int)this + 0x240))(local_18,local_24 + iVar12);
        }
        iVar12 = iVar12 + local_38[0x18];
        local_20 = local_20 + *local_38;
        local_28 = local_28 + 8;
        uVar8 = local_8 + 1;
        puVar13 = puVar13 + (local_8 & 1) * 0xe + 1;
        local_10 = local_10 + 1;
        local_38 = local_38 + 1;
        local_8 = uVar8;
      } while (uVar8 < local_1c);
    }
    if (uVar8 == 0x14) {
      local_1c = (uint *)0x18;
      local_48 = *(undefined4 *)(*(int *)((int)this + 0x5c) + 0xc);
      local_24 = *(int *)(*(int *)((int)this + 0x68) + 0xc);
      if (*(char *)((int)this + 0x160) == '\b') {
        local_30 = *(int *)(*(int *)((int)this + 0x60) + 0xc);
        local_2c = *(uint **)(*(int *)((int)this + 100) + 0xc);
      }
      else {
        if (*(char *)((int)this + 0x160) == '\x06') {
          iVar12 = *(int *)((int)this + 100);
        }
        else {
          iVar12 = *(int *)((int)this + 0x60);
        }
        local_30 = *(int *)(iVar12 + 0xc);
      }
    }
    if (0x17 < uVar8) {
      *(undefined4 *)((int)this + 0xc4) = 0xdeadbeef;
      *(uint *)(local_58[2] + *(int *)((int)this + 0x8c)) = local_14;
      iVar15 = 0x10;
      iVar12 = *(int *)(local_34 + 8 + *(int *)((int)this + 0x90));
      piVar4 = (int *)((int)this + 0x16c);
      do {
        if (*(byte *)(local_58[2] + 6 + *(int *)((int)this + 0x8c)) < 2) {
          *(undefined2 *)(*(int *)((int)this + 0x78) + iVar12 * 2) = 0;
        }
        else {
          *(undefined1 *)(*(int *)((int)this + 0x84) + iVar12) = 0;
        }
        iVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        iVar12 = iVar12 + iVar5;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      *(uint *)(local_58[2] + 8 + *(int *)((int)this + 0x8c)) =
           *(uint *)(local_58[2] + 8 + *(int *)((int)this + 0x8c)) | local_14;
      uVar8 = 0;
      if (*(int *)((int)this + 200) != 0) {
        iVar12 = *(int *)((int)this + 0xa8);
        iVar15 = *(int *)((int)this + 0xa0);
        iVar5 = local_58[2] + *(int *)((int)this + 0x8c);
        if (local_c == 8) {
          iVar9 = *(int *)((int)this + 0x74);
        }
        else {
          iVar9 = *(int *)((int)this + 0x78);
        }
        pcVar7 = (char *)(iVar9 + *(int *)(local_34 + 8 + *(int *)((int)this + 0x90)) * 2);
        param_1 = 0;
        local_60 = (uint *)((int)this + 0x16c);
        do {
          uVar10 = (uint)(byte)(&DAT_67091788)[param_1] | local_3c & 0xff;
          if ((uVar10 & 1) != 0) {
            if ((((3 < (int)*pcVar7 - (int)pcVar7[-2]) || ((int)*pcVar7 - (int)pcVar7[-2] < -3)) ||
                (3 < (int)pcVar7[1] - (int)pcVar7[-1])) || ((int)pcVar7[1] - (int)pcVar7[-1] < -3))
            {
              uVar11 = *(uint *)((int)&DAT_67090f70 + uVar8) | *(uint *)(iVar5 + 8);
              *(uint *)(iVar5 + 8) = uVar11;
              if ((param_1 & 3) == 0) {
                *(uint *)(iVar5 + -4) =
                     *(uint *)(iVar5 + -4) | *(uint *)((int)&DAT_67090f7c + uVar8);
              }
              else {
                *(uint *)(iVar5 + 8) = *(uint *)((int)&DAT_67090f6c + uVar8) | uVar11;
              }
            }
          }
          if ((uVar10 & 4) != 0) {
            iVar9 = (int)*pcVar7 - (int)pcVar7[iVar12 * -2];
            iVar14 = (int)pcVar7[1] - (int)(pcVar7 + iVar12 * -2)[1];
            if (((3 < iVar9) || (iVar9 < -3)) || ((3 < iVar14 || (iVar14 < -3)))) {
              uVar10 = *(uint *)((int)&DAT_67090f70 + uVar8) | *(uint *)(iVar5 + 8);
              *(uint *)(iVar5 + 8) = uVar10;
              if (uVar8 < 0xd) {
                puVar6 = (uint *)(iVar5 + iVar15 * -0xc + 8);
                *puVar6 = *puVar6 | *(uint *)((int)&DAT_67090fa0 + uVar8);
              }
              else {
                *(uint *)(iVar5 + 8) = *(uint *)((int)&DAT_67090f60 + uVar8) | uVar10;
              }
            }
          }
          uVar8 = uVar8 + 4;
          iVar9 = *local_60;
          local_60 = local_60 + 1;
          pcVar7 = pcVar7 + iVar9 * 2;
          param_1 = param_1 + 1;
        } while (uVar8 < 0x40);
      }
      if (local_c < 2) {
        *(undefined4 *)(local_58[2] + 8 + *(int *)((int)this + 0x8c)) = 0xffffff;
      }
      return 0;
    }
  } while( true );
}


