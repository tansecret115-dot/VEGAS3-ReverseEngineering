/* Module: pncrt.dll
   Function: ctime
   Address: 7802dfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl ctime(time_t *_Time)

{
  tm *_Tm;
  char *pcVar1;
  
                    /* 0x2dfa0  592  ctime */
  _Tm = localtime(_Time);
  if (_Tm != (tm *)0x0) {
    pcVar1 = asctime(_Tm);
    return pcVar1;
  }
  return (char *)0x0;
}


