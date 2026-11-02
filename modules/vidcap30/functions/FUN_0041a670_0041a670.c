/* Module: vidcap30.exe
   Function: FUN_0041a670
   Address: 0041a670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a670(HWND param_1,int *param_2)

{
  int iVar1;
  UINT UVar2;
  int iVar3;
  CHAR local_20 [32];
  
  iVar1 = *param_2;
  UVar2 = IsDlgButtonChecked(param_1,0x9c53);
  *(UINT *)(iVar1 + 0x460) = UVar2;
  GetDlgItemTextA(param_1,0x9c54,local_20,0x1e);
  iVar3 = _SfTextToLongToken_8(local_20,0);
  if (iVar3 < 1) {
    *(undefined4 *)(iVar1 + 0x468) = 1;
    return;
  }
  if (9 < iVar3) {
    iVar3 = 9;
  }
  *(int *)(iVar1 + 0x468) = iVar3;
  return;
}


