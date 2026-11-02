/* Module: sfppack2.dll
   Function: DllGetClassObject
   Address: 5cd3b882
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  void *this;
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  IID *pIVar4;
  char *pcVar5;
  bool bVar6;
  
                    /* 0x6b882  4  DllGetClassObject */
  iVar2 = 0x10;
  bVar6 = true;
  pIVar4 = riid;
  pcVar5 = "";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = (char)pIVar4->Data1 == *pcVar5;
    pIVar4 = (IID *)((int)&pIVar4->Data1 + 1);
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar2 = 0x10;
    bVar6 = true;
    pcVar5 = "\x01";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = (char)riid->Data1 == *pcVar5;
      riid = (IID *)((int)&riid->Data1 + 1);
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      return -0x7fffbffe;
    }
  }
  riid = (IID *)0x0;
  if (0 < DAT_5cd5f2a4) {
    ppuVar3 = &PTR_u_Sonic_Foundry_Graphic_EQ_5cd5f178;
    do {
      bVar6 = true;
      iVar2 = 0x10;
      pcVar5 = ppuVar3[1];
      pIVar4 = rclsid;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar5 == (char)pIVar4->Data1;
        pcVar5 = pcVar5 + 1;
        pIVar4 = (IID *)((int)&pIVar4->Data1 + 1);
      } while (bVar6);
      if (bVar6) {
        this = (void *)FUN_5ccd1fe0(0xc);
        if (this == (void *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = FUN_5cd3b726(this,ppuVar3);
        }
        *ppv = piVar1;
        if (piVar1 == (int *)0x0) {
          return -0x7ff8fff2;
        }
        (**(code **)(*piVar1 + 4))(piVar1);
        return 0;
      }
      riid = (IID *)((int)&riid->Data1 + 1);
      ppuVar3 = ppuVar3 + 5;
    } while ((int)riid < DAT_5cd5f2a4);
  }
  return -0x7ffbfeef;
}


