/* Module: vegas30.exe
   Function: FUN_0052f880
   Address: 0052f880
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052f880(HWND param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  UINT UVar7;
  WPARAM WVar8;
  WPARAM wParam;
  LPARAM LVar9;
  WCHAR aWStack_228 [10];
  undefined2 auStack_214 [264];
  int iStack_4;
  
  LVar9 = 0;
  WVar8 = 0;
  UVar7 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x3eb);
  WVar8 = SendMessageA(pHVar1,UVar7,WVar8,LVar9);
  if (WVar8 != 0xffffffff) {
    LVar9 = 0;
    wParam = 0;
    UVar7 = 0x147;
    iVar6 = 0x470;
    pHVar1 = GetParent(param_1);
    pHVar1 = GetDlgItem(pHVar1,iVar6);
    LVar2 = SendMessageA(pHVar1,UVar7,wParam,LVar9);
    if ((LVar2 != -1) && (iVar6 = *(int *)(param_2 + 0x147c + LVar2 * 4), iVar6 != -1)) {
      LVar9 = 0;
      UVar7 = 0x150;
      pHVar1 = GetDlgItem(param_1,0x3eb);
      LVar2 = SendMessageA(pHVar1,UVar7,WVar8,LVar9);
      iVar3 = (**(code **)(*DAT_0064b510 + 0x7c))();
      if (iVar3 < 0) {
        auStack_214[0] = 0;
        (**(code **)(*DAT_0064b510 + 0x80))(DAT_0064b510,iVar6,LVar2,auStack_214,0x104);
        if ((&stack0x00000000 == (undefined1 *)0x228) || (aWStack_228[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_228,-1,&stack0xfffffcd4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        puVar5 = &stack0xfffffcd4;
        uVar4 = _SfGetString_8(DAT_00647204,0x6dbf);
        SfMsgBox(param_1,0x30,uVar4,puVar5);
        LVar2 = 0;
        (**(code **)(*DAT_0064b510 + 0x7c))(DAT_0064b510,iVar6,0);
        LVar9 = 0;
        WVar8 = 0;
        UVar7 = 0x14e;
        pHVar1 = GetDlgItem(param_1,0x3eb);
        SendMessageA(pHVar1,UVar7,WVar8,LVar9);
      }
      *(LRESULT *)(iStack_4 + 0x146c) = LVar2;
      FUN_0052eb30(param_1,iStack_4);
    }
  }
  return;
}


