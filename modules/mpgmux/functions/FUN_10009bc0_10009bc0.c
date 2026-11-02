/* Module: mpgmux.dll
   Function: FUN_10009bc0
   Address: 10009bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_10009bc0(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                 int param_7,int param_8)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  if (param_8 == 1) {
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  else {
    if (param_8 != 2) {
      if (param_8 != 3) {
        return '\0';
      }
      if (*(int *)(param_1 + 0x44) != 0) {
        return '\0';
      }
      cVar2 = (1 < *(int *)(param_1 + 0x2c)) + '\x01';
      iVar3 = param_5;
      uVar4 = param_4;
      goto LAB_10009c56;
    }
    if (*(int *)(param_1 + 0x44) == 2) {
      return '\0';
    }
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  cVar2 = (1 < iVar3) + '\x02';
  iVar3 = param_7;
  uVar4 = param_6;
LAB_10009c56:
  uVar5 = param_2 - uVar4;
  uVar4 = (param_3 - iVar3) - (uint)(param_2 < uVar4);
  if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (uVar5 != 0)))) {
    dVar1 = (double)CONCAT44(uVar4,uVar5) * _DAT_10015198;
    if (param_8 == 3) {
      FUN_1000d1ca(dVar1);
      FUN_1000d1ca((double)CONCAT44(param_5,param_4) * _DAT_10015198);
      pcVar6 = s_video_PTS____02fms__underflow_at_100179c0;
    }
    else {
      FUN_1000d1ca(dVar1);
      FUN_1000d1ca((double)CONCAT44(param_7,param_6) * _DAT_10015198);
      pcVar6 = s_video_DTS____02fms__underflow_at_10017988;
    }
    FUN_10005130(param_1,(byte *)pcVar6);
    *(int *)(param_1 + 0x11c8) = *(int *)(param_1 + 0x11c8) + 1;
  }
  if ((0x7fffffff < uVar4) && (((int)uVar4 < -1 || (uVar5 < 0xfe640340)))) {
    FUN_1000d1ca(((double)CONCAT44(uVar4,uVar5) + _DAT_10015120) * _DAT_10015190);
    FUN_1000d1ca((double)CONCAT44(param_3,param_2) * _DAT_10015198);
    FUN_1000d1ca((double)CONCAT44(param_7,param_6) * _DAT_10015198);
    FUN_10005130(param_1,(byte *)s_video_DTS____02fms__>_1_second_f_1001793c);
  }
  return cVar2;
}


