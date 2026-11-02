/* Module: vidcap30.exe
   Function: FUN_004f6f40
   Address: 004f6f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f6f40(undefined4 param_1,HWND param_2,int param_3,code *param_4)

{
  int iVar1;
  LRESULT *pLVar2;
  WPARAM wParam;
  LRESULT local_28;
  int local_24;
  undefined4 local_4;
  
  pLVar2 = &local_28;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar2 = 0;
    pLVar2 = pLVar2 + 1;
  }
  local_28 = 4;
  if (param_3 == -0x10000) {
    param_3 = 0;
    wParam = 0;
  }
  else {
    wParam = 4;
  }
  for (local_24 = SendMessageA(param_2,0x110a,wParam,param_3); local_24 != 0;
      local_24 = SendMessageA(param_2,0x110a,1,local_24)) {
    FUN_004f6f40(param_1,param_2,local_24,param_4);
    SendMessageA(param_2,0x110c,0,(LPARAM)&local_28);
    (*param_4)(param_1,local_4);
  }
  return;
}


