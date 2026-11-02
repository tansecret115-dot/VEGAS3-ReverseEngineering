/* Module: pncrt.dll
   Function: _strtime
   Address: 7802da10
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _strtime(char *_Buffer)

{
  _SYSTEMTIME local_10;
  
                    /* 0x2da10  468  _strtime */
  GetLocalTime(&local_10);
  _Buffer[5] = ':';
  _Buffer[2] = ':';
  *_Buffer = (char)(local_10.wHour / 10) + '0';
  _Buffer[8] = '\0';
  _Buffer[1] = (char)((ulonglong)(uint)local_10.wHour % 10) + '0';
  _Buffer[3] = (char)(local_10.wMinute / 10) + '0';
  _Buffer[4] = (char)((ulonglong)(uint)local_10.wMinute % 10) + '0';
  _Buffer[6] = (char)(local_10.wSecond / 10) + '0';
  _Buffer[7] = (char)((ulonglong)(uint)local_10.wSecond % 10) + '0';
  return _Buffer;
}


