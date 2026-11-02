/* Module: vidcap30.exe
   Function: FUN_004f8050
   Address: 004f8050
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004f8050(HWND param_1,int param_2,LPCSTR param_3)

{
  int lParam;
  int iVar1;
  WPARAM wParam;
  CHAR local_104 [260];
  
  if (param_2 == -0x10000) {
    param_2 = 0;
    wParam = 0;
  }
  else {
    wParam = 4;
  }
  lParam = SendMessageA(param_1,0x110a,wParam,param_2);
  do {
    if (lParam == 0) {
      return 0;
    }
    iVar1 = FUN_004f6ec0(param_1,lParam);
    if (iVar1 != 0) {
      FUN_004f8340(param_1,lParam,local_104);
      iVar1 = lstrcmpiA(param_3,local_104);
      if (iVar1 == 0) {
        return lParam;
      }
      iVar1 = FUN_004f8050(param_1,lParam,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    lParam = SendMessageA(param_1,0x110a,1,lParam);
  } while( true );
}


