/* Module: vfplugs.dll
   Function: FUN_00470ce0
   Address: 00470ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00470ce0(void *this,int param_1)

{
  HWND hWnd;
  uint uVar1;
  HWND hWnd_00;
  
  hWnd = GetParent(*(HWND *)((int)this + 0x10));
  hWnd_00 = *(HWND *)((int)this + 0x10);
  uVar1 = GetDlgCtrlID(hWnd_00);
  SendMessageA(hWnd,0x111,uVar1 & 0xffff | param_1 << 0x10,(LPARAM)hWnd_00);
  return 1;
}


