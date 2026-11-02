/* Module: vidcap30.exe
   Function: FUN_004f7f00
   Address: 004f7f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004f7f00(HWND param_1,int param_2,LPCSTR param_3)

{
  int lParam;
  int iVar1;
  WPARAM wParam;
  LPARAM lParam_00;
  CHAR local_104 [260];
  
  if (param_2 == -0x10000) {
    wParam = 0;
    lParam_00 = 0;
  }
  else {
    wParam = 4;
    lParam_00 = param_2;
  }
  lParam = SendMessageA(param_1,0x110a,wParam,lParam_00);
  while( true ) {
    if (lParam == 0) {
      return 0;
    }
    FUN_004f7f90(param_1,lParam,param_2,local_104);
    iVar1 = lstrcmpiA(param_3,local_104);
    if (iVar1 == 0) break;
    lParam = SendMessageA(param_1,0x110a,1,lParam);
  }
  return lParam;
}


