/* Module: vidcap30.exe
   Function: FUN_0041a230
   Address: 0041a230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041a230(HWND param_1,HWND param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  UINT UVar4;
  WPARAM wParam;
  LPARAM LVar5;
  undefined4 local_48;
  undefined4 local_44;
  CHAR local_40 [64];
  
  local_48 = 0x9c54;
  local_44 = 0x9c55;
  switch(param_3) {
  case 0x9c4a:
    if (param_4 == 1) {
      LVar5 = 0;
      wParam = 0;
      UVar4 = 0x147;
      pHVar2 = GetDlgItem(param_1,param_3);
      LVar3 = SendMessageA(pHVar2,UVar4,wParam,LVar5);
      if (*(int *)(*param_5 + 0x598) != LVar3) {
        *(LRESULT *)(*param_5 + 0x598) = LVar3;
        _mbscpy((uchar *)(*param_5 + 0x494),(&PTR_DAT_005b3dd8)[LVar3]);
        LVar5 = 0;
        UVar4 = 0x468;
        pHVar2 = GetParent(param_1);
        SendMessageA(pHVar2,UVar4,(WPARAM)param_1,LVar5);
        param_5[2] = 1;
        return 1;
      }
    }
    break;
  case 0x9c53:
    UVar4 = IsDlgButtonChecked(param_1,0x9c53);
    _SfDlgEnableControls_16(param_1,&local_48,2,UVar4);
    LVar5 = 0;
    UVar4 = 0x468;
    pHVar2 = GetParent(param_1);
    SendMessageA(pHVar2,UVar4,(WPARAM)param_1,LVar5);
    param_5[2] = 1;
    return 1;
  case 0x9c54:
    if (param_4 == 0x300) {
      GetWindowTextA(param_2,local_40,0x40);
      iVar1 = _SfTextToLongToken_8(local_40,0);
      if (iVar1 != *(int *)(*param_5 + 0x468)) {
        LVar5 = 0;
        UVar4 = 0x468;
        pHVar2 = GetParent(param_1);
        SendMessageA(pHVar2,UVar4,(WPARAM)param_1,LVar5);
        param_5[2] = 1;
        return 1;
      }
    }
    break;
  case 0x9c56:
    FUN_0041a3f0(param_1,param_5);
  }
  return 1;
}


