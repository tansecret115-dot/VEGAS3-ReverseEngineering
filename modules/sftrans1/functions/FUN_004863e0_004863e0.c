/* Module: sftrans1.dll
   Function: FUN_004863e0
   Address: 004863e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004863e0(int param_1,int *param_2,int param_3)

{
  LPCVOID pMem;
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar1 = FUN_00486940(param_3);
  if (iVar1 == 0) {
    iVar6 = 0;
LAB_0048640e:
    if (param_2[2] == 0) {
      return;
    }
    if (1 < iVar6) goto LAB_0048641e;
  }
  else {
    iVar6 = *(int *)(iVar1 + 0xc);
    if (iVar6 < 2) goto LAB_0048640e;
LAB_0048641e:
    if (param_2[2] == 0) {
      pvVar2 = GlobalAlloc(0x40,iVar6 * 4 - 4);
      pvVar3 = GlobalLock(pvVar2);
      param_2[2] = (int)pvVar3;
      goto LAB_004864b3;
    }
  }
  if (*param_2 != param_3) {
    iVar4 = FUN_00486940(*param_2);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != iVar6) {
      pMem = (LPCVOID)param_2[2];
      if (pMem != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
        param_2[2] = 0;
      }
      if (1 < iVar6) {
        pvVar2 = GlobalAlloc(0x40,iVar6 * 4 - 4);
        pvVar3 = GlobalLock(pvVar2);
        param_2[2] = (int)pvVar3;
      }
    }
  }
LAB_004864b3:
  iVar5 = 0;
  iVar4 = ((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x3c)) - *(int *)(param_1 + 0x94)) /
          *(int *)(iVar1 + 0xc);
  iVar1 = iVar4;
  if (0 < iVar6 + -1) {
    do {
      iVar5 = iVar5 + 1;
      *(int *)(param_2[2] + -4 + iVar5 * 4) = iVar1;
      iVar1 = iVar1 + iVar4;
    } while (iVar5 < iVar6 + -1);
  }
  return;
}


