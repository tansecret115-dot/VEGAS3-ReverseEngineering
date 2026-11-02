/* Module: pncrt.dll
   Function: FUN_78016110
   Address: 78016110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_78016110(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_7804053c + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_78040574 + param_4 * 4);
    }
    iVar2 = (int)(((int)(param_3 - 1) >> 2) + -0x63db + param_3 * 0x16d + iVar1 + 1) % 7;
    if (iVar2 < param_6) {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_78040540 + param_4 * 4);
      }
      else {
        iVar2 = (&DAT_78040578)[param_4];
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_7804053c + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_78040574 + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_78040524 = iVar1;
    DAT_78040520 = param_3;
    DAT_78040528 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    return;
  }
  DAT_78040534 = iVar1;
  DAT_78040538 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c + _dstbias) * 1000;
  if (DAT_78040538 < 0) {
    DAT_78040530 = param_3;
    DAT_78040538 = DAT_78040538 + 86399999;
    return;
  }
  if (86399999 < DAT_78040538) {
    DAT_78040538 = DAT_78040538 + -86399999;
  }
  DAT_78040530 = param_3;
  return;
}


