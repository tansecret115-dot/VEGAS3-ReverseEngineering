/* Module: vegas30k.dll
   Function: FUN_01062600
   Address: 01062600
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01062600(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  
  if (param_5 == 1) {
    iVar8 = (int)*param_3;
    iVar5 = (int)param_3[1];
    if (1 < param_4) {
      param_4 = param_4 + -1;
      do {
        iVar2 = (int)param_3[2];
        if (iVar2 <= iVar8) {
          iVar8 = iVar2;
        }
        if (iVar5 <= param_3[3]) {
          iVar5 = (int)param_3[3];
        }
        param_4 = param_4 + -1;
        param_3 = param_3 + 2;
      } while (param_4 != 0);
    }
    *(char *)(param_2 + param_1 * 2) = (char)((uint)iVar8 >> 8);
    *(char *)(param_2 + 1 + param_1 * 2) = (char)((uint)iVar5 >> 8);
    return param_1 + 1;
  }
  if (param_5 != 2) {
    if (0 < param_5) {
      puVar7 = (undefined1 *)(param_2 + param_1 * 2);
      psVar6 = param_3 + param_5 * 2;
      param_2 = param_5;
      psVar1 = param_3;
      do {
        iVar5 = (int)psVar6[param_5 * -2 + 1];
        iVar8 = (int)*psVar1;
        if (1 < param_4) {
          param_3 = (short *)(param_4 + -1);
          psVar4 = psVar6;
          do {
            if (*psVar4 <= iVar8) {
              iVar8 = (int)*psVar4;
            }
            if (iVar5 <= psVar4[1]) {
              iVar5 = (int)psVar4[1];
            }
            psVar4 = psVar4 + param_5 * 2;
            param_3 = (short *)((int)param_3 + -1);
          } while (param_3 != (short *)0x0);
        }
        *puVar7 = (char)((uint)iVar8 >> 8);
        puVar7[1] = (char)((uint)iVar5 >> 8);
        psVar1 = psVar1 + 2;
        psVar6 = psVar6 + 2;
        param_2 = param_2 + -1;
        puVar7 = puVar7 + 2;
      } while (param_2 != 0);
    }
    return param_1 + param_5;
  }
  iVar5 = (int)*param_3;
  iVar8 = (int)param_3[1];
  iVar9 = (int)param_3[2];
  iVar2 = (int)param_3[3];
  if (1 < param_4) {
    param_4 = param_4 + -1;
    do {
      iVar3 = (int)param_3[4];
      if (iVar3 <= iVar5) {
        iVar5 = iVar3;
      }
      if (iVar8 <= param_3[5]) {
        iVar8 = (int)param_3[5];
      }
      if (param_3[6] <= iVar9) {
        iVar9 = (int)param_3[6];
      }
      if (iVar2 <= param_3[7]) {
        iVar2 = (int)param_3[7];
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 4;
    } while (param_4 != 0);
  }
  *(char *)(param_2 + param_1 * 2) = (char)((uint)iVar5 >> 8);
  *(char *)(param_2 + 1 + param_1 * 2) = (char)((uint)iVar8 >> 8);
  *(char *)(param_2 + 2 + param_1 * 2) = (char)((uint)iVar9 >> 8);
  *(char *)(param_2 + 3 + param_1 * 2) = (char)((uint)iVar2 >> 8);
  return param_1 + 2;
}


