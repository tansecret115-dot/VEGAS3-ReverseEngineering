/* Module: vegas30k.dll
   Function: FUN_01139b50
   Address: 01139b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01139b50(HWND param_1)

{
  int *piVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar5;
  WPARAM wParam;
  UINT UVar6;
  CHAR *lParam;
  int lParam_00;
  BOOL bEnable;
  WPARAM WVar7;
  LPARAM LVar8;
  int *piStack_32c;
  LRESULT local_328;
  int *local_324;
  undefined4 local_31c [5];
  CHAR aCStack_308 [4];
  int local_304;
  undefined1 uStack_209;
  WCHAR aWStack_208 [260];
  
  GetWindowLongA(param_1,8);
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0x130b;
  pHVar2 = GetDlgItem(param_1,0x430);
  WVar7 = SendMessageA(pHVar2,UVar6,WVar7,LVar8);
  puVar5 = local_31c;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_31c;
  local_31c[0] = 8;
  UVar6 = 0x1305;
  pHVar2 = GetDlgItem(param_1,0x430);
  SendMessageA(pHVar2,UVar6,WVar7,(LPARAM)puVar5);
  if (local_304 == 0) {
    return;
  }
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0x14b;
  piVar1 = *(int **)(*(int *)(local_304 + 0xc) + 0x218);
  local_328 = 0;
  local_324 = piVar1;
  pHVar2 = GetDlgItem(param_1,0x3c);
  SendMessageA(pHVar2,UVar6,WVar7,LVar8);
  iVar4 = (**(code **)(*piVar1 + 0x34))(piVar1,&local_328);
  if (iVar4 == 0) {
    (**(code **)(*piVar1 + 0x40))(piVar1,&stack0xfffffccc);
    iVar4 = 0;
    if (0 < unaff_EBX) {
      do {
        (**(code **)(*piStack_32c + 0x38))(piStack_32c,iVar4,aWStack_208,0x100);
        if ((&stack0x00000000 == (undefined1 *)0x208) || (aWStack_208[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_208,-1,aCStack_308,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x308) {
          aCStack_308[0] = '\0';
        }
        lParam = aCStack_308;
        uStack_209 = 0;
        WVar7 = 0;
        UVar6 = 0x143;
        pHVar2 = GetDlgItem(param_1,0x3c);
        WVar7 = SendMessageA(pHVar2,UVar6,WVar7,(LPARAM)lParam);
        UVar6 = 0x151;
        lParam_00 = iVar4;
        pHVar2 = GetDlgItem(param_1,0x3c);
        SendMessageA(pHVar2,UVar6,WVar7,lParam_00);
        iVar4 = iVar4 + 1;
      } while (iVar4 < unaff_EBX);
    }
    LVar8 = 0;
    WVar7 = 0;
    UVar6 = 0x146;
    pHVar2 = GetDlgItem(param_1,0x3c);
    LVar3 = SendMessageA(pHVar2,UVar6,WVar7,LVar8);
    if (LVar3 != 0) {
      if (unaff_EBP == -1) {
        WVar7 = 0;
        unaff_EBP = 0;
      }
      else {
        LVar8 = 0;
        WVar7 = 0;
        UVar6 = 0x146;
        pHVar2 = GetDlgItem(param_1,0x3c);
        local_328 = SendMessageA(pHVar2,UVar6,WVar7,LVar8);
        WVar7 = 0;
        if (0 < local_328) {
          do {
            LVar8 = 0;
            UVar6 = 0x150;
            wParam = WVar7;
            pHVar2 = GetDlgItem(param_1,0x3c);
            LVar3 = SendMessageA(pHVar2,UVar6,wParam,LVar8);
            if (unaff_EBP == LVar3) break;
            WVar7 = WVar7 + 1;
          } while ((int)WVar7 < local_328);
        }
      }
      (**(code **)(*piStack_32c + 0x3c))(piStack_32c,unaff_EBP);
      LVar8 = 0;
      UVar6 = 0x14e;
      pHVar2 = GetDlgItem(param_1,0x3c);
      SendMessageA(pHVar2,UVar6,WVar7,LVar8);
      bEnable = 1;
      goto LAB_01139d2d;
    }
  }
  bEnable = 0;
LAB_01139d2d:
  pHVar2 = GetDlgItem(param_1,0x3c);
  EnableWindow(pHVar2,bEnable);
  return;
}


