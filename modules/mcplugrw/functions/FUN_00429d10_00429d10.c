/* Module: mcplugrw.dll
   Function: FUN_00429d10
   Address: 00429d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429d10(HWND param_1,LPRECT param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  GetClientRect(param_1,param_2);
  if ((uVar1 & 0x100000) != 0) {
    iVar2 = GetSystemMetrics(3);
    param_2->bottom = param_2->bottom + iVar2;
  }
  if ((uVar1 & 0x200000) != 0) {
    iVar2 = GetSystemMetrics(2);
    param_2->right = param_2->right + iVar2;
  }
  return;
}


