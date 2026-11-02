/* Module: sftrans1.dll
   Function: FUN_0049cfc0
   Address: 0049cfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049cfc0(int *param_1,int *param_2,undefined1 *param_3,int param_4)

{
  LPCVOID pMem;
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar5 = *param_2;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (iVar1 < 0x11) {
    iVar1 = 0x10;
  }
  else {
    bVar4 = 0;
    for (; iVar1 != 0; iVar1 = iVar1 >> 1) {
      bVar4 = bVar4 + 1;
    }
    iVar1 = 1 << (bVar4 & 0x1f);
  }
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else if (iVar5 < 0x11) {
    iVar7 = 0x10;
  }
  else {
    bVar4 = 0;
    iVar7 = iVar5;
    do {
      bVar4 = bVar4 + 1;
      iVar7 = iVar7 >> 1;
    } while (iVar7 != 0);
    iVar7 = 1 << (bVar4 & 0x1f);
  }
  if (iVar1 == iVar7) {
    *param_1 = iVar5;
  }
  else {
    if (0 < iVar1) {
      pMem = (LPCVOID)param_1[1];
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
      *param_1 = 0;
    }
    *param_1 = iVar5;
    if (0 < iVar7) {
      pvVar2 = GlobalAlloc(0x40,iVar7 * 0x68);
      pvVar3 = GlobalLock(pvVar2);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = (LPVOID)0x0;
      }
      else if (-1 < iVar7 + -1) {
        puVar6 = (undefined4 *)((int)pvVar3 + 0x28);
        do {
          puVar6[-4] = 0;
          puVar6[-2] = 0;
          *puVar6 = 0;
          puVar6[2] = 0;
          puVar6[-3] = 0;
          puVar6[-1] = 0;
          puVar6[1] = 0;
          puVar6[3] = 0;
          *(undefined1 *)(puVar6 + 4) = 0;
          *(undefined1 *)((int)puVar6 + 0x11) = 0;
          puVar6[6] = 0;
          puVar6[8] = 0;
          puVar6[10] = 0;
          puVar6[0xc] = 0;
          puVar6[7] = 0;
          puVar6[9] = 0;
          puVar6[0xb] = 0;
          puVar6[0xd] = 0;
          *(undefined1 *)(puVar6 + 0xe) = 0;
          *(undefined1 *)((int)puVar6 + 0x39) = 0;
          puVar8 = puVar6 + -10;
          for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          *(undefined1 *)((int)puVar6 + -0x16) = 1;
          *(undefined1 *)((int)puVar6 + -0x15) = 1;
          *(undefined1 *)(puVar6 + -5) = 1;
          *(undefined1 *)((int)puVar6 + -0x13) = 1;
          iVar7 = iVar7 + -1;
          puVar6 = puVar6 + 0x1a;
        } while (iVar7 != 0);
      }
      param_1[1] = (int)pvVar3;
      if (pvVar3 == (LPVOID)0x0) {
        *param_1 = 0;
      }
    }
  }
  iVar5 = 0;
  if (0 < *param_1) {
    iVar1 = 0;
    do {
      puVar6 = (undefined4 *)(iVar1 + param_2[1]);
      puVar8 = (undefined4 *)(iVar1 + param_1[1]);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 0x68;
      for (iVar7 = 0x1a; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    } while (iVar5 < *param_1);
  }
  if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
    param_4 = param_4 - (int)param_3;
    iVar5 = 0x100;
    do {
      *param_3 = param_3[param_4];
      param_3 = param_3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


