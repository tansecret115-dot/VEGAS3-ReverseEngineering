/* Module: sftrans1.dll
   Function: FUN_00422770
   Address: 00422770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00422770(int *param_1,int param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else if (iVar4 < 0x11) {
    iVar4 = 0x10;
  }
  else {
    bVar3 = 0;
    for (; iVar4 != 0; iVar4 = iVar4 >> 1) {
      bVar3 = bVar3 + 1;
    }
    iVar4 = 1 << (bVar3 & 0x1f);
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else if (param_2 < 0x11) {
    iVar6 = 0x10;
  }
  else {
    bVar3 = 0;
    iVar6 = param_2;
    do {
      bVar3 = bVar3 + 1;
      iVar6 = iVar6 >> 1;
    } while (iVar6 != 0);
    iVar6 = 1 << (bVar3 & 0x1f);
  }
  if (iVar4 == iVar6) {
    *param_1 = param_2;
  }
  else {
    if (0 < iVar4) {
      pMem = (LPCVOID)param_1[1];
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      *param_1 = 0;
    }
    *param_1 = param_2;
    if (0 < iVar6) {
      pvVar1 = GlobalAlloc(0x40,iVar6 * 0x68);
      pvVar2 = GlobalLock(pvVar1);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = (LPVOID)0x0;
      }
      else if (-1 < iVar6 + -1) {
        puVar5 = (undefined4 *)((int)pvVar2 + 0x28);
        do {
          puVar5[-4] = 0;
          puVar5[-2] = 0;
          *puVar5 = 0;
          puVar5[2] = 0;
          puVar5[-3] = 0;
          puVar5[-1] = 0;
          puVar5[1] = 0;
          puVar5[3] = 0;
          *(undefined1 *)(puVar5 + 4) = 0;
          *(undefined1 *)((int)puVar5 + 0x11) = 0;
          puVar5[6] = 0;
          puVar5[8] = 0;
          puVar5[10] = 0;
          puVar5[0xc] = 0;
          puVar5[7] = 0;
          puVar5[9] = 0;
          puVar5[0xb] = 0;
          puVar5[0xd] = 0;
          *(undefined1 *)(puVar5 + 0xe) = 0;
          *(undefined1 *)((int)puVar5 + 0x39) = 0;
          puVar7 = puVar5 + -10;
          for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined1 *)((int)puVar5 + -0x16) = 1;
          *(undefined1 *)((int)puVar5 + -0x15) = 1;
          *(undefined1 *)(puVar5 + -5) = 1;
          *(undefined1 *)((int)puVar5 + -0x13) = 1;
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + 0x1a;
        } while (iVar6 != 0);
      }
      param_1[1] = (int)pvVar2;
      if (pvVar2 == (LPVOID)0x0) {
        *param_1 = 0;
        return 0x8007000e;
      }
    }
  }
  return 0;
}


