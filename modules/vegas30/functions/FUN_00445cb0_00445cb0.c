/* Module: vegas30.exe
   Function: FUN_00445cb0
   Address: 00445cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00445cb0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00445b50(param_1);
  FUN_0053ec50(*(undefined4 *)(param_1 + 0x80),uVar1);
  FUN_0053eb20(*(undefined4 *)(param_1 + 0x80));
  InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x80) + 4),(RECT *)0x0,0);
  return;
}


