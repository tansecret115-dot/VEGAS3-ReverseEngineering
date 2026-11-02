/* Module: vegas30.exe
   Function: FUN_00456560
   Address: 00456560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00456560(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  FUN_00455c70(param_1,5);
  RedrawWindow(*(HWND *)(param_1 + 4),(RECT *)0x0,(HRGN)0x0,0x101);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x200;
  return;
}


