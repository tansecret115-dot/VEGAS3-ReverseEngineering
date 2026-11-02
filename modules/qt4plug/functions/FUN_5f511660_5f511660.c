/* Module: qt4plug.dll
   Function: FUN_5f511660
   Address: 5f511660
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f511660(int *param_1,int *param_2,undefined4 param_3)

{
  HGLOBAL pvVar1;
  LPVOID this;
  undefined4 *pMem;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = 4;
  bVar5 = true;
  piVar3 = &DAT_5f595aa0;
  piVar4 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = &DAT_5f59e060;
    piVar4 = param_2;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = &DAT_5f595a70;
      piVar4 = param_2;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 == (int *)0x0) {
          *param_2 = 0;
          return 0;
        }
        *param_2 = (int)(param_1 + 1);
        return 0;
      }
      iVar2 = 4;
      bVar5 = true;
      piVar3 = &DAT_5f595c20;
      piVar4 = param_2;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        pvVar1 = GlobalAlloc(0x40,0x10);
        this = GlobalLock(pvVar1);
        if (this == (LPVOID)0x0) {
          return -0x7fffbffe;
        }
        pMem = FUN_5f5258f0(this,(undefined4 *)param_1[6]);
        if (pMem != (undefined4 *)0x0) {
          iVar2 = (**(code **)*pMem)(pMem,param_2,param_3);
          if (-1 < iVar2) {
            return iVar2;
          }
          FUN_5f525940(pMem);
          pvVar1 = GlobalHandle(pMem);
          GlobalUnlock(pvVar1);
          pvVar1 = GlobalHandle(pMem);
          GlobalFree(pvVar1);
          return -0x7fffbffe;
        }
        return -0x7fffbffe;
      }
      iVar2 = 4;
      bVar5 = true;
      piVar3 = &DAT_5f595c50;
      piVar4 = param_2;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 != (int *)0x0) {
          *param_2 = (int)(param_1 + 2);
          return 0;
        }
      }
      else {
        iVar2 = 4;
        bVar5 = true;
        piVar3 = &DAT_5f595c40;
        piVar4 = param_2;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          (**(code **)(*param_1 + 4))(param_1);
          if (param_1 != (int *)0x0) {
            *param_2 = (int)(param_1 + 3);
            return 0;
          }
        }
        else {
          iVar2 = 4;
          bVar5 = true;
          piVar3 = &DAT_5f595bc0;
          piVar4 = param_2;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piVar3 == *piVar4;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar5);
          if (!bVar5) {
            return -0x7fffbffe;
          }
          (**(code **)(*param_1 + 4))(param_1);
          if (param_1 != (int *)0x0) {
            *param_2 = (int)(param_1 + 4);
            return 0;
          }
        }
      }
      *param_2 = 0;
      return 0;
    }
  }
  if (((param_1[6] != 0) && (param_1[0x10] == 0)) && (param_1[0xf] == 0)) {
    return -0x7fffbffe;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = (int)param_1;
  return 0;
}


