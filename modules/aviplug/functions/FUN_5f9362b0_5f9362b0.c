/* Module: aviplug.dll
   Function: FUN_5f9362b0
   Address: 5f9362b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9362b0(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  SIZE_T dwBytes;
  HGLOBAL pvVar2;
  LPVOID pMem;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0;
  iVar1 = (*(int **)(param_1 + 0x428))[0x12];
  if ((iVar1 != 0) || (iVar1 = **(int **)(param_1 + 0x428), iVar1 != 0)) {
    iVar3 = iVar1;
  }
  iVar1 = ICOpen(0x63646976,*(undefined4 *)(param_2 + 4),1);
  if (iVar1 != 0) {
    dwBytes = ICSendMessage(iVar1,0x4004,iVar3,0);
    if (dwBytes != 0) {
      pvVar2 = GlobalAlloc(0x42,dwBytes);
      pMem = GlobalLock(pvVar2);
      if (pMem != (LPVOID)0x0) {
        ICSendMessage(iVar1,0x4004,iVar3,pMem);
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
    }
    ICClose(iVar1);
  }
  uVar4 = ftol();
  *param_3 = uVar4;
  return;
}


