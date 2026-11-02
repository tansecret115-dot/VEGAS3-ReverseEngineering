/* Module: mp3plug.dll
   Function: FUN_5f6fd5e0
   Address: 5f6fd5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f6fd5e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            int param_5,uint param_6,int param_7,int *param_8,int *param_9)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  *param_9 = param_5;
  if (param_5 == 2) {
    iVar5 = 3;
  }
  else {
    iVar5 = 1;
  }
  param_9[1] = iVar5;
  if (param_5 == 2) {
    param_9[2] = param_6 * 3;
    iVar5 = 0;
    param_9[3] = param_7 * 3;
    if (0 < (int)param_6) {
      iVar7 = 0;
      piVar6 = param_8;
      do {
        iVar4 = (int)param_9 + iVar7 + 0xc;
        iVar3 = piVar6[1] - *piVar6;
        iVar1 = (int)param_9 + iVar7;
        iVar8 = (iVar4 - iVar1 & 0xfffffff8U) + iVar1;
        for (; iVar1 < iVar8; iVar1 = iVar1 + 8) {
          *(int *)(iVar1 + 0x10) = iVar5;
          *(int *)(iVar1 + 0x14) = iVar5 + iVar3;
          iVar5 = iVar5 + iVar3 + iVar3;
        }
        for (; iVar1 < iVar4; iVar1 = iVar1 + 4) {
          *(int *)(iVar1 + 0x10) = iVar5;
          iVar5 = iVar5 + iVar3;
        }
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + 0xc;
      } while ((int)piVar6 < (int)(param_8 + param_6));
    }
    param_9[param_6 * 3 + 4] = iVar5;
    if (0 < (int)param_6) {
      piVar6 = param_8 + param_6;
      iVar5 = 0;
      do {
        iVar7 = param_8[1];
        iVar1 = 0;
        do {
          iVar4 = *param_8;
          if (iVar4 < iVar7) {
            piVar2 = (int *)((int)param_1 + iVar1 + iVar4 * 4);
            do {
              iVar4 = iVar4 + 1;
              param_9[iVar5 + 0xa1] = *piVar2;
              iVar7 = param_8[1];
              iVar5 = iVar5 + 1;
              piVar2 = piVar2 + 1;
            } while (iVar4 < iVar7);
          }
          iVar1 = iVar1 + 0x300;
        } while (iVar1 < 0x900);
        param_8 = param_8 + 1;
      } while ((int)param_8 < (int)piVar6);
    }
    iVar5 = 0;
    iVar7 = 0;
    if (0 < (int)param_6) {
      do {
        param_9[iVar7 + 0x2c] = param_3[iVar5];
        param_9[iVar7 + 0x53] = param_4[iVar5];
        param_9[iVar7 + 0x7a] = param_2[iVar5];
        param_9[iVar7 + 0x2d] = param_3[iVar5 + 0xd];
        param_9[iVar7 + 0x54] = param_4[iVar5 + 0xd];
        param_9[iVar7 + 0x7b] = param_2[iVar5 + 0xd];
        param_9[iVar7 + 0x2e] = param_3[iVar5 + 0x1a];
        param_9[iVar7 + 0x55] = param_4[iVar5 + 0x1a];
        param_9[iVar7 + 0x7c] = param_2[iVar5 + 0x1a];
        iVar7 = iVar7 + 3;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_6);
    }
  }
  else {
    param_9[3] = param_7;
    param_9[2] = param_6;
    FUN_5f6d5090(param_1,param_9 + 0xa1,0x240);
    FUN_5f6d5b90(param_8,param_9 + 4,param_6 + 1);
    FUN_5f6d5090(param_3,param_9 + 0x2c,param_6);
    FUN_5f6d5090(param_4,param_9 + 0x53,param_6);
    FUN_5f6d5090(param_2,param_9 + 0x7a,param_6);
  }
  return;
}


