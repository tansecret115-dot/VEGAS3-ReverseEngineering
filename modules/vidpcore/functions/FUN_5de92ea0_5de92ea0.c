/* Module: vidpcore.dll
   Function: FUN_5de92ea0
   Address: 5de92ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5de92ea0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  HWND hWnd;
  double local_158;
  double local_150;
  
  hWnd = GetDlgItem((HWND)param_1[0xc],0x563);
  if (param_3 == 0x563) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0x836:
    case 0x838:
      param_1[0x13] = (int)(float)*(double *)(param_4 + 0x168);
      param_1[0x14] = (int)(float)*(double *)(param_4 + 0x170);
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x837:
      param_1[0x13] = 0x3f000000;
      param_1[0x14] = 0x3f000000;
      (**(code **)(*param_1 + 0x2c))(param_1);
      break;
    case 0x839:
    case 0x83a:
      SendMessageA(hWnd,0x805,0,(LPARAM)&local_158);
      param_1[0x13] = (int)(float)local_158;
      param_1[0x14] = (int)(float)local_150;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  return 0;
}


