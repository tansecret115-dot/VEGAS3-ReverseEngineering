/* Module: sftrans1.dll
   Function: FUN_00471750
   Address: 00471750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00471750(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  HWND hWnd;
  double local_158;
  double local_150;
  
  hWnd = GetDlgItem((HWND)param_1[0xc],0x5af);
  if (param_3 == 0x5af) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0x836:
    case 0x838:
    case 0x839:
    case 0x83a:
      SendMessageA(hWnd,0x805,0,(LPARAM)&local_158);
      *(double *)(param_1 + 0x1c) = (local_158 + local_158) - _DAT_00555908;
      *(double *)(param_1 + 0x1e) = (local_150 + local_150) - _DAT_00555908;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x837:
      param_1[0x1c] = 0;
      param_1[0x1e] = 0;
      param_1[0x1d] = 0;
      param_1[0x1f] = 0;
      (**(code **)(*param_1 + 0x2c))(param_1);
    }
  }
  return 0;
}


