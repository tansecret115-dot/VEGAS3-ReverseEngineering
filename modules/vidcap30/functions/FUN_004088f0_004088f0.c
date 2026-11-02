/* Module: vidcap30.exe
   Function: FUN_004088f0
   Address: 004088f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_004088f0(uint param_1,int param_2,int param_3,int *param_4,uint param_5,int param_6,
                  undefined4 param_7)

{
  HGLOBAL pvVar1;
  int *pMem;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  iVar2 = DAT_005ba4c0;
  pvVar1 = GlobalAlloc(0x42,param_6 + 0x80);
  pMem = GlobalLock(pvVar1);
  if (pMem == (int *)0x0) {
    return (int *)0x0;
  }
  *pMem = param_3;
  pMem[6] = param_2;
  pMem[1] = iVar2;
  pMem[3] = param_1;
  pMem[5] = param_5;
  pMem[7] = -0x80000000;
  if ((param_1 & 0x10) == 0) {
    uVar4 = pMem[4] | 0xc;
  }
  else {
    uVar4 = pMem[4] & 0xfffffff7U | 4;
  }
  pMem[4] = uVar4;
  if (param_5 < 7) {
    iVar2 = param_5 * 0x40;
    if (*(int *)(&DAT_005bbb44 + iVar2) == 0) {
      (&DAT_005bbb34)[param_5 * 0x10] = param_1;
      if (param_4 != (int *)0x0) {
        piVar5 = param_4;
        piVar6 = (int *)(&DAT_005bbb44 + iVar2);
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
      }
    }
    else {
      uVar4 = 3;
      if ((param_1 & 0x20) != 0) {
        uVar4 = 0x13;
      }
      uVar4 = ~uVar4 & param_1 | uVar4 & (&DAT_005bbb34)[param_5 * 0x10];
      (&DAT_005bbb34)[param_5 * 0x10] = uVar4;
      pMem[3] = uVar4;
      pMem[0x11] = *(int *)(&DAT_005bbb3c + iVar2);
      pMem[0x12] = *(int *)(&DAT_005bbb40 + iVar2);
      pMem[4] = (&DAT_005bbb38)[param_5 * 0x10];
    }
    piVar5 = (int *)(&DAT_005bbb44 + iVar2);
    piVar6 = param_4;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
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
    iVar2 = (**(code **)(param_3 + 8))(pMem,param_4,param_7);
    if (iVar2 < 0) {
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
  FUN_00408f00(pMem + 0xd,(uint)pMem[3] >> 4 & 1,pMem[3] & 7);
  pMem[9] = param_4[7];
  pMem[10] = param_4[8];
  iVar2 = param_4[9];
  iVar3 = param_4[7];
  pMem[0xb] = iVar2 - iVar3;
  pMem[0xc] = param_4[10] - param_4[8];
  if ((*(byte *)(pMem + 3) & 2) == 0) {
    pMem[0x11] = iVar2 - iVar3;
    pMem[0x12] = pMem[0xc];
  }
  pMem[0x1f] = param_6;
  return pMem;
}


