/* Module: erv33260.dll
   Function: FUN_67082b40
   Address: 67082b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67082b40(void *this,char *param_1,int *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_2;
  if (param_4 != 4) {
    *param_3 = *param_1 / '\x02';
    param_3[1] = param_1[1] / '\x02';
    pcVar1 = param_1 + *(int *)((int)this + 0x1ac) * 2;
    param_3[2] = *pcVar1 / '\x02';
    param_3[3] = pcVar1[1] / '\x02';
    iVar4 = *(int *)((int)this + 0x1b0);
    param_3[4] = pcVar1[iVar4 * 2] / '\x02';
    param_3[5] = pcVar1[iVar4 * 2 + 1] / '\x02';
    iVar5 = *(int *)((int)this + 0x1b4);
    param_3[6] = pcVar1[iVar5 * 2 + iVar4 * 2] / '\x02';
    param_3[7] = pcVar1[iVar5 * 2 + iVar4 * 2 + 1] / '\x02';
    return;
  }
  param_2 = (int *)((int)this + 0x1ac);
  param_4 = 0x10;
  do {
    iVar4 = (int)*param_1 / 2 +
            (int)param_1[piVar2[0x13] * 2 + 2] / 2 + (int)param_1[piVar2[0x13] * 2] / 2 +
            (int)param_1[2] / 2;
    cVar3 = (char)((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
    *param_3 = cVar3;
    if (cVar3 != '\0') {
      iVar4 = ((uint)piVar2[0x1d] >> 1) + (param_4 & 1) * 4;
      iVar5 = (-8 - iVar4) * 3;
      if (iVar5 < cVar3) {
        iVar5 = (int)cVar3;
      }
      cVar3 = (char)iVar5;
      *param_3 = cVar3;
      iVar4 = ((piVar2[0x11] * 8 - iVar4) + 7) * 3;
      if (cVar3 < iVar4) {
        iVar4 = (int)cVar3;
      }
      *param_3 = (char)iVar4;
    }
    iVar4 = (int)param_1[piVar2[0x13] * 2 + 3] / 2 +
            (int)param_1[1] / 2 + (int)param_1[3] / 2 + (int)param_1[piVar2[0x13] * 2 + 1] / 2;
    cVar3 = (char)((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
    param_3[1] = cVar3;
    if (cVar3 != '\0') {
      iVar4 = ((uint)piVar2[0x1e] >> 1) + (param_4 & 2) * 2;
      iVar5 = (-8 - iVar4) * 3;
      if (iVar5 < cVar3) {
        iVar5 = (int)cVar3;
      }
      cVar3 = (char)iVar5;
      param_3[1] = cVar3;
      iVar4 = ((piVar2[0x12] * 8 - iVar4) + 7) * 3;
      if (cVar3 < iVar4) {
        iVar4 = (int)cVar3;
      }
      param_3[1] = (char)iVar4;
    }
    param_3 = param_3 + 2;
    iVar4 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + iVar4 * 2;
    param_4 = param_4 + 1;
  } while (param_4 < 0x14);
  return;
}


