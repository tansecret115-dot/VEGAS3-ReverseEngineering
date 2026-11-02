/* Module: vegas30.exe
   Function: FUN_005293d0
   Address: 005293d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005293d0(int param_1,undefined4 param_2)

{
  tagPOINT local_8;
  
  if ((*(byte *)(param_1 + 0x18c) & 1) != 0) {
    local_8.x = (LONG)(short)param_2;
    local_8.y = (LONG)(short)((uint)param_2 >> 0x10);
    ClientToScreen(*(HWND *)(param_1 + 8),&local_8);
    ReleaseCapture();
    FUN_0040c570(DAT_0064762c,*(undefined4 *)(param_1 + 0x188),local_8.x,local_8.y,0);
    if (*(int *)(param_1 + 0x188) != 0) {
      FUN_00524190(param_1);
    }
    *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x18c) & 0xfffffffe;
    SetCursor(*(HCURSOR *)(param_1 + 400));
  }
  return 0;
}


