/* Module: vegas30.exe
   Function: FUN_005fb6a0
   Address: 005fb6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_005fb6a0(void)

{
  long lVar1;
  
  DAT_0065e528 = DAT_0064b138;
  _DAT_0065e52c = DAT_00647630;
  Transport_SetClientContext(FUN_005fbce0,0x65e528);
  _DAT_0064b15c = DAT_0065e528;
  Mixer_SetContext(&DAT_0064b15c);
  lVar1 = Transport_StartRecMonitor();
  if (lVar1 < 0) {
    _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0xc,lVar1,0,0);
  }
  return lVar1;
}


