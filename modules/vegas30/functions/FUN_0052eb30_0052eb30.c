/* Module: vegas30.exe
   Function: FUN_0052eb30
   Address: 0052eb30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052eb30(HWND param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  BOOL BVar7;
  CHAR *lpString;
  LPCSTR pCVar8;
  CHAR aCStack_c00 [1023];
  undefined1 uStack_801;
  WCHAR local_800 [1024];
  
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x147;
  iVar3 = 0x470;
  pHVar1 = GetParent(param_1);
  pHVar1 = GetDlgItem(pHVar1,iVar3);
  LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if (LVar2 != -1) {
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x147;
    iVar3 = *(int *)(param_2 + 0x147c + LVar2 * 4);
    pHVar1 = GetDlgItem(param_1,0x3eb);
    WVar5 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if ((WVar5 == 0xffffffff) || (iVar3 < 0)) {
      if (*(int *)(param_2 + 0x1474) != 0) {
        pCVar8 = "No existing templates support this media.";
        pHVar1 = GetDlgItem(param_1,0x438);
        SetWindowTextA(pHVar1,pCVar8);
        return;
      }
    }
    else {
      BVar7 = 1;
      pHVar1 = GetDlgItem(param_1,0x438);
      EnableWindow(pHVar1,BVar7);
      LVar6 = 0;
      UVar4 = 0x150;
      pHVar1 = GetDlgItem(param_1,0x3eb);
      LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
      iVar3 = (**(code **)(*DAT_0064b510 + 0x84))(DAT_0064b510,iVar3,LVar2,local_800,0x400);
      if (-1 < iVar3) {
        if ((&stack0x00000000 == (undefined1 *)0x800) || (local_800[0] != L'\0')) {
          WideCharToMultiByte(0,0,local_800,-1,aCStack_c00,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0xc00) {
          aCStack_c00[0] = '\0';
        }
        lpString = aCStack_c00;
        uStack_801 = 0;
        pHVar1 = GetDlgItem(param_1,0x438);
        SetWindowTextA(pHVar1,lpString);
        return;
      }
    }
  }
  pCVar8 = "";
  pHVar1 = GetDlgItem(param_1,0x438);
  SetWindowTextA(pHVar1,pCVar8);
  BVar7 = 0;
  pHVar1 = GetDlgItem(param_1,0x438);
  EnableWindow(pHVar1,BVar7);
  return;
}


