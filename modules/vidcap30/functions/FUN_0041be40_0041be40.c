/* Module: vidcap30.exe
   Function: FUN_0041be40
   Address: 0041be40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041be40(HWND param_1,int *param_2)

{
  UINT UVar1;
  int iVar2;
  CHAR local_28 [40];
  
  local_28[0] = '\0';
  UVar1 = IsDlgButtonChecked(param_1,0x519);
  *(UINT *)(*param_2 + 0x12b8) = UVar1;
  GetDlgItemTextA(param_1,0x518,local_28,0x28);
  iVar2 = _SfTextToLongToken_8(local_28,0);
  iVar2 = iVar2 * 1000;
  if (iVar2 < 1000) {
    iVar2 = 1000;
  }
  else if (600000 < iVar2) {
    *(undefined4 *)(*param_2 + 0x12bc) = 600000;
    return;
  }
  *(int *)(*param_2 + 0x12bc) = iVar2;
  return;
}


