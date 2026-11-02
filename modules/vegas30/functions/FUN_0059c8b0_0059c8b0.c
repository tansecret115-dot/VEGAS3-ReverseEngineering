/* Module: vegas30.exe
   Function: FUN_0059c8b0
   Address: 0059c8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0059ca39) */

int FUN_0059c8b0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,uint param_6,
                int param_7,uint param_8,int param_9,int param_10,float param_11,undefined4 param_12
                ,int param_13,int param_14,undefined4 param_15)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int local_8c;
  uint local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  float local_58;
  float local_54;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_10 [16];
  
  param_2 = (uint)*(ushort *)(param_1 + 0xc) * param_4 + param_2;
  uVar4 = param_6 - param_8;
  iVar3 = (param_7 - param_9) - (uint)(param_6 < param_8);
  if ((param_7 < *(int *)(param_5 + 0x1c)) ||
     ((param_7 <= *(int *)(param_5 + 0x1c) && (param_6 < *(uint *)(param_5 + 0x18))))) {
    return param_10;
  }
  iVar6 = param_6 - *(int *)(param_5 + 0x18);
  iVar5 = *(int *)(param_5 + 0x100);
  iVar7 = *(int *)(param_5 + 0x2c) - iVar6;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)*(ushort *)(param_1 + 0xc) * iVar6 + iVar5;
  }
  if (param_10 < iVar7) {
    iVar7 = param_10;
  }
  if (iVar5 == 0) {
    if (param_14 != 0) {
      return iVar7;
    }
    _SfAudio_FillSilence_12(param_1,param_2,iVar7);
    return iVar7;
  }
  local_70 = param_12;
  local_6c = 0;
  local_68 = 0;
  local_74 = 0x3f800000;
  local_64 = 0;
  FUN_0059dc60(&local_74,local_10,param_15,0);
  FUN_0059aef0(param_3,iVar6,iVar7,local_10,0);
  uVar1 = (*(uint **)(param_13 + 0x30))[2];
  uVar2 = **(uint **)(param_13 + 0x30);
  local_8c = 0;
  if (1 < uVar2) {
    local_80 = 1;
    do {
      lVar8 = ftol();
      if (CONCAT44(iVar3,uVar4) < lVar8) {
        if (local_8c != -1) {
          iVar5 = local_8c * 0x10 + uVar1;
          local_60[0] = *(undefined4 *)(local_8c * 0x10 + 0xc + uVar1);
          local_58 = param_11 * *(float *)(iVar5 + 8);
          local_54 = param_11 * *(float *)(iVar5 + 0x18);
          uVar9 = ftol();
          iVar5 = uVar4 - (uint)uVar9;
          local_44 = (iVar3 - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(uVar4 < (uint)uVar9);
          local_48 = iVar5;
          iVar3 = ftol();
          local_40 = ftol();
          local_40 = iVar3 - local_40;
          iVar5 = local_40 - iVar5;
          local_30 = 0;
          local_2c = 0x3ff00000;
          local_28 = 0;
          local_24 = 0;
          if (iVar5 <= iVar7) {
            iVar7 = iVar5;
          }
          FUN_00599db0(local_60,param_3,param_2,iVar7,param_14);
          return iVar7;
        }
        break;
      }
      local_8c = local_8c + 1;
      local_80 = local_80 + 1;
    } while (local_80 < uVar2);
  }
  FUN_0059bd70(param_2,param_3,iVar7,(double)(param_11 * *(float *)(uVar2 * 0x10 + -8 + uVar1)),
               param_14);
  return iVar7;
}


