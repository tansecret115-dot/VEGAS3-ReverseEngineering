/* Module: sctplug.dll
   Function: DllGetClassObject
   Address: 00401350
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  HGLOBAL hMem;
  LPVOID this;
  int *piVar1;
  int iVar2;
  IID *pIVar3;
  ulong *puVar4;
  bool bVar5;
  
                    /* 0x1350  3  DllGetClassObject */
  iVar2 = 4;
  bVar5 = true;
  pIVar3 = riid;
  puVar4 = &DAT_004385b8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = pIVar3->Data1 == *puVar4;
    pIVar3 = (IID *)&pIVar3->Data2;
    puVar4 = puVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = 4;
    bVar5 = true;
    puVar4 = &DAT_004385a8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = riid->Data1 == *puVar4;
      riid = (IID *)&riid->Data2;
      puVar4 = puVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      return -0x7fffbffe;
    }
  }
  hMem = GlobalAlloc(0x40,0xc);
  this = GlobalLock(hMem);
  if (this == (LPVOID)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_00401180(this,rclsid);
  }
  *ppv = piVar1;
  if (piVar1 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


