/* Module: vegas30k.dll
   Function: Mixer_StopRecMonitor
   Address: 0117e9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_StopRecMonitor(unsigned long) */

long Mixer_StopRecMonitor(ulong param_1)

{
  long lVar1;
  
                    /* 0x17e9b0  243  ?Mixer_StopRecMonitor@@YGJK@Z */
  lVar1 = Transport_StopRecMonitor();
  Transport_StartRecMonitor();
  return lVar1;
}


