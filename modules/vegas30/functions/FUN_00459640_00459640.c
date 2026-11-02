/* Module: vegas30.exe
   Function: FUN_00459640
   Address: 00459640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00459640(int param_1)

{
  FUN_004530a0(param_1,0x7fff);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_00454f40(param_1);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xdfffffff;
  ReleaseCapture();
  _SfWheel_AutoScrollOriginIcon_8(param_1 + 0xe8,2);
  _SfWheel_AutoScrollTerminate_4(param_1 + 0xe8);
  UpdateWindow(*(HWND *)(param_1 + 4));
  return;
}


