/* Module: vegas30.exe
   Function: FUN_00524880
   Address: 00524880
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00524880(int param_1)

{
  uint dwBytes;
  HGLOBAL pvVar1;
  uint *pMem;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 4);
    if (iVar3 != 0) {
      dwBytes = iVar3 * 0x28 + 0xc;
      pvVar1 = GlobalAlloc(0x40,dwBytes);
      pMem = GlobalLock(pvVar1);
      puVar4 = pMem;
      for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      uVar2 = 0;
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (uint *)((int)puVar4 + 1);
      }
      if (0 < *(int *)(*(int *)(param_1 + 0x84) + 4)) {
        puVar4 = pMem + 3;
        do {
          puVar5 = puVar4;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          FUN_0050ab70(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x84) + 8) + 8) + uVar2 * 4) +
                       0x10,puVar4,0x20);
          puVar4[8] = uVar2;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 10;
        } while ((int)uVar2 < *(int *)(*(int *)(param_1 + 0x84) + 4));
      }
      *pMem = dwBytes;
      pMem[1] = *(uint *)(*(int *)(param_1 + 0x84) + 4);
      pMem[2] = pMem[2] | 1;
      SendMessageA(*(HWND *)(param_1 + 0xdc),0x608,0,(LPARAM)pMem);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      ShowWindow(*(HWND *)(param_1 + 0xe0),0);
      ShowWindow(*(HWND *)(param_1 + 0xdc),1);
      InvalidateRect(*(HWND *)(param_1 + 0xdc),(RECT *)0x0,1);
      return;
    }
    ShowWindow(*(HWND *)(param_1 + 0xdc),0);
    ShowWindow(*(HWND *)(param_1 + 0xe0),1);
  }
  return;
}


