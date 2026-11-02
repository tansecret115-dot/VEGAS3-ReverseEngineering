/* Module: rnco3260.dll
   Function: FUN_6375d750
   Address: 6375d750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6375d750(int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,int param_7,
            int param_8,int param_9,uint param_10,int param_11,int param_12,uint param_13,
            int param_14,int param_15,int param_16,int param_17)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((((((param_2 & 3) == 0) && ((param_5 & 3) == 0)) && ((param_10 & 3) == 0)) &&
        (((param_13 & 3) == 0 && (0 < param_3)))) &&
       (((0 < param_4 && ((0 < param_11 && (0 < param_12)))) && (-1 < param_6)))) &&
      ((((-1 < param_7 && (0 < param_8)) && (0 < param_9)) &&
       (((-1 < param_14 && (-1 < param_15)) &&
        ((0 < param_16 && ((0 < param_17 && (param_6 + param_8 <= param_3)))))))))) &&
     ((param_9 + param_7 <= param_4 &&
      ((param_14 + param_16 <= param_11 && (param_17 + param_15 <= param_12)))))) {
    iVar1 = 1;
    if (param_8 != param_16) {
      if (param_8 < param_16) {
        iVar1 = 0;
      }
      else {
        iVar1 = 2;
        if ((param_16 * 2 <= param_8) && (iVar1 = 3, param_16 * 2 < param_8)) {
          iVar1 = 4;
        }
      }
    }
    iVar3 = 1;
    if (param_9 != param_17) {
      if (param_9 < param_17) {
        iVar3 = 0;
      }
      else {
        iVar3 = 2;
        if ((param_17 * 2 <= param_9) && (iVar3 = 3, param_17 * 2 < param_9)) {
          iVar3 = 4;
        }
      }
    }
    iVar1 = iVar1 + (param_1 + DAT_637944e0 * 6) * 5;
    if ((int)param_5 < 0) {
      param_2 = param_2 - (param_4 + -1) * param_5;
    }
    if (0 < (int)param_13) {
      iVar2 = param_14 / 2 + param_10 + (param_15 / 2 + param_12) * param_13;
      (*(code *)(&PTR_FUN_63767210)[iVar3])
                (*(int *)(&DAT_63767228 + param_1 * 4) * param_6 + param_2 + param_7 * param_5,
                 param_6,param_7,param_8,param_9,param_5,*(int *)(&DAT_63767228 + param_1 * 4),
                 param_15 * param_13 + param_14 + param_10,iVar2,
                 ((int)(param_13 * param_12 + ((int)(param_13 * param_12) >> 0x1f & 3U)) >> 2) +
                 iVar2,param_14,param_15,param_16,param_17,param_13,(&PTR_FUN_63767030)[iVar1],
                 (&PTR_FUN_63767120)[iVar1]);
      return 0;
    }
  }
  return 0xffffffff;
}


