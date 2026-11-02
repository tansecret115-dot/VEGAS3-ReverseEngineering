/* Module: vegas30k.dll
   Function: FUN_01138770
   Address: 01138770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138770(HWND param_1)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  LRESULT LVar4;
  int unaff_EBX;
  int unaff_EBP;
  WPARAM wParam;
  UINT UVar5;
  int **lParam;
  int lParam_00;
  BOOL bEnable;
  WPARAM WVar6;
  LPARAM LVar7;
  int *piStack_310;
  LRESULT local_30c;
  int *local_308 [63];
  undefined1 uStack_209;
  WCHAR aWStack_208 [260];
  
  GetWindowLongA(param_1,8);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x188;
  pHVar1 = GetDlgItem(param_1,0x426);
  WVar6 = SendMessageA(pHVar1,UVar5,WVar6,LVar7);
  if (WVar6 == 0xffffffff) {
    return;
  }
  LVar7 = 0;
  UVar5 = 0x199;
  pHVar1 = GetDlgItem(param_1,0x426);
  piVar2 = (int *)SendMessageA(pHVar1,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x14b;
  local_30c = 0;
  local_308[0] = piVar2;
  pHVar1 = GetDlgItem(param_1,0x427);
  SendMessageA(pHVar1,UVar5,WVar6,LVar7);
  iVar3 = (**(code **)(*piVar2 + 0x34))(piVar2,&local_30c);
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 0x40))(piVar2,&stack0xfffffce8);
    iVar3 = 0;
    if (0 < unaff_EBX) {
      do {
        (**(code **)(*piStack_310 + 0x38))(piStack_310,iVar3,aWStack_208,0x100);
        if ((&stack0x00000000 == (undefined1 *)0x208) || (aWStack_208[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_208,-1,(LPSTR)local_308,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x308) {
          local_308[0] = (int *)((uint)local_308[0] & 0xffffff00);
        }
        lParam = local_308;
        uStack_209 = 0;
        WVar6 = 0;
        UVar5 = 0x143;
        pHVar1 = GetDlgItem(param_1,0x427);
        WVar6 = SendMessageA(pHVar1,UVar5,WVar6,(LPARAM)lParam);
        UVar5 = 0x151;
        lParam_00 = iVar3;
        pHVar1 = GetDlgItem(param_1,0x427);
        SendMessageA(pHVar1,UVar5,WVar6,lParam_00);
        iVar3 = iVar3 + 1;
      } while (iVar3 < unaff_EBX);
    }
    LVar7 = 0;
    WVar6 = 0;
    UVar5 = 0x146;
    pHVar1 = GetDlgItem(param_1,0x427);
    LVar4 = SendMessageA(pHVar1,UVar5,WVar6,LVar7);
    if (LVar4 != 0) {
      if (unaff_EBP == -1) {
        WVar6 = 0;
        unaff_EBP = 0;
      }
      else {
        LVar7 = 0;
        WVar6 = 0;
        UVar5 = 0x146;
        pHVar1 = GetDlgItem(param_1,0x427);
        local_30c = SendMessageA(pHVar1,UVar5,WVar6,LVar7);
        WVar6 = 0;
        if (0 < local_30c) {
          do {
            LVar7 = 0;
            UVar5 = 0x150;
            wParam = WVar6;
            pHVar1 = GetDlgItem(param_1,0x427);
            LVar4 = SendMessageA(pHVar1,UVar5,wParam,LVar7);
            if (unaff_EBP == LVar4) break;
            WVar6 = WVar6 + 1;
          } while ((int)WVar6 < local_30c);
        }
      }
      (**(code **)(*piStack_310 + 0x3c))(piStack_310,unaff_EBP);
      LVar7 = 0;
      UVar5 = 0x14e;
      pHVar1 = GetDlgItem(param_1,0x427);
      SendMessageA(pHVar1,UVar5,WVar6,LVar7);
      bEnable = 1;
      goto LAB_0113893e;
    }
  }
  bEnable = 0;
LAB_0113893e:
  pHVar1 = GetDlgItem(param_1,0x427);
  EnableWindow(pHVar1,bEnable);
  return;
}


