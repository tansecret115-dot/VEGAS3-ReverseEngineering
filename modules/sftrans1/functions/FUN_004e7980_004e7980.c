/* Module: sftrans1.dll
   Function: FUN_004e7980
   Address: 004e7980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004e7980(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2[0x25] != 0) {
    return 0;
  }
  if (param_3 == 2) {
    iVar5 = *param_1;
    if (iVar5 < param_2[1]) {
      if (param_2[0x1c] == 0) {
        param_2[0x1a] = param_2[0x1e];
        param_2[0x1b] = param_2[0x1f];
        param_3 = param_1[4] - *param_1;
        if (param_3 < 2) {
          param_3 = 1;
        }
        param_2[0x23] = (int)(((longlong)(param_1[0xb] - param_1[10]) * 0x4000) / (longlong)param_3)
        ;
        iVar2 = param_1[0xd];
        iVar3 = param_1[0xc];
        param_2[0x1c] = 1;
        param_2[0x24] = (int)(((longlong)(iVar2 - iVar3) * 0x4000) / (longlong)param_3);
      }
      if ((iVar5 < *param_2) || (param_2[1] <= iVar5)) {
        param_2[0x1a] = param_2[0x1a] + param_2[0x23];
        param_2[0x1b] = param_2[0x1b] + param_2[0x24];
      }
      else {
        iVar5 = param_2[1] - iVar5;
        lVar4 = (longlong)param_2[0x23] * (longlong)iVar5;
        param_2[0x1a] =
             param_2[0x1a] + ((uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12);
        lVar4 = (longlong)param_2[0x24] * (longlong)iVar5;
        param_2[0x1b] =
             param_2[0x1b] + ((uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12);
      }
    }
    else {
      param_2[0x1a] = param_2[0x1a] + param_2[0x23];
      param_2[0x1b] = param_2[0x1b] + param_2[0x24];
    }
    goto LAB_004e7b58;
  }
  iVar5 = *param_1;
  if (iVar5 < param_2[1]) {
    if (param_2[0x1c] == 0) {
      param_2[0x1c] = 1;
      param_2[0x1d] = param_2[0x21];
      param_2[0x1a] = param_2[0x1e];
      param_2[0x1b] = param_2[0x1f];
    }
    if (iVar5 < *param_2) goto LAB_004e7b34;
    fVar1 = (float)(param_2[1] - iVar5) * _DAT_00561084;
    param_2[0x1d] = (int)(fVar1 * (float)param_2[0x22] + (float)param_2[0x1d]);
    param_2[0x1a] = (int)(fVar1 * (float)param_2[0x23] + (float)param_2[0x1a]);
    fVar1 = fVar1 * (float)param_2[0x24];
  }
  else {
LAB_004e7b34:
    param_2[0x1d] = (int)((float)param_2[0x22] + (float)param_2[0x1d]);
    param_2[0x1a] = (int)((float)param_2[0x23] + (float)param_2[0x1a]);
    fVar1 = (float)param_2[0x24];
  }
  param_2[0x1b] = (int)(fVar1 + (float)param_2[0x1b]);
LAB_004e7b58:
  *param_2 = param_2[1];
  iVar5 = param_2[1] + 0x4000;
  param_2[1] = iVar5;
  if ((param_2[3] < *param_2) && (iVar5 < param_2[4])) {
    if (((param_1[1] & 0x3fffU) == 0) && (param_1[3] - param_1[1] == 0x4000)) {
      param_2[0x17] = -1;
    }
    else {
      iVar5 = param_2[6];
      param_2[7] = 0;
      iVar2 = param_1[1];
      param_2[0xf] = 0;
      param_2[8] = (iVar2 - iVar5) + 0x4000;
      iVar2 = param_1[3];
      param_2[9] = 0x4000;
      param_2[0x10] = (iVar2 - iVar5) + 0x4000;
      iVar2 = param_1[1];
      param_2[0x11] = 0x4000;
      param_2[10] = (iVar2 - iVar5) + 0x4000;
      iVar2 = param_1[3];
      param_2[0x17] = 2;
      param_2[0x12] = (iVar2 - iVar5) + 0x4000;
    }
  }
  else {
    FUN_004e7250(param_2);
  }
  if (param_2[5] <= *param_2) {
    param_2[0x25] = 1;
  }
  return 1;
}


