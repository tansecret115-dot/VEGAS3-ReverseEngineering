/* Module: vegas30.exe
   Function: FUN_005fb860
   Address: 005fb860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fb860(LPARAM param_1)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_00647208) {
    PostMessageA(DAT_00647624,0x61d,0,param_1);
    return 0;
  }
  _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0xb,param_1,0,0);
  DAT_0064767c = DAT_0064767c | 4;
  return 0;
}


