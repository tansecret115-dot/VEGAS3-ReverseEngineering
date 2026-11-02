/* Module: sftrans1.dll
   Function: FUN_00529100
   Address: 00529100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00529100(int param_1,int param_2)

{
  HWND hWnd;
  uint uVar1;
  HWND hWnd_00;
  
  hWnd = GetParent(*(HWND *)(param_1 + 0x10));
  hWnd_00 = *(HWND *)(param_1 + 0x10);
  uVar1 = GetDlgCtrlID(hWnd_00);
  SendMessageA(hWnd,0x111,uVar1 & 0xffff | param_2 << 0x10,(LPARAM)hWnd_00);
  return 1;
}


