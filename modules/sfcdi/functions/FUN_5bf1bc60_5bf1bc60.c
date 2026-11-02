/* Module: sfcdi.dll
   Function: FUN_5bf1bc60
   Address: 5bf1bc60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1bc60(HWND param_1,int param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  HWND hWnd;
  LRESULT LVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  *(undefined4 *)(param_2 + 0x34) = 0;
  if (*(LPCVOID *)(param_2 + 0x30) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_2 + 0x30));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_2 + 0x30));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  hWnd = GetDlgItem(param_1,0x48d);
  LVar3 = SendMessageA(hWnd,0x1004,0,0);
  if (0 < LVar3) {
    pvVar2 = GlobalAlloc(0x42,LVar3 * 4);
    pvVar4 = GlobalLock(pvVar2);
    *(LPVOID *)(param_2 + 0x30) = pvVar4;
    if (pvVar4 != (LPVOID)0x0) {
      iVar5 = 0;
      param_2 = 0;
      if (0 < LVar3) {
        do {
          local_28 = 0xc;
          local_20 = 0;
          local_1c = 0;
          local_18 = 2;
          local_14 = 0;
          local_10 = 0;
          local_c = 0;
          local_8 = 0;
          local_24 = iVar5;
          SendMessageA(hWnd,0x1005,0,(LPARAM)&local_28);
          if (local_1c == 2) {
            *(undefined4 *)(*(int *)(iVar1 + 0x30) + param_2 * 4) = local_8;
            param_2 = param_2 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < LVar3);
      }
      *(int *)(iVar1 + 0x34) = param_2;
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x34) = 0;
  if (*(LPCVOID *)(param_2 + 0x30) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_2 + 0x30));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_2 + 0x30));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  return;
}


