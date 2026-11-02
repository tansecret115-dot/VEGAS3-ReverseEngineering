/* Module: mp3plug.dll
   Function: FUN_5f696650
   Address: 5f696650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f696650(void *this,HWND param_1)

{
  int iVar1;
  int *pMem;
  HGLOBAL pvVar2;
  HWND hWnd;
  int iVar3;
  WPARAM WVar4;
  UINT UVar5;
  uint uVar6;
  uint local_48;
  CHAR local_40 [32];
  CHAR local_20 [32];
  
  local_48 = 0;
  iVar3 = *(int *)(*(int *)((int)this + 0x34) + 0x424);
  iVar1 = *(int *)(iVar3 + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  if (*(uint *)(iVar3 + 0x3a) < 0x856) {
    if ((*(byte *)(iVar1 + 0x40) & 6) != 0) {
      CheckDlgButton(param_1,0x416,1);
    }
    SetDlgItemTextA(param_1,0x3ea,"");
    SetDlgItemTextA(param_1,0x3eb,"");
    SetDlgItemTextA(param_1,0x406,"");
    SetDlgItemTextA(param_1,0x3ed,"");
    SetDlgItemTextA(param_1,0x3ec,"");
    SetDlgItemTextA(param_1,0x407,"");
  }
  else {
    pMem = (int *)FUN_5f696950((undefined4 *)(iVar1 + 0x4c));
    if (*pMem == 0x80a) {
      CheckDlgButton(param_1,0x416,pMem[1]);
      *(undefined1 *)((int)pMem + 0x26) = 0;
      *(undefined1 *)((int)pMem + 0x125) = 0;
      *(undefined1 *)(pMem + 0x89) = 0;
      *(undefined1 *)((int)pMem + 0x323) = 0;
      *(undefined1 *)((int)pMem + 0x427) = 0;
      *(undefined1 *)(pMem + 0x102) = 0;
      SetDlgItemTextA(param_1,0x3ea,(LPCSTR)(pMem + 2));
      SetDlgItemTextA(param_1,0x3eb,(LPCSTR)((int)pMem + 0x107));
      SetDlgItemTextA(param_1,0x406,(LPCSTR)((int)pMem + 0x305));
      SetDlgItemTextA(param_1,0x3ed,(LPCSTR)((int)pMem + 0x409));
      SetDlgItemTextA(param_1,0x3ec,(LPCSTR)((int)pMem + 0x206));
      SetDlgItemTextA(param_1,0x407,(LPCSTR)(pMem + 0x101));
      local_48 = (uint)*(byte *)((int)pMem + 0x809);
    }
    if (pMem != (int *)0x0) {
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
    }
  }
  SendDlgItemMessageA(param_1,0x3ea,0xc5,0x1e,0);
  SendDlgItemMessageA(param_1,0x3eb,0xc5,0x1e,0);
  SendDlgItemMessageA(param_1,0x406,0xc5,0x1e,0);
  SendDlgItemMessageA(param_1,0x3ed,0xc5,0x1e,0);
  SendDlgItemMessageA(param_1,0x3ec,0xc5,0x80,0);
  SendDlgItemMessageA(param_1,0x407,0xc5,4,0);
  local_40[0] = '\0';
  hWnd = GetDlgItem(param_1,0x432);
  uVar6 = 1000;
  do {
    iVar3 = FUN_5f69dd80(DAT_5f74d2f4,uVar6,local_20,0x1f);
    if (iVar3 != 0) {
      WVar4 = SendMessageA(hWnd,0x143,0,(LPARAM)local_20);
      if (-1 < (int)WVar4) {
        SendMessageA(hWnd,0x151,WVar4,uVar6 - 1000);
        if (uVar6 - 1000 == local_48) {
          lstrcpyA(local_40,local_20);
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x466);
  WVar4 = 0;
  if (local_40[0] != '\0') {
    WVar4 = SendMessageA(hWnd,0x158,0,(LPARAM)local_40);
    if (WVar4 == 0xffffffff) goto LAB_5f6968f6;
  }
  SendMessageA(hWnd,0x14e,WVar4,0);
LAB_5f6968f6:
  uVar6 = *(uint *)(iVar1 + 0x40) & 4;
  if ((uVar6 == 0) || ((*(uint *)(iVar1 + 0x40) & 2) == 0)) {
    iVar3 = (uVar6 != 0) + 0x448;
  }
  else {
    iVar3 = 0x44a;
  }
  CheckRadioButton(param_1,0x448,0x44a,iVar3);
  UVar5 = IsDlgButtonChecked(param_1,0x416);
  FUN_5f696990(param_1,UVar5);
  return 0;
}


