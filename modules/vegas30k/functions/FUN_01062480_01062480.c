/* Module: vegas30k.dll
   Function: FUN_01062480
   Address: 01062480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01062480(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  short sVar9;
  
  if (param_5 == 1) {
    sVar8 = *param_3;
    sVar4 = param_3[1];
    if (1 < param_4) {
      param_4 = param_4 + -1;
      do {
        sVar9 = param_3[2];
        if (sVar9 <= sVar8) {
          sVar8 = sVar9;
        }
        if (sVar4 <= param_3[3]) {
          sVar4 = param_3[3];
        }
        param_4 = param_4 + -1;
        param_3 = param_3 + 2;
      } while (param_4 != 0);
    }
    *(short *)(param_2 + param_1 * 4) = sVar8;
    *(short *)(param_2 + 2 + param_1 * 4) = sVar4;
    return param_1 + 1;
  }
  if (param_5 != 2) {
    if (0 < param_5) {
      psVar7 = (short *)(param_2 + param_1 * 4);
      psVar6 = param_3 + param_5 * 2;
      param_2 = param_5;
      psVar2 = param_3;
      do {
        sVar8 = psVar6[param_5 * -2 + 1];
        sVar4 = *psVar2;
        if (1 < param_4) {
          param_3 = (short *)(param_4 + -1);
          psVar3 = psVar6;
          do {
            if (*psVar3 <= sVar4) {
              sVar4 = *psVar3;
            }
            if (sVar8 <= psVar3[1]) {
              sVar8 = psVar3[1];
            }
            psVar3 = psVar3 + param_5 * 2;
            param_3 = (short *)((int)param_3 + -1);
          } while (param_3 != (short *)0x0);
        }
        *psVar7 = sVar4;
        psVar7[1] = sVar8;
        psVar2 = psVar2 + 2;
        psVar6 = psVar6 + 2;
        psVar7 = psVar7 + 2;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    return param_1 + param_5;
  }
  sVar8 = *param_3;
  sVar4 = param_3[1];
  sVar9 = param_3[2];
  sVar5 = param_3[3];
  if (1 < param_4) {
    param_4 = param_4 + -1;
    do {
      sVar1 = param_3[4];
      if (sVar1 <= sVar8) {
        sVar8 = sVar1;
      }
      if (sVar4 <= param_3[5]) {
        sVar4 = param_3[5];
      }
      if (param_3[6] <= sVar9) {
        sVar9 = param_3[6];
      }
      if (sVar5 <= param_3[7]) {
        sVar5 = param_3[7];
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 4;
    } while (param_4 != 0);
  }
  *(short *)(param_2 + param_1 * 4) = sVar8;
  *(short *)(param_2 + 2 + param_1 * 4) = sVar4;
  *(short *)(param_2 + 4 + param_1 * 4) = sVar9;
  *(short *)(param_2 + 6 + param_1 * 4) = sVar5;
  return param_1 + 2;
}


