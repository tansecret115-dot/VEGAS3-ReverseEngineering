/* Module: vidcap30.exe
   Function: _StaticTerminate@8
   Address: 0050a280
   Source: Ghidra pseudocode (Stage 10 batch) */


void _StaticTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x10a280  721  _StaticTerminate@8 */
  if (DAT_006623f8 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_006623f8);
    DAT_006623f8 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


