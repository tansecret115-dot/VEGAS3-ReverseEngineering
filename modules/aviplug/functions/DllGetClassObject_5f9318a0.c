/* Module: aviplug.dll
   Function: DllGetClassObject
   Address: 5f9318a0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID this;
  int *piVar2;
  HRESULT HVar3;
  ulong *puVar4;
  IID *pIVar5;
  bool bVar6;
  
                    /* 0x18a0  3  DllGetClassObject */
  if (ppv == (LPVOID *)0x0) {
    return -0x7fffbffd;
  }
  *ppv = (LPVOID)0x0;
  if ((DAT_5f9f410c == (HANDLE)0x0) || (DAT_5f9f4130 == (int *)0x0)) {
    return -0x7ff8fff2;
  }
  WaitForSingleObject(DAT_5f9f410c,0xffffffff);
  if (DAT_5f9f4100 == 0) {
    AVIFileInit();
    iVar1 = FUN_5f958f70(DAT_5f9f4130);
    if (iVar1 < 0) {
      ReleaseMutex(DAT_5f9f410c);
      return -0x7ff8fff2;
    }
    DAT_5f9f4100 = 1;
  }
  ReleaseMutex(DAT_5f9f410c);
  iVar1 = 4;
  bVar6 = true;
  puVar4 = &DAT_5f9eee08;
  pIVar5 = riid;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *puVar4 == pIVar5->Data1;
    puVar4 = puVar4 + 1;
    pIVar5 = (IID *)&pIVar5->Data2;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = 4;
    bVar6 = true;
    puVar4 = &DAT_5f9eedf8;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *puVar4 == riid->Data1;
      puVar4 = puVar4 + 1;
      riid = (IID *)&riid->Data2;
    } while (bVar6);
    if (!bVar6) {
      return -0x7fffbffe;
    }
  }
  hMem = GlobalAlloc(0x40,0xc);
  this = GlobalLock(hMem);
  if ((this != (LPVOID)0x0) && (piVar2 = FUN_5f931600(this,rclsid), piVar2 != (int *)0x0)) {
    HVar3 = (**(code **)*piVar2)(piVar2,&DAT_5f9eedf8,ppv);
    (**(code **)(*piVar2 + 8))(piVar2);
    return HVar3;
  }
  return -0x7ff8fff2;
}


