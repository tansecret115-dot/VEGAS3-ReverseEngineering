/* Module: vegas30k.dll
   Function: Transport_StartRecMonitor
   Address: 0117f550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_StartRecMonitor(void) */

long Transport_StartRecMonitor(void)

{
  int iVar1;
  int iVar2;
  
                    /* 0x17f550  575  ?Transport_StartRecMonitor@@YGJXZ */
  if (DAT_012b0b2c == (int *)0x0) {
    return -0x7fff0001;
  }
  Transport_IsPlaying();
  iVar1 = Transport_IsPreviewPlaying();
  Transport_IsRecording();
  iVar2 = Transport_IsRecMonitoring();
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      Transport_StopRecMonitor();
    }
  }
  else {
    FUN_0117f520(0);
  }
  iVar1 = (**(code **)(*DAT_012b0b2c + 0x80))(DAT_012b0b2c,0x10800000,0,0);
  if (iVar1 < 0) {
    FUN_01183360();
  }
  return iVar1;
}


