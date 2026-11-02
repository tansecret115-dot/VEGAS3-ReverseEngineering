/* Module: vidcap30.exe
   Function: FUN_0045cb80
   Address: 0045cb80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045cb80(HWND param_1,WPARAM param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_48 [32];
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined1 *local_14;
  
  iVar1 = FUN_0045b740(param_3);
  if (iVar1 == 0) {
    local_14 = &DAT_00586c70;
  }
  else {
    FUN_0045b550(param_3,local_48);
    local_14 = local_48;
  }
  local_20 = 1;
  SendMessageA(param_1,0x102e,param_2,(LPARAM)local_28);
  return;
}


