/* Module: vegas30k.dll
   Function: Mixer_StartRecMonitor
   Address: 0117e9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_StartRecMonitor(unsigned long) */

long Mixer_StartRecMonitor(ulong param_1)

{
  long lVar1;
  
                    /* 0x17e9a0  241  ?Mixer_StartRecMonitor@@YGJK@Z */
  lVar1 = Transport_StartRecMonitor();
  return lVar1;
}


