/* Module: vegas30k.dll
   Function: Transport_StopRecMonitor
   Address: 0117f5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_StopRecMonitor(void) */

long Transport_StopRecMonitor(void)

{
  int iVar1;
  long lVar2;
  
                    /* 0x17f5c0  579  ?Transport_StopRecMonitor@@YGJXZ */
  if (DAT_012b0b2c == (int *)0x0) {
    return -0x7fff0001;
  }
  Transport_IsPlaying();
  iVar1 = Transport_IsPreviewPlaying();
  Transport_IsRecording();
  Transport_IsRecMonitoring();
  if (iVar1 != 0) {
    lVar2 = FUN_0117f520(0);
    return lVar2;
  }
  lVar2 = (**(code **)(*DAT_012b0b2c + 0x84))(DAT_012b0b2c,0x10800000);
  return lVar2;
}


