/* Module: vegas30.exe
   Function: FUN_004100d0
   Address: 004100d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004100d0(LPCSTR param_1)

{
  undefined4 local_c;
  int local_8;
  LPCSTR local_4;
  
  local_8 = 0;
  if (DAT_0064b514 != (HWND)0x0) {
    local_c = 0;
    if (param_1 != (LPCSTR)0x0) {
      local_8 = lstrlenA(param_1);
      local_8 = local_8 + 1;
    }
    local_4 = param_1;
    SendMessageA(DAT_0064b514,0x4a,DAT_00647624,(LPARAM)&local_c);
  }
  return;
}


