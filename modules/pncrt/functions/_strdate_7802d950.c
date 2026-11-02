/* Module: pncrt.dll
   Function: _strdate
   Address: 7802d950
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _strdate(char *_Buffer)

{
  _SYSTEMTIME local_10;
  
                    /* 0x2d950  456  _strdate */
  GetLocalTime(&local_10);
  _Buffer[5] = '/';
  _Buffer[2] = '/';
  _Buffer[8] = '\0';
  *_Buffer = (char)(local_10.wMonth / 10) + '0';
  _Buffer[1] = (char)((ulonglong)(uint)local_10.wMonth % 10) + '0';
  _Buffer[3] = (char)((local_10._6_4_ & 0xffff) / 10) + '0';
  _Buffer[4] = (char)((ulonglong)(local_10._6_4_ & 0xffff) % 10) + '0';
  _Buffer[6] = (char)((uint)((ulonglong)local_10.wYear % 100) / 10) + '0';
  _Buffer[7] = (char)(((ulonglong)local_10.wYear % 100) % 10) + '0';
  return _Buffer;
}


