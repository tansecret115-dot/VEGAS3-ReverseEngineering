/* Module: sfnetmedia.dll
   Function: FUN_0040ed20
   Address: 0040ed20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0040ed20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  WPARAM wParam;
  undefined4 local_144;
  WPARAM local_140;
  undefined4 local_13c;
  uchar *local_130;
  undefined4 local_11c [2];
  undefined4 local_114;
  uchar local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 4),600);
  local_11c[0] = 1;
  local_114 = param_3;
  wParam = SendMessageA(hWnd,0x100d,0,(LPARAM)local_11c);
  if (-1 < (int)wParam) {
    FUN_004156f0(local_104,"%d");
    local_130 = local_104;
    local_144 = 1;
    local_13c = 1;
    local_140 = wParam;
    SendMessageA(hWnd,0x1006,0,(LPARAM)&local_144);
    SendMessageA(hWnd,0x102a,wParam,0);
  }
  return 0;
}


