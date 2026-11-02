/* Module: mpgvout.004
   Function: FUN_100255b4
   Address: 100255b4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_100255b4(int param_1,int *param_2,int param_3,uint param_4,uint param_5,undefined8 *param_6,
            int param_7,uint param_8,uint param_9,uint param_10,undefined4 param_11,uint param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char local_10;
  
  uVar3 = param_8;
  if (param_4 <= param_8) {
    uVar3 = param_4;
  }
  uVar6 = param_9;
  if (param_5 <= param_9) {
    uVar6 = param_5;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (DAT_1003c848 == 0) {
    DAT_10040600 = &DAT_10040628;
    puVar7 = &DAT_1003b048;
    puVar8 = &DAT_10040628;
    for (iVar5 = 0x600; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    DAT_1003c848 = 1;
  }
  local_10 = (char)uVar1;
  if (param_10 == 0x33524742) {
    uVar2 = param_12 & 3;
    if (uVar2 == 2) {
      return 1;
    }
    if (uVar2 < 3) {
      return 1;
    }
    if (uVar2 != 3) {
      return 1;
    }
    if ((uVar1 & 0x200) != 0) {
      if (*(int *)(param_1 + 0x58c) != 0) {
        FUN_10032484(param_6,param_7,param_3,param_2,uVar3,uVar6);
        return 0;
      }
      FUN_1002fcac(param_6,param_7,param_3,param_2,uVar3,uVar6);
      return 0;
    }
    if (-1 < local_10) {
      if (*(int *)(param_1 + 0x58c) != 0) {
        FUN_100319c8(param_6,param_7,param_3,param_2,uVar3,uVar6);
        return 0;
      }
      FUN_1002a194(param_6,param_7,param_3,param_2,uVar3,uVar6);
      return 0;
    }
    if (*(int *)(param_1 + 0x58c) != 0) {
      FUN_10031f18(param_6,param_7,param_3,param_2,uVar3,uVar6);
      return 0;
    }
    FUN_1002cf0c(param_6,param_7,param_3,param_2,uVar3,uVar6);
    return 0;
  }
  if (param_10 < 0x33524743) {
    if (param_10 == 0x32315659) {
      uVar3 = param_12 & 3;
      if (uVar3 == 2) {
        return 1;
      }
      if (uVar3 < 3) {
        return 1;
      }
      if (uVar3 != 3) {
        return 1;
      }
      if (*(int *)(param_1 + 0x61c) == 1) {
        *param_2 = (int)param_6;
        puVar4 = (undefined8 *)(param_7 * param_9 + (int)param_6);
        param_2[2] = (int)puVar4;
        param_2[1] = (int)((int)puVar4 + (param_7 >> 1) * (param_9 >> 1));
        return 0;
      }
      FUN_100260f8(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      return 0;
    }
    if (param_10 < 0x3231565a) {
      if (param_10 != 0x30323449) {
        return 1;
      }
      uVar3 = param_12 & 3;
      if (uVar3 == 2) {
        return 1;
      }
      if (uVar3 < 3) {
        return 1;
      }
      if (uVar3 != 3) {
        return 1;
      }
      if (*(int *)(param_1 + 0x61c) == 1) {
        *param_2 = (int)param_6;
        puVar4 = (undefined8 *)(param_7 * param_9 + (int)param_6);
        param_2[1] = (int)puVar4;
        param_2[2] = (int)((int)puVar4 + (param_7 >> 1) * (param_9 >> 1));
        return 0;
      }
      FUN_10025d28(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      return 0;
    }
    if (param_10 != 0x32595559) {
      return 1;
    }
LAB_10025aa0:
    uVar2 = param_12 & 3;
    if (((uVar2 != 2) && (2 < uVar2)) && (uVar2 == 3)) {
      if ((uVar1 & 0x200) == 0) {
        if (local_10 < '\0') {
          if (*(int *)(param_1 + 0x58c) == 0) {
            FUN_1002e114((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
          }
          else {
            FUN_100320e0((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
          }
        }
        else if (*(int *)(param_1 + 0x58c) == 0) {
          FUN_1002b390((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
        }
        else {
          FUN_10031b8c((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
        }
      }
      else if (*(int *)(param_1 + 0x58c) == 0) {
        FUN_10030eb4((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
      }
      else {
        FUN_1003264c((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
      }
      return 0;
    }
  }
  else {
    if (param_10 != 0x41524742) {
      if (0x41524742 < param_10) {
        if (param_10 != 0x56595559) {
          if (param_10 != 0x59565955) {
            return 1;
          }
          uVar2 = param_12 & 3;
          if (uVar2 == 2) {
            return 1;
          }
          if (uVar2 < 3) {
            return 1;
          }
          if (uVar2 != 3) {
            return 1;
          }
          if ((uVar1 & 0x200) != 0) {
            if (*(int *)(param_1 + 0x58c) != 0) {
              FUN_1003273c((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
              return 0;
            }
            FUN_1003135c((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
            return 0;
          }
          if (-1 < local_10) {
            if (*(int *)(param_1 + 0x58c) != 0) {
              FUN_10031c70((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
              return 0;
            }
            FUN_1002b828((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
            return 0;
          }
          if (*(int *)(param_1 + 0x58c) != 0) {
            FUN_100321d0((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
            return 0;
          }
          FUN_1002e5bc((undefined1 *)param_6,param_7,param_3,param_2,uVar3,uVar6);
          return 0;
        }
        goto LAB_10025aa0;
      }
      if (param_10 != 0x34524742) {
        return 1;
      }
    }
    uVar2 = param_12 & 3;
    if (((uVar2 != 2) && (2 < uVar2)) && (uVar2 == 3)) {
      if ((uVar1 & 0x200) != 0) {
        if (*(int *)(param_1 + 0x58c) != 0) {
          FUN_100322bc(param_6,param_7,param_3,param_2,uVar3,uVar6);
          return 0;
        }
        FUN_1002ea84(param_6,param_7,param_3,param_2,uVar3,uVar6);
        return 0;
      }
      if (-1 < local_10) {
        if (*(int *)(param_1 + 0x58c) != 0) {
          FUN_10031804(param_6,param_7,param_3,param_2,uVar3,uVar6);
          return 0;
        }
        FUN_10028f74(param_6,param_7,param_3,param_2,uVar3,uVar6);
        return 0;
      }
      if (*(int *)(param_1 + 0x58c) != 0) {
        FUN_10031d50(param_6,param_7,param_3,param_2,uVar3,uVar6);
        return 0;
      }
      FUN_1002bce4(param_6,param_7,param_3,param_2,uVar3,uVar6);
      return 0;
    }
  }
  return 1;
}


