/* Module: vegas30.exe
   Function: FUN_00537140
   Address: 00537140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537140(HWND param_1,int param_2)

{
  WPARAM WVar1;
  HWND pHVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  int iVar5;
  UINT UVar6;
  int *piVar7;
  WPARAM lParam;
  char *lpString;
  LPCSTR pCVar8;
  BOOL BVar9;
  LPARAM lParam_00;
  WCHAR aWStack_818 [10];
  undefined1 auStack_804 [2052];
  
  WVar1 = FUN_00536dc0(param_1,param_2);
  if (WVar1 != 0) {
    pCVar8 = "";
    pHVar2 = GetDlgItem(param_1,0x438);
    SetWindowTextA(pHVar2,pCVar8);
    BVar9 = 0;
    pHVar2 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar2,BVar9);
    return;
  }
  UVar6 = 0x147;
  lParam = WVar1;
  pHVar2 = GetDlgItem(param_1,0x3eb);
  WVar1 = SendMessageA(pHVar2,UVar6,WVar1,lParam);
  if (WVar1 == 0xffffffff) {
    if (*(int *)(param_2 + 0x147c) != 0) {
      lpString = "No existing templates support the media.";
      pHVar2 = GetDlgItem(param_1,0x438);
      SetWindowTextA(pHVar2,lpString);
      (**(code **)(_DAT_00000000 + 8))();
      return;
    }
    pCVar8 = "";
    pHVar2 = GetDlgItem(param_1,0x438);
    SetWindowTextA(pHVar2,pCVar8);
    BVar9 = 0;
    pHVar2 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar2,BVar9);
    (**(code **)(_DAT_00000000 + 8))();
    return;
  }
  BVar9 = 1;
  pHVar2 = GetDlgItem(param_1,0x438);
  EnableWindow(pHVar2,BVar9);
  lParam_00 = 0;
  UVar6 = 0x150;
  pHVar2 = GetDlgItem(param_1,0x3eb);
  LVar3 = SendMessageA(pHVar2,UVar6,WVar1,lParam_00);
  uVar4 = (**(code **)(_DAT_00000000 + 0x10))();
  piVar7 = (int *)0x400;
  iVar5 = (**(code **)(*DAT_0064b510 + 0x84))(DAT_0064b510,uVar4,LVar3,auStack_804);
  if (-1 < iVar5) {
    if ((&stack0x00000000 == (undefined1 *)0x818) || (aWStack_818[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_818,-1,&stack0xfffff3e8,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    pCVar8 = &stack0xfffff3e8;
    pHVar2 = GetDlgItem(param_1,0x438);
    SetWindowTextA(pHVar2,pCVar8);
  }
  (**(code **)(*piVar7 + 8))(piVar7);
  return;
}


