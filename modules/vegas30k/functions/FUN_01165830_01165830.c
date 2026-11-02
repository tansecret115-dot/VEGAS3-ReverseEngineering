/* Module: vegas30k.dll
   Function: FUN_01165830
   Address: 01165830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01165830(HWND param_1,int param_2)

{
  HWND pHVar1;
  int iVar2;
  LRESULT LVar3;
  WPARAM WVar4;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_retaddr;
  UINT UVar5;
  CHAR *lParam;
  int lParam_00;
  BOOL bEnable;
  undefined1 *lParam_01;
  WPARAM WVar6;
  LPARAM LVar7;
  LRESULT local_30c;
  CHAR aCStack_308 [255];
  undefined1 uStack_209;
  WCHAR aWStack_208 [260];
  
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x14b;
  local_30c = 0;
  pHVar1 = GetDlgItem(param_1,0x439);
  SendMessageA(pHVar1,UVar5,WVar6,LVar7);
  iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0xa0))(*(int **)(param_2 + 4),&local_30c);
  if (iVar2 == 0) {
    (**(code **)(**(int **)(param_2 + 4) + 0xac))(*(int **)(param_2 + 4),&stack0xfffffcf0);
    iVar2 = 0;
    if (0 < unaff_EBP) {
      do {
        (**(code **)(**(int **)(unaff_retaddr + 4) + 0xa4))
                  (*(int **)(unaff_retaddr + 4),iVar2,aWStack_208,0x100);
        if ((&stack0x00000000 == (undefined1 *)0x208) || (aWStack_208[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_208,-1,aCStack_308,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x308) {
          aCStack_308[0] = '\0';
        }
        lParam = aCStack_308;
        uStack_209 = 0;
        WVar6 = 0;
        UVar5 = 0x143;
        pHVar1 = GetDlgItem(param_1,0x439);
        WVar6 = SendMessageA(pHVar1,UVar5,WVar6,(LPARAM)lParam);
        UVar5 = 0x151;
        lParam_00 = iVar2;
        pHVar1 = GetDlgItem(param_1,0x439);
        SendMessageA(pHVar1,UVar5,WVar6,lParam_00);
        iVar2 = iVar2 + 1;
      } while (iVar2 < unaff_EBP);
    }
    LVar7 = 0;
    WVar6 = 0;
    UVar5 = 0x146;
    pHVar1 = GetDlgItem(param_1,0x439);
    LVar3 = SendMessageA(pHVar1,UVar5,WVar6,LVar7);
    if (LVar3 == 0) {
      bEnable = 0;
    }
    else {
      if (unaff_EBX != -1) {
        LVar7 = 0;
        WVar6 = 0;
        UVar5 = 0x146;
        pHVar1 = GetDlgItem(param_1,0x439);
        local_30c = SendMessageA(pHVar1,UVar5,WVar6,LVar7);
        WVar6 = 0;
        if (0 < local_30c) {
          do {
            LVar7 = 0;
            UVar5 = 0x150;
            WVar4 = WVar6;
            pHVar1 = GetDlgItem(param_1,0x439);
            LVar3 = SendMessageA(pHVar1,UVar5,WVar4,LVar7);
            if (unaff_EBX == LVar3) break;
            WVar6 = WVar6 + 1;
          } while ((int)WVar6 < local_30c);
        }
      }
      bEnable = 1;
    }
    pHVar1 = GetDlgItem(param_1,0x439);
    EnableWindow(pHVar1,bEnable);
  }
  lParam_01 = &DAT_011db13c;
  WVar6 = 0;
  UVar5 = 0x14a;
  pHVar1 = GetDlgItem(param_1,0x439);
  WVar4 = SendMessageA(pHVar1,UVar5,WVar6,(LPARAM)lParam_01);
  LVar7 = -1;
  UVar5 = 0x151;
  WVar6 = WVar4;
  pHVar1 = GetDlgItem(param_1,0x439);
  SendMessageA(pHVar1,UVar5,WVar6,LVar7);
  LVar7 = 0;
  UVar5 = 0x14e;
  pHVar1 = GetDlgItem(param_1,0x439);
  SendMessageA(pHVar1,UVar5,WVar4,LVar7);
  return;
}


