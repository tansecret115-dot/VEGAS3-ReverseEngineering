/* Module: vidcap30.exe
   Function: FUN_004f4690
   Address: 004f4690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f4690(HWND param_1,int param_2)

{
  LRESULT LVar1;
  tagRECT local_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 == 0) {
    FUN_004f4640(param_1);
  }
  else {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    GetClientRect(param_1,&local_24);
    while( true ) {
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
      LVar1 = SendMessageA(param_1,0x1012,0,(LPARAM)&local_14);
      if ((LVar1 != -1) || ((local_24.left + local_24.right) / 2 == local_14)) break;
      if ((local_24.top + local_24.bottom) / 2 == local_10) {
        return;
      }
    }
  }
  return;
}


