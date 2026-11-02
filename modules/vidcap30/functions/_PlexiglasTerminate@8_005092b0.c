/* Module: vidcap30.exe
   Function: _PlexiglasTerminate@8
   Address: 005092b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PlexiglasTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x1092b0  200  _PlexiglasTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


