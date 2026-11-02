/* Module: vegas30.exe
   Function: FUN_005fb800
   Address: 005fb800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fb800(LPARAM param_1)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_00647208) {
    PostMessageA(DAT_00647624,0x61d,1,param_1);
    return 0;
  }
  _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0xb,param_1,0,0);
  FUN_005fc6f0();
  DAT_0064767c = DAT_0064767c | 4;
  return 0;
}


