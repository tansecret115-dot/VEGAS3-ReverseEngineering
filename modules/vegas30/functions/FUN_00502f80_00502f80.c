/* Module: vegas30.exe
   Function: FUN_00502f80
   Address: 00502f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00502f80(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 local_108 [4];
  CHAR local_104 [260];
  
  GetDlgItemTextA((HWND)*param_1,0x7fb,(LPSTR)(param_1 + 0x104),0x400);
  GetDlgItemTextA((HWND)*param_1,0x7fd,(LPSTR)(param_1 + 4),0x400);
  GetDlgItemTextA((HWND)*param_1,2000,(LPSTR)(param_1 + 0x204),0x400);
  GetDlgItemTextA((HWND)*param_1,0x7fc,local_104,0x104);
  uVar1 = _SfTextToNanoTimeTokenEx_40
                    (local_104,&DAT_0064b110,0,param_1[2],param_1[3],0,0,0,0x40000000,local_108);
  *(undefined8 *)(param_1 + 2) = uVar1;
  return;
}


