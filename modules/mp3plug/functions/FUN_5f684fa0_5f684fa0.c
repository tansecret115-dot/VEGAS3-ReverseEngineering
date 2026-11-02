/* Module: mp3plug.dll
   Function: FUN_5f684fa0
   Address: 5f684fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f684fa0(HWND param_1,int param_2)

{
  undefined4 *puVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 *pMem;
  UINT UVar4;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar5;
  
  if (*(int *)(param_2 + 0x44) == 0) {
    pvVar2 = GlobalAlloc(0x42,0x80a);
    pvVar3 = GlobalLock(pvVar2);
    *(LPVOID *)(param_2 + 0x44) = pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      *(undefined4 *)(param_2 + 0x48) = 0;
      return;
    }
    *(undefined4 *)(param_2 + 0x48) = 0x80a;
  }
  puVar1 = *(undefined4 **)(param_2 + 0x44);
  if (puVar1 != (undefined4 *)0x0) {
    pMem = (undefined4 *)FUN_5f6820b0(puVar1);
    *pMem = 0x80a;
    UVar4 = IsDlgButtonChecked(param_1,0x416);
    pMem[1] = UVar4;
    GetDlgItemTextA(param_1,0x3ea,(LPSTR)(pMem + 2),0xff);
    GetDlgItemTextA(param_1,0x3eb,(LPSTR)((int)pMem + 0x107),0xff);
    GetDlgItemTextA(param_1,0x406,(LPSTR)((int)pMem + 0x305),0xff);
    GetDlgItemTextA(param_1,0x407,(LPSTR)(pMem + 0x101),5);
    GetDlgItemTextA(param_1,0x3ed,(LPSTR)((int)pMem + 0x409),0x400);
    GetDlgItemTextA(param_1,0x3ec,(LPSTR)((int)pMem + 0x206),0xff);
    hWnd = GetDlgItem(param_1,0x432);
    wParam = SendMessageA(hWnd,0x147,0,0);
    if (wParam != 0xffffffff) {
      LVar5 = SendMessageA(hWnd,0x150,wParam,0);
      *(char *)((int)pMem + 0x809) = (char)LVar5;
    }
    FUN_5f685130(puVar1,pMem);
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    UVar4 = IsDlgButtonChecked(param_1,0x448);
    if (UVar4 != 0) {
      *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffb | 2;
      return;
    }
    UVar4 = IsDlgButtonChecked(param_1,0x449);
    if (UVar4 != 0) {
      *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffd | 4;
      return;
    }
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 6;
  }
  return;
}


