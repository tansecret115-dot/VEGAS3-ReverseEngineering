/* Module: mpgmux.dll
   Function: FUN_10009d80
   Address: 10009d80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_10009d80(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,int param_7
            ,int param_8,uint *param_9,char *param_10,int *param_11,int *param_12,byte param_13,
            byte param_14,byte param_15,byte *param_16,undefined4 param_17,uint param_18,
            char *param_19)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined4 uVar14;
  byte *local_20;
  byte *local_18;
  uint local_10;
  uint local_c;
  
  uVar4 = param_1;
  if (*(char *)(param_1 + 0x260c) == '\0') {
    local_18 = (byte *)0x0;
    local_20 = (byte *)0x0;
  }
  else {
    local_18 = (byte *)(param_1 + 0x25b8);
    FUN_1000c030(param_1,local_18,param_2,param_3);
    if (*(int *)(param_1 + 0x11a8) == 0) {
      local_20 = (byte *)0x0;
    }
    else {
      local_20 = (byte *)(param_1 + 0x25d0);
      bVar2 = *(int *)(param_1 + 0x2c) < 2;
      if (bVar2) {
        uVar1 = *(uint *)(param_1 + 0x11b4);
        uVar8 = *(uint *)(param_1 + 0x11ac);
        uVar14 = *(undefined4 *)(param_1 + 0x11c0);
        bVar13 = *(byte *)(param_1 + 0x11bb);
        uVar12 = *(undefined1 *)(param_1 + 0x11b9);
        uVar11 = *(undefined4 *)(param_1 + 0x11bc);
        bVar10 = *(byte *)(param_1 + 0x11ba);
        uVar9 = *(undefined1 *)(param_1 + 0x11b8);
        uVar6 = *(uint *)(param_1 + 0x14b4);
        iVar5 = *(int *)(param_1 + 0x48);
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x11b4);
        uVar8 = *(uint *)(param_1 + 0x11ac);
        uVar14 = *(undefined4 *)(param_1 + 0x11c0);
        bVar13 = *(byte *)(param_1 + 0x11bb);
        uVar12 = *(undefined1 *)(param_1 + 0x11b9);
        uVar11 = *(undefined4 *)(param_1 + 0x11bc);
        bVar10 = *(byte *)(param_1 + 0x11ba);
        uVar9 = *(undefined1 *)(param_1 + 0x11b8);
        uVar6 = *(uint *)(param_1 + 0x14b4);
        iVar5 = *(int *)(param_1 + 0x48);
      }
      FUN_1000c140(param_1,local_20,uVar6,'\x01',iVar5 == 0,bVar2,bVar2,bVar2,1,uVar9,bVar10,uVar11,
                   uVar12,bVar13,uVar14,0xe0,1,uVar1 >> 10,uVar8);
      *(undefined4 *)(param_1 + 0x11a8) = 0;
    }
  }
  iVar5 = *(int *)(param_1 + 0x34);
  param_1._0_1_ = '\0';
  bVar3 = false;
  bVar2 = false;
  if (*(int *)(uVar4 + 0x2c) < 2) {
    iVar7 = -4;
  }
  else {
    iVar7 = -5;
  }
  param_18 = param_18 + iVar7;
  if (*param_10 != '\0') {
    local_10 = param_9[2];
    local_c = param_9[3];
    param_1._0_1_ = (1 < *(int *)(uVar4 + 0x2c)) + '\x01';
    iVar7 = (param_3 - local_c) - (uint)(param_2 < local_10);
    bVar3 = true;
    if ((-1 < iVar7) &&
       ((iVar7 != 0 &&
         SBORROW4(param_3,local_c) == SBORROW4(param_3 - local_c,(uint)(param_2 < local_10)) ||
        (param_2 - local_10 != 0)))) {
      FUN_1000d1ca((double)CONCAT44(iVar7,param_2 - local_10) * _DAT_10015198);
      FUN_10005130(uVar4,(byte *)s_audio_PTS_underflow_at_pack__u_b_100179f8);
      *param_12 = *param_12 + 1;
    }
  }
  uVar8 = *param_9;
  if (uVar8 < param_18) {
    iVar7 = FUN_10001310(uVar4,param_8,uVar8,param_9[2],param_9[3]);
    if (iVar7 != 0) {
      return 0x10;
    }
    while (((uVar8 < param_18 && (!bVar2)) && (*param_19 == '\0'))) {
      iVar7 = (**(code **)(param_6 + 0xc))(param_6,param_9);
      if (iVar7 == 0x10) {
        iVar7 = *(int *)(uVar4 + 0x2eac) + 1;
        *(int *)(uVar4 + 0x2eac) = iVar7;
        if (0x13 < iVar7) {
          *(undefined4 *)(uVar4 + 0x2eac) = 0;
        }
        if (*param_10 == '\0') {
          *(undefined4 *)(uVar4 + 0x2eb0) = *(undefined4 *)(uVar4 + 0x2eac);
        }
        *param_10 = '\x01';
        *param_11 = *param_11 + 1;
        if ((*(char *)(uVar4 + 0x11e9) == '\0') && (*(char *)(uVar4 + 0x11ea) == '\0')) {
LAB_1000a083:
          uVar6 = param_9[2];
          param_9[2] = uVar6 + param_4;
          param_9[3] = param_9[3] + param_5 + (uint)CARRY4(uVar6,param_4);
          uVar6 = *param_9 + uVar8;
          if (param_18 < uVar6) {
            iVar7 = FUN_10001310(uVar4,param_8,param_18 - uVar8,param_9[2],param_9[3]);
            if (iVar7 != 0) {
              return 0x10;
            }
            *param_9 = *param_9 + (uVar8 - param_18);
            uVar6 = param_18;
          }
          else {
            iVar7 = FUN_10001310(uVar4,param_8,*param_9,param_9[2],param_9[3]);
            if (iVar7 != 0) {
              return 0x10;
            }
            *param_9 = 0;
          }
          uVar8 = uVar6;
          if (!bVar3) {
            local_c = param_9[3];
            local_10 = param_9[2];
            param_1._0_1_ = (1 < *(int *)(uVar4 + 0x2c)) + '\x01';
            iVar7 = (param_3 - local_c) - (uint)(param_2 < local_10);
            bVar3 = true;
            if ((-1 < iVar7) &&
               ((iVar7 != 0 &&
                 SBORROW4(param_3,local_c) == SBORROW4(param_3 - local_c,(uint)(param_2 < local_10))
                || (param_2 - local_10 != 0)))) {
              FUN_1000d1ca((double)CONCAT44(iVar7,param_2 - local_10) * _DAT_10015198);
              FUN_10005130(uVar4,(byte *)s_audio_PTS_underflow_at_pack__u_b_100179f8);
              *param_12 = *param_12 + 1;
            }
          }
        }
        else {
          if (((int)param_9[3] <= *(int *)(uVar4 + 0x11f4)) &&
             (((int)param_9[3] < *(int *)(uVar4 + 0x11f4) ||
              (param_9[2] < *(uint *)(uVar4 + 0x11f0))))) goto LAB_1000a083;
          *param_19 = '\x01';
        }
      }
      else {
        bVar2 = true;
      }
    }
  }
  else {
    *param_9 = uVar8 - param_18;
    iVar7 = FUN_10001310(uVar4,param_8,param_18,param_9[2],param_9[3]);
    uVar8 = param_18;
    if (iVar7 != 0) {
      return 0x10;
    }
  }
  if ((char)param_1 == '\0') {
    if (*(int *)(uVar4 + 0x2c) < 2) {
      param_18 = param_18 + 4;
    }
    else {
      param_18 = param_18 + 5;
    }
  }
  iVar5 = FUN_1000b590(uVar4,(byte *)(uVar4 + 400),local_18,local_20,param_18,uVar8,param_7,param_14
                       ,param_15,param_16,param_17,param_13,local_10,local_c,0,0,(char)param_1,
                       (byte)*(undefined4 *)(uVar4 + 0x11ac),-(uint)(iVar5 != 0) & 0x14,(int *)0x0,0
                       ,0,0);
  if (iVar5 != 0) {
    return 0x10;
  }
  *param_10 = '\0';
  if (bVar2) {
    *param_9 = 0;
    param_9[1] = 0;
    param_9[2] = 0;
    param_9[3] = 0;
    goto LAB_1000a33e;
  }
  if (*param_19 != '\0') {
    *param_10 = '\x01';
    goto LAB_1000a33e;
  }
  if (*param_9 != 0) goto LAB_1000a33e;
  iVar5 = (**(code **)(param_6 + 0xc))(param_6,param_9);
  if (iVar5 != 0x10) {
    *param_9 = 0;
    param_9[1] = 0;
    param_9[2] = 0;
    param_9[3] = 0;
    goto LAB_1000a33e;
  }
  if ((*(char *)(uVar4 + 0x11e9) == '\0') && (*(char *)(uVar4 + 0x11ea) == '\0')) {
LAB_1000a2c7:
    uVar8 = param_9[2];
    param_9[2] = uVar8 + param_4;
    param_9[3] = param_9[3] + param_5 + (uint)CARRY4(uVar8,param_4);
  }
  else {
    if (((int)param_9[3] <= *(int *)(uVar4 + 0x11f4)) &&
       (((int)param_9[3] < *(int *)(uVar4 + 0x11f4) || (param_9[2] < *(uint *)(uVar4 + 0x11f0)))))
    goto LAB_1000a2c7;
    *param_19 = '\x01';
  }
  iVar5 = *(int *)(uVar4 + 0x2eac) + 1;
  *(int *)(uVar4 + 0x2eac) = iVar5;
  if (0x13 < iVar5) {
    *(undefined4 *)(uVar4 + 0x2eac) = 0;
  }
  *(undefined4 *)(uVar4 + 0x2eb0) = *(undefined4 *)(uVar4 + 0x2eac);
  *param_10 = '\x01';
  *param_11 = *param_11 + 1;
LAB_1000a33e:
  if (*(char *)(uVar4 + 0x11eb) != '\0') {
    uVar8 = *(uint *)(uVar4 + 0x1190);
    uVar6 = (**(code **)(*(int *)(uVar4 + 0x11f8) + 0xc))
                      (*(int *)(uVar4 + 0x11f8),(byte *)(uVar4 + 400));
    if (uVar6 != uVar8) {
      FUN_100050f0(uVar4,(byte *)s_Unable_to_write_to_program_file___10017918);
      return 0x10;
    }
    uVar6 = *(uint *)(uVar4 + 0x80);
    *(uint *)(uVar4 + 0x80) = uVar6 + uVar8;
    *(uint *)(uVar4 + 0x84) = *(int *)(uVar4 + 0x84) + (uint)CARRY4(uVar6,uVar8);
  }
  return 0;
}


