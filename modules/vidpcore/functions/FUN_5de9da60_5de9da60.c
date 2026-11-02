/* Module: vidpcore.dll
   Function: FUN_5de9da60
   Address: 5de9da60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de9da60(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5,
                int *param_6,int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = FUN_5debbf10(&local_4,&local_c,&local_8,param_1,param_2,param_3,param_4,param_10);
  if (-1 < iVar1) {
    param_10 = param_7;
    if (0 < param_7) {
      param_10 = -param_7;
      param_5 = (undefined4 *)(((param_6[3] - param_6[1]) + -1) * param_7 + (int)param_5);
    }
    iVar1 = param_6[3] - param_6[1];
    param_1 = 0;
    if (0 < iVar1) {
      iVar4 = param_3 * param_9;
      puVar6 = param_5;
      do {
        if ((param_9 + param_1 <= local_c) && (-1 < param_9 + param_1)) {
          puVar2 = puVar6;
          if (param_3 < 1) {
            puVar2 = (undefined4 *)(((iVar1 - param_1) + -1) * param_10 + (int)param_5);
          }
          iVar1 = 0;
          if (param_6[2] != *param_6 && -1 < param_6[2] - *param_6) {
            puVar3 = (undefined4 *)(iVar4 + local_8 + param_8 * 4);
            iVar5 = param_8;
            do {
              if ((iVar5 < local_4) && (-1 < (param_9 - param_8) + iVar5)) {
                *puVar3 = *puVar2;
              }
              iVar1 = iVar1 + 1;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
              iVar5 = iVar5 + 1;
            } while (iVar1 < param_6[2] - *param_6);
          }
        }
        iVar4 = iVar4 + param_3;
        puVar6 = (undefined4 *)((int)puVar6 + param_10);
        param_1 = param_1 + 1;
        iVar1 = param_6[3] - param_6[1];
      } while (param_1 < iVar1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


