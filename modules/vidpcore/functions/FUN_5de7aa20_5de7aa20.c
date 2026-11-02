/* Module: vidpcore.dll
   Function: FUN_5de7aa20
   Address: 5de7aa20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de7aa20(int param_1,int param_2,int *param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int local_4;
  
  iVar4 = ftol();
  local_4 = param_3[3] - param_3[1];
  iVar10 = param_3[2] - *param_3;
  if (0 < local_4) {
    pbVar9 = (byte *)(param_3[1] * param_2 + param_1 + *param_3 * 4 + 1);
    do {
      param_1 = iVar10;
      if (*param_4 == 1) {
        if (param_4[1] == 1) {
          iVar11 = iVar10;
          pbVar8 = pbVar9;
          if (0 < iVar10) {
            do {
              FUN_5de7a920(param_5);
              iVar5 = ftol();
              uVar7 = (uint)pbVar8[1] + iVar5;
              if ((int)uVar7 < 0) {
                uVar7 = 0;
              }
              else if ((int)(uint)pbVar8[2] < (int)uVar7) {
                uVar7 = (uint)pbVar8[2];
              }
              pbVar8[1] = (byte)uVar7;
              if ((int)((uint)*pbVar8 + iVar5) < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (uint)*pbVar8 + iVar5;
                if ((int)(uint)pbVar8[2] < (int)((uint)*pbVar8 + iVar5)) {
                  uVar7 = (uint)pbVar8[2];
                }
              }
              *pbVar8 = (byte)uVar7;
              if ((int)((uint)pbVar8[-1] + iVar5) < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = iVar5 + (uint)pbVar8[-1];
                if ((int)(uint)pbVar8[2] < (int)(iVar5 + (uint)pbVar8[-1])) {
                  uVar7 = (uint)pbVar8[2];
                }
              }
              pbVar8[-1] = (byte)uVar7;
              iVar11 = iVar11 + -1;
              pbVar8 = pbVar8 + 4;
            } while (iVar11 != 0);
          }
        }
        else {
          pbVar8 = pbVar9;
          if (0 < iVar10) {
            do {
              FUN_5de7a920(param_5);
              iVar11 = ftol();
              FUN_5de7a920(param_5);
              iVar5 = ftol();
              FUN_5de7a920(param_5);
              iVar6 = ftol();
              uVar7 = (uint)pbVar8[1] + iVar11;
              if ((int)uVar7 < 0) {
                uVar7 = 0;
              }
              else if ((int)(uint)pbVar8[2] < (int)uVar7) {
                uVar7 = (uint)pbVar8[2];
              }
              pbVar8[1] = (byte)uVar7;
              if ((int)((uint)*pbVar8 + iVar5) < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (uint)pbVar8[2];
                if ((int)(iVar5 + (uint)*pbVar8) <= (int)(uint)pbVar8[2]) {
                  uVar7 = iVar5 + (uint)*pbVar8;
                }
              }
              *pbVar8 = (byte)uVar7;
              if ((int)((uint)pbVar8[-1] + iVar6) < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = iVar6 + (uint)pbVar8[-1];
                if ((int)(uint)pbVar8[2] < (int)(iVar6 + (uint)pbVar8[-1])) {
                  uVar7 = (uint)pbVar8[2];
                }
              }
              pbVar8[-1] = (byte)uVar7;
              param_1 = param_1 + -1;
              pbVar8 = pbVar8 + 4;
            } while (param_1 != 0);
          }
        }
      }
      else if (*param_4 == 0) {
        if (param_4[1] == 1) {
          iVar11 = iVar10;
          pbVar8 = pbVar9;
          if (0 < iVar10) {
            do {
              uVar7 = *param_5;
              uVar1 = param_5[1];
              uVar2 = param_5[uVar1 + 0x41];
              uVar3 = param_5[uVar7 + 0x41];
              param_5[uVar7 + 0x41] = uVar3 ^ uVar2;
              *param_5 = (uint)*(byte *)((int)param_5 + uVar7 + 8);
              iVar5 = (((uVar3 ^ uVar2) & 0xff) - 0x7f) * iVar4;
              param_5[1] = (uint)*(byte *)((int)param_5 + uVar1 + 8);
              iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
              uVar7 = (uint)pbVar8[1] + iVar5;
              if ((int)uVar7 < 0) {
                uVar7 = 0;
              }
              else if ((int)(uint)pbVar8[2] < (int)uVar7) {
                uVar7 = (uint)pbVar8[2];
              }
              pbVar8[1] = (byte)uVar7;
              if ((int)((uint)*pbVar8 + iVar5) < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (uint)*pbVar8 + iVar5;
                if ((int)(uint)pbVar8[2] < (int)((uint)*pbVar8 + iVar5)) {
                  uVar7 = (uint)pbVar8[2];
                }
              }
              *pbVar8 = (byte)uVar7;
              if ((int)((uint)pbVar8[-1] + iVar5) < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = iVar5 + (uint)pbVar8[-1];
                if ((int)(uint)pbVar8[2] < (int)(iVar5 + (uint)pbVar8[-1])) {
                  uVar7 = (uint)pbVar8[2];
                }
              }
              pbVar8[-1] = (byte)uVar7;
              iVar11 = iVar11 + -1;
              pbVar8 = pbVar8 + 4;
            } while (iVar11 != 0);
          }
        }
        else {
          pbVar8 = pbVar9;
          if (0 < iVar10) {
            do {
              uVar7 = *param_5;
              uVar1 = param_5[1];
              uVar2 = param_5[uVar1 + 0x41];
              uVar3 = param_5[uVar7 + 0x41];
              param_5[uVar7 + 0x41] = uVar3 ^ uVar2;
              *param_5 = (uint)*(byte *)((int)param_5 + uVar7 + 8);
              iVar11 = (((uVar3 ^ uVar2) & 0xff) - 0x7f) * iVar4;
              param_5[1] = (uint)*(byte *)((int)param_5 + uVar1 + 8);
              uVar7 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) + (uint)pbVar8[1];
              if ((int)uVar7 < 0) {
                uVar7 = 0;
              }
              else if ((int)(uint)pbVar8[2] < (int)uVar7) {
                uVar7 = (uint)pbVar8[2];
              }
              pbVar8[1] = (byte)uVar7;
              uVar7 = *param_5;
              uVar1 = param_5[1];
              uVar2 = param_5[uVar7 + 0x41];
              uVar3 = param_5[uVar1 + 0x41];
              param_5[uVar7 + 0x41] = uVar2 ^ uVar3;
              *param_5 = (uint)*(byte *)((int)param_5 + uVar7 + 8);
              iVar11 = (((uVar2 ^ uVar3) & 0xff) - 0x7f) * iVar4;
              param_5[1] = (uint)*(byte *)((int)param_5 + uVar1 + 8);
              iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
              if ((int)((uint)*pbVar8 + iVar11) < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = iVar11 + (uint)*pbVar8;
                if ((int)(uint)pbVar8[2] < (int)uVar7) {
                  uVar7 = (uint)pbVar8[2];
                }
              }
              *pbVar8 = (byte)uVar7;
              uVar7 = *param_5;
              uVar1 = param_5[1];
              uVar2 = param_5[uVar7 + 0x41];
              uVar3 = param_5[uVar1 + 0x41];
              param_5[uVar7 + 0x41] = uVar2 ^ uVar3;
              *param_5 = (uint)*(byte *)(uVar7 + 8 + (int)param_5);
              iVar11 = (((uVar2 ^ uVar3) & 0xff) - 0x7f) * iVar4;
              param_5[1] = (uint)*(byte *)(uVar1 + 8 + (int)param_5);
              iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
              if ((int)((uint)pbVar8[-1] + iVar11) < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = iVar11 + (uint)pbVar8[-1];
                if ((int)(uint)pbVar8[2] < (int)uVar7) {
                  uVar7 = (uint)pbVar8[2];
                }
              }
              pbVar8[-1] = (byte)uVar7;
              param_1 = param_1 + -1;
              pbVar8 = pbVar8 + 4;
            } while (param_1 != 0);
          }
        }
      }
      pbVar9 = pbVar9 + param_2;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return 0;
}


