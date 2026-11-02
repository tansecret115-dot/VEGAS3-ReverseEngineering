/* Module: vegas30.exe
   Function: FUN_004400d0
   Address: 004400d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004400d0(HWND param_1,undefined4 param_2,undefined4 *param_3)

{
  HWND pHVar1;
  BOOL BVar2;
  CHAR local_104 [260];
  
  _SfSetEditCtrlFont_8(param_1,0);
  SetWindowLongA(param_1,-0x15,(LONG)param_3);
  *param_3 = param_1;
  SetDlgItemTextA(param_1,0x62c,(LPCSTR)(param_3 + 6));
  _SfNanoTimeToText_20(local_104,&DAT_0064b110,param_3[2],param_3[3],0);
  SetDlgItemTextA(param_1,0x62a,local_104);
  if (param_3[0x88] != 0) {
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x62b);
    EnableWindow(pHVar1,BVar2);
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x7fe);
    EnableWindow(pHVar1,BVar2);
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x628);
    EnableWindow(pHVar1,BVar2);
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x629);
    EnableWindow(pHVar1,BVar2);
    return 1;
  }
  SetDlgItemTextA(param_1,0x62b,(LPCSTR)(param_3 + 0x47));
  CheckDlgButton(param_1,0x628,(uint)(param_3[0x8a] != 0));
  CheckDlgButton(param_1,0x629,(uint)(param_3[0x89] != 0));
  _SfNanoTimeToText_20(local_104,&DAT_0064b110,param_3[4],param_3[5],0);
  SetDlgItemTextA(param_1,0x7fe,local_104);
  return 1;
}


