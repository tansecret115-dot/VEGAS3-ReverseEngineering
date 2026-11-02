/* Module: vidcap30.exe
   Function: FUN_0045e540
   Address: 0045e540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045e540(HWND param_1,int *param_2)

{
  undefined4 uVar1;
  UINT UVar2;
  HWND pHVar3;
  int iVar4;
  CHAR local_20 [32];
  
  iVar4 = *param_2;
  GetDlgItemTextA(param_1,0x4d2,local_20,0x20);
  uVar1 = _SfTextToDWordToken_8(local_20,0);
  *(undefined4 *)(iVar4 + 0xbc0) = uVar1;
  UVar2 = IsDlgButtonChecked(param_1,0x504);
  *(UINT *)(*param_2 + 0xbc4) = UVar2;
  GetDlgItemTextA(param_1,0x505,local_20,0x20);
  uVar1 = _SfTextToDWordToken_8(local_20,0);
  *(undefined4 *)(iVar4 + 0xbc8) = uVar1;
  pHVar3 = GetDlgItem(param_1,0x4d1);
  iVar4 = FUN_0045cbf0(pHVar3,param_2);
  if (iVar4 == 0) {
    _SfMessageBox_16(param_1,"Not all of the capture folders could be saved.","Error saving folders"
                     ,0x10);
  }
  return;
}


