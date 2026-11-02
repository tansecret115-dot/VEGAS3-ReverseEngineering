/* Module: vegas30.exe
   Function: FUN_00440210
   Address: 00440210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00440210(undefined4 *param_1)

{
  UINT UVar1;
  undefined8 uVar2;
  undefined1 local_108 [4];
  CHAR local_104 [260];
  
  GetDlgItemTextA((HWND)*param_1,0x62c,(LPSTR)(param_1 + 6),0x104);
  GetDlgItemTextA((HWND)*param_1,0x62a,local_104,0x104);
  uVar2 = _SfTextToNanoTimeTokenEx_40
                    (local_104,&DAT_0064b110,0,param_1[2],param_1[3],0,0,0,0x40000000,local_108);
  *(undefined8 *)(param_1 + 2) = uVar2;
  if (param_1[0x88] == 0) {
    GetDlgItemTextA((HWND)*param_1,0x62b,(LPSTR)(param_1 + 0x47),0x104);
    UVar1 = IsDlgButtonChecked((HWND)*param_1,0x628);
    param_1[0x8a] = UVar1;
    UVar1 = IsDlgButtonChecked((HWND)*param_1,0x629);
    param_1[0x89] = UVar1;
    GetDlgItemTextA((HWND)*param_1,0x7fe,local_104,0x104);
    uVar2 = _SfTextToNanoTimeTokenEx_40
                      (local_104,&DAT_0064b110,0,param_1[4],param_1[5],0,0,0,0x40000000,local_108);
    *(undefined8 *)(param_1 + 4) = uVar2;
  }
  return;
}


