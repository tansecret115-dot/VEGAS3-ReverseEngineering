/* Module: vegas30k.dll
   Function: FUN_0113a000
   Address: 0113a000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0113a000(HWND param_1)

{
  int *piVar1;
  LONG LVar2;
  HWND pHVar3;
  int iVar4;
  LRESULT LVar5;
  int unaff_EBX;
  int unaff_EBP;
  BOOL BVar6;
  WPARAM wParam;
  UINT UVar7;
  int **lParam;
  int lParam_00;
  WPARAM WVar8;
  LPARAM LVar9;
  int *piStack_310;
  LRESULT local_30c;
  int *local_308 [63];
  undefined1 uStack_209;
  WCHAR aWStack_208 [260];
  
  LVar2 = GetWindowLongA(param_1,8);
  piVar1 = *(int **)(LVar2 + 4);
  LVar9 = 0;
  WVar8 = 0;
  UVar7 = 0x14b;
  local_30c = 0;
  local_308[0] = piVar1;
  pHVar3 = GetDlgItem(param_1,0x43a);
  SendMessageA(pHVar3,UVar7,WVar8,LVar9);
  iVar4 = (**(code **)(*piVar1 + 0xa0))(piVar1,&local_30c);
  if (iVar4 == 0) {
    (**(code **)(*piVar1 + 0xac))(piVar1,&stack0xfffffce8);
    iVar4 = 0;
    if (0 < unaff_EBX) {
      do {
        (**(code **)(*piStack_310 + 0xa4))(piStack_310,iVar4,aWStack_208,0x100);
        if ((&stack0x00000000 == (undefined1 *)0x208) || (aWStack_208[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_208,-1,(LPSTR)local_308,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x308) {
          local_308[0] = (int *)((uint)local_308[0] & 0xffffff00);
        }
        lParam = local_308;
        uStack_209 = 0;
        WVar8 = 0;
        UVar7 = 0x143;
        pHVar3 = GetDlgItem(param_1,0x43a);
        WVar8 = SendMessageA(pHVar3,UVar7,WVar8,(LPARAM)lParam);
        UVar7 = 0x151;
        lParam_00 = iVar4;
        pHVar3 = GetDlgItem(param_1,0x43a);
        SendMessageA(pHVar3,UVar7,WVar8,lParam_00);
        iVar4 = iVar4 + 1;
      } while (iVar4 < unaff_EBX);
    }
    LVar9 = 0;
    WVar8 = 0;
    UVar7 = 0x146;
    pHVar3 = GetDlgItem(param_1,0x43a);
    LVar5 = SendMessageA(pHVar3,UVar7,WVar8,LVar9);
    if (LVar5 != 0) {
      if (unaff_EBP == -1) {
        WVar8 = 0;
        unaff_EBP = 0;
      }
      else {
        LVar9 = 0;
        WVar8 = 0;
        UVar7 = 0x146;
        pHVar3 = GetDlgItem(param_1,0x43a);
        local_30c = SendMessageA(pHVar3,UVar7,WVar8,LVar9);
        WVar8 = 0;
        if (0 < local_30c) {
          do {
            LVar9 = 0;
            UVar7 = 0x150;
            wParam = WVar8;
            pHVar3 = GetDlgItem(param_1,0x43a);
            LVar5 = SendMessageA(pHVar3,UVar7,wParam,LVar9);
            if (unaff_EBP == LVar5) break;
            WVar8 = WVar8 + 1;
          } while ((int)WVar8 < local_30c);
        }
      }
      (**(code **)(*piStack_310 + 0xa8))(piStack_310,unaff_EBP);
      LVar9 = 0;
      UVar7 = 0x14e;
      pHVar3 = GetDlgItem(param_1,0x43a);
      SendMessageA(pHVar3,UVar7,WVar8,LVar9);
      BVar6 = 1;
      pHVar3 = GetDlgItem(param_1,0x43a);
      EnableWindow(pHVar3,BVar6);
      FUN_01139ed0(param_1);
      return;
    }
  }
  BVar6 = 0;
  pHVar3 = GetDlgItem(param_1,0x43a);
  EnableWindow(pHVar3,BVar6);
  return;
}


