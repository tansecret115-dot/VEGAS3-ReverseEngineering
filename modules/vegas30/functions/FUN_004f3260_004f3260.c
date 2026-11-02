/* Module: vegas30.exe
   Function: FUN_004f3260
   Address: 004f3260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f3260(HWND param_1,int *param_2)

{
  int iVar1;
  UINT UVar2;
  int iVar3;
  CHAR local_20 [32];
  
  iVar1 = *param_2;
  UVar2 = IsDlgButtonChecked(param_1,0x47e);
  *(UINT *)(iVar1 + 0x45c) = UVar2;
  GetDlgItemTextA(param_1,0x47f,local_20,0x1e);
  iVar3 = _SfTextToLongToken_8(local_20,0);
  if (iVar3 < 1) {
    *(undefined4 *)(iVar1 + 0x464) = 1;
    return;
  }
  if (9 < iVar3) {
    iVar3 = 9;
  }
  *(int *)(iVar1 + 0x464) = iVar3;
  return;
}


