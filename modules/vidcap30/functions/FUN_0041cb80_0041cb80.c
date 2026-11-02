/* Module: vidcap30.exe
   Function: FUN_0041cb80
   Address: 0041cb80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041cb80(int *param_1,HWND param_2)

{
  int iVar1;
  HWND pHVar2;
  WPARAM WVar3;
  BOOL bEnable;
  CHAR local_20 [32];
  
  iVar1 = *param_1;
  CheckDlgButton(param_2,0x4d5,*(UINT *)(iVar1 + 0xf9c));
  CheckDlgButton(param_2,0x4ed,*(UINT *)(*param_1 + 0x1040));
  CheckDlgButton(param_2,0x4ee,(uint)(*(int *)(*param_1 + 0x5a8) == 0));
  bEnable = *(BOOL *)(*param_1 + 0x1040);
  pHVar2 = GetDlgItem(param_2,0x4ee);
  EnableWindow(pHVar2,bEnable);
  pHVar2 = GetDlgItem(param_2,0x489);
  WVar3 = FUN_0041cc90(*(undefined4 *)(iVar1 + 0x1008),*(undefined4 *)(iVar1 + 0x100c));
  if (WVar3 == 0xffffffff) {
    _SfDoubleToText_20(local_20,*(undefined4 *)(iVar1 + 0x1008),*(undefined4 *)(iVar1 + 0x100c),3,0)
    ;
    SetWindowTextA(pHVar2,local_20);
  }
  else {
    SendMessageA(pHVar2,0x14e,WVar3,0);
  }
  pHVar2 = GetDlgItem(param_2,0x48a);
  WVar3 = FUN_0041ccc0(*(undefined4 *)(iVar1 + 0xfb0),*(undefined4 *)(iVar1 + 0xfb4));
  if (WVar3 != 0xffffffff) {
    SendMessageA(pHVar2,0x14e,WVar3,0);
  }
  return;
}


