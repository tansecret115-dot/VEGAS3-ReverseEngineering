/* Module: sftrans1.dll
   Function: FUN_004ab250
   Address: 004ab250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ab250(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  HWND hWnd;
  double local_158;
  double local_150;
  
  hWnd = GetDlgItem((HWND)param_1[0xc],0x41e);
  if (param_3 == 0x41e) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0x836:
    case 0x838:
    case 0x839:
      SendMessageA(hWnd,0x805,0,(LPARAM)&local_158);
      param_1[0x13] =
           (int)(float)(((float10)local_158 + (float10)local_158) - (float10)_DAT_00555908);
      param_1[0x14] =
           (int)(float)(((float10)local_150 + (float10)local_150) - (float10)_DAT_00555908);
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x837:
      FUN_004aca30();
    }
  }
  return 0;
}


