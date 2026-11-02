/* Module: sftrans1.dll
   Function: FUN_00490b30
   Address: 00490b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00490b30(int param_1)

{
  LPCWSTR pWVar1;
  HWND hWnd;
  uint uVar2;
  HGLOBAL pvVar3;
  wchar_t *_Str2;
  int iVar4;
  int *unaff_EBP;
  undefined4 *puVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_44 [7];
  CHAR aCStack_28 [31];
  undefined1 uStack_9;
  
  if ((undefined4 *)**(int **)(param_1 + 8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(param_1 + 8))();
  }
  (**(code **)(iRam00000000 + 0xc))();
  if (*(int **)(param_1 + 0x340) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x340) + 8))();
  }
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6af);
  if ((hWnd != (HWND)0x0) && (*(int *)(param_1 + 0x330) != 0)) {
    uVar2 = SendMessageA(hWnd,0xb16,0,(LPARAM)&stack0xffffff94);
    pvVar3 = GlobalAlloc(0x40,uVar2 & 0xfffffffe);
    _Str2 = GlobalLock(pvVar3);
    if (_Str2 == (wchar_t *)0x0) {
      if (unaff_EBP == (int *)0x0) {
        return;
      }
      (**(code **)(*unaff_EBP + 8))();
      return;
    }
    SendMessageA(hWnd,0xb17,0,(LPARAM)&stack0xffffff94);
    iVar4 = wcscmp(*(wchar_t **)(param_1 + 0x338),_Str2);
    if (iVar4 != 0) {
      uStack_50 = 0;
      uStack_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      uStack_4c = *(undefined4 *)(param_1 + 0x338);
      uStack_48 = 0;
      SendMessageA(hWnd,0xb18,0,(LPARAM)&uStack_58);
    }
    pvVar3 = GlobalHandle(_Str2);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(_Str2);
    GlobalFree(pvVar3);
  }
  puVar5 = auStack_44;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pWVar1 = (LPCWSTR)(param_1 + 0xd8);
  if ((pWVar1 == (LPCWSTR)0x0) || (*pWVar1 != L'\0')) {
    WideCharToMultiByte(0,0,pWVar1,-1,aCStack_28,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x28) {
    aCStack_28[0] = '\0';
  }
  uStack_9 = 0;
  SendMessageA(hWnd,0xb19,0,(LPARAM)auStack_44);
  pWVar1 = (LPCWSTR)(param_1 + 0x150);
  if ((pWVar1 == (LPCWSTR)0x0) || (*pWVar1 != L'\0')) {
    WideCharToMultiByte(0,0,pWVar1,-1,aCStack_28,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x28) {
    aCStack_28[0] = '\0';
  }
  uStack_9 = 0;
  SendMessageA(hWnd,0xb19,1,(LPARAM)auStack_44);
  pWVar1 = (LPCWSTR)(param_1 + 0x1c8);
  if ((pWVar1 == (LPCWSTR)0x0) || (*pWVar1 != L'\0')) {
    WideCharToMultiByte(0,0,pWVar1,-1,aCStack_28,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x28) {
    aCStack_28[0] = '\0';
  }
  uStack_9 = 0;
  SendMessageA(hWnd,0xb19,2,(LPARAM)auStack_44);
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))();
  }
  return;
}


