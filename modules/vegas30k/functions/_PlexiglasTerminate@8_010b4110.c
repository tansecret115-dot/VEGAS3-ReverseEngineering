/* Module: vegas30k.dll
   Function: _PlexiglasTerminate@8
   Address: 010b4110
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PlexiglasTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0xb4110  697  _PlexiglasTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


