/* Module: vegas30k.dll
   Function: FUN_01137f50
   Address: 01137f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01137f50(HWND param_1,int *param_2)

{
  int iVar1;
  uchar *_Source;
  HWND pHVar2;
  BOOL BVar3;
  
  iVar1 = _SfPlugIn_CreateList_12(param_2 + 1,1,0);
  param_2[2] = iVar1;
  param_2[3] = 0;
  param_2[7] = DAT_011dab90;
  param_2[8] = DAT_011dab94;
  param_2[9] = DAT_011dab98;
  iVar1 = DAT_011dab9c;
  param_2[4] = 0;
  param_2[10] = iVar1;
  _Source = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x10c0);
  _mbscpy((uchar *)(param_2 + 0xb),_Source);
  FUN_01137b10(param_1);
  FUN_01137eb0(param_1);
  if (*(int *)(*param_2 + 0xc) != 0) {
    BVar3 = 0;
    pHVar2 = GetDlgItem(param_1,0x424);
    EnableWindow(pHVar2,BVar3);
    BVar3 = 0;
    pHVar2 = GetDlgItem(param_1,0x423);
    EnableWindow(pHVar2,BVar3);
    BVar3 = 0;
    pHVar2 = GetDlgItem(param_1,4);
    EnableWindow(pHVar2,BVar3);
    BVar3 = 0;
    pHVar2 = GetDlgItem(param_1,3);
    EnableWindow(pHVar2,BVar3);
  }
  return;
}


