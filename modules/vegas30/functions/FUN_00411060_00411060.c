/* Module: vegas30.exe
   Function: FUN_00411060
   Address: 00411060
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00411060(uint param_1,int param_2,int param_3,int *param_4,uint param_5,int param_6,
                  undefined4 param_7)

{
  HGLOBAL pvVar1;
  int *pMem;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
  iVar3 = DAT_0064762c;
  pvVar1 = GlobalAlloc(0x42,param_6 + 0x80);
  pMem = GlobalLock(pvVar1);
  if (pMem == (int *)0x0) {
    return (int *)0x0;
  }
  *pMem = param_3;
  pMem[1] = iVar3;
  pMem[3] = param_1;
  pMem[6] = param_2;
  pMem[5] = param_5;
  pMem[7] = -0x80000000;
  if ((param_1 & 0x10) == 0) {
    uVar5 = pMem[4] | 0xc;
  }
  else {
    uVar5 = pMem[4] & 0xfffffff7U | 4;
  }
  pMem[4] = uVar5;
  if (param_5 < 0xc) {
    iVar3 = param_5 * 0x40;
    if (*(int *)(&DAT_0064b5c4 + iVar3) == 0) {
      (&DAT_0064b5b4)[param_5 * 0x10] = param_1;
      if (param_4 != (int *)0x0) {
        piVar4 = param_4;
        piVar6 = (int *)(&DAT_0064b5c4 + iVar3);
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar6 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar6 = piVar6 + 1;
        }
      }
    }
    else {
      uVar5 = 3;
      if ((param_1 & 0x20) != 0) {
        uVar5 = 0x13;
      }
      uVar5 = ~uVar5 & param_1 | uVar5 & (&DAT_0064b5b4)[param_5 * 0x10];
      (&DAT_0064b5b4)[param_5 * 0x10] = uVar5;
      pMem[3] = uVar5;
      pMem[0x11] = *(int *)(&DAT_0064b5bc + iVar3);
      pMem[0x12] = *(int *)(&DAT_0064b5c0 + iVar3);
      pMem[4] = (&DAT_0064b5b8)[param_5 * 0x10];
    }
    piVar4 = (int *)(&DAT_0064b5c4 + iVar3);
    piVar6 = param_4;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    if (*param_4 == 0) {
      *param_4 = 0x2c;
      param_4[1] = 0;
      param_4[2] = 1;
      param_4[7] = 0x28;
      param_4[8] = 0x14;
      param_4[9] = 0x1b8;
      param_4[10] = 0x140;
    }
  }
  if (*(code **)(param_3 + 8) != (code *)0x0) {
    iVar3 = (**(code **)(param_3 + 8))(pMem,param_4,param_7);
    if (iVar3 < 0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      return (int *)0x0;
    }
  }
  if ((pMem[3] & 3U) == 0) {
    pMem[3] = pMem[3] | 2;
  }
  if (((byte)pMem[3] & 3) == 1) {
    _SfFixWindowPlacement_4(param_4);
  }
  pMem[0xd] = 0;
  pMem[0xe] = 0;
  pMem[0xf] = 0;
  pMem[0x10] = 0;
  FUN_00411660(pMem + 0xd,(uint)pMem[3] >> 4 & 1,pMem[3] & 7);
  pMem[9] = param_4[7];
  pMem[10] = param_4[8];
  iVar3 = param_4[9];
  iVar2 = param_4[7];
  pMem[0xb] = iVar3 - iVar2;
  pMem[0xc] = param_4[10] - param_4[8];
  if ((*(byte *)(pMem + 3) & 2) == 0) {
    pMem[0x11] = iVar3 - iVar2;
    pMem[0x12] = pMem[0xc];
  }
  pMem[0x1f] = param_6;
  return pMem;
}


