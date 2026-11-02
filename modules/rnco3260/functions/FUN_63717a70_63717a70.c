/* Module: rnco3260.dll
   Function: FUN_63717a70
   Address: 63717a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_63717a70(int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,uint param_11,int param_12,int param_13,
            uint param_14,int param_15,int param_16,int param_17,int param_18)

{
  int iVar1;
  int iVar2;
  
  if ((((((((param_2 & 3) == 0) && ((param_5 & 3) == 0)) && ((param_11 & 3) == 0)) &&
        (((param_14 & 3) == 0 && (0 < param_3)))) &&
       (((0 < param_4 && ((0 < param_12 && (0 < param_13)))) && (-1 < param_6)))) &&
      ((((-1 < param_7 && (0 < param_8)) && (0 < param_9)) &&
       (((-1 < param_15 && (-1 < param_16)) &&
        ((0 < param_17 && ((0 < param_18 && (param_6 + param_8 <= param_3)))))))))) &&
     ((param_9 + param_7 <= param_4 &&
      ((param_15 + param_17 <= param_12 && (param_18 + param_16 <= param_13)))))) {
    iVar2 = 1;
    param_12 = 1;
    if (param_8 != param_17) {
      if (param_8 < param_17) {
        param_12 = 0;
      }
      else {
        param_12 = 2;
        if ((param_17 * 2 <= param_8) && (param_12 = 3, param_17 * 2 < param_8)) {
          param_12 = 4;
        }
      }
    }
    if (param_9 != param_18) {
      if (param_9 < param_18) {
        iVar2 = 0;
      }
      else {
        iVar2 = 2;
        if ((param_18 * 2 <= param_9) && (iVar2 = 3, param_18 * 2 < param_9)) {
          iVar2 = 4;
        }
      }
    }
    iVar1 = param_12 + (param_10 + param_1 * 6) * 5;
    if ((int)param_5 < 0) {
      param_2 = param_2 - (param_4 + -1) * param_5;
    }
    if ((int)param_14 < 0) {
      param_11 = param_11 - (param_13 + -1) * param_14;
    }
    (*(code *)(&PTR_FUN_63767000)[iVar2])
              (param_7 * param_5 + param_2 + *(int *)(&DAT_63767018 + param_1 * 4) * param_6,param_8
               ,param_9,param_5,*(int *)(&DAT_63767018 + param_1 * 4),
               param_16 * param_14 + param_11 + *(int *)(&DAT_63767018 + param_10 * 4) * param_15,
               param_17,param_18,param_14,*(int *)(&DAT_63767018 + param_10 * 4),
               (&PTR_FUN_63766a60)[iVar1],(&PTR_FUN_63766d30)[iVar1]);
    return 0;
  }
  return 0xffffffff;
}


