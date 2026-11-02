/* Module: vidcap30.exe
   Function: FUN_0041cd00
   Address: 0041cd00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041cd00(HWND param_1,int *param_2)

{
  int iVar1;
  UINT UVar2;
  HWND pHVar3;
  LRESULT LVar4;
  WPARAM wParam;
  float10 fVar5;
  CHAR local_20 [32];
  
  iVar1 = *param_2;
  UVar2 = IsDlgButtonChecked(param_1,0x4d5);
  *(UINT *)(*param_2 + 0xf9c) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0x4ed);
  *(UINT *)(*param_2 + 0x1040) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0x4ee);
  *(uint *)(*param_2 + 0x5a8) = (uint)(UVar2 == 0);
  pHVar3 = GetDlgItem(param_1,0x489);
  LVar4 = SendMessageA(pHVar3,0x147,0,0);
  if (LVar4 == -1) {
    GetWindowTextA(pHVar3,local_20,0x20);
    fVar5 = (float10)_SfTextToDoubleTokenEx_32
                               (local_20,*(undefined4 *)(iVar1 + 0x1008),
                                *(undefined4 *)(iVar1 + 0x100c),0,0x3fe00000,0,0x40000000,0);
    *(double *)(iVar1 + 0x1008) = (double)fVar5;
  }
  else {
    *(undefined4 *)(iVar1 + 0x1008) = *(undefined4 *)(&DAT_00588f50 + LVar4 * 2);
    *(undefined4 *)(iVar1 + 0x100c) = *(undefined4 *)((int)&DAT_00588f50 + LVar4 * 0x10 + 4);
    if (LVar4 == 0) {
      *(undefined4 *)(iVar1 + 0x1010) = 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0x1010) = 0;
    }
  }
  pHVar3 = GetDlgItem(param_1,0x48a);
  wParam = SendMessageA(pHVar3,0x147,0,0);
  if (wParam != 0xffffffff) {
    LVar4 = SendMessageA(pHVar3,0x150,wParam,0);
    *(LRESULT *)(iVar1 + 0xfb0) = LVar4;
    *(LRESULT *)(iVar1 + 0xfb4) = LVar4 >> 0x1f;
  }
  return;
}


