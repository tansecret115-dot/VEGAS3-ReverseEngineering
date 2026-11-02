/* Module: pngu3266.dll
   Function: Beep
   Address: 606127f9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::Beep(void) */

void __cdecl CPNSystemInfo::Beep(void)

{
                    /* 0x227f9  824  ?Beep@CPNSystemInfo@@SAXXZ */
  MessageBeep(0x30);
  return;
}


