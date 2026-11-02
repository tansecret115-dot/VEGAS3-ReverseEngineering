/* Module: pncrt.dll
   Function: _wstrtime
   Address: 7802dd10
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wstrtime(wchar_t *_Buffer)

{
  _SYSTEMTIME local_10;
  
                    /* 0x2dd10  562  _wstrtime */
  GetLocalTime(&local_10);
  _Buffer[5] = L':';
  _Buffer[2] = L':';
  _Buffer[8] = L'\0';
  *_Buffer = local_10.wHour / 10 + L'0';
  _Buffer[1] = local_10.wHour % 10 + L'0';
  _Buffer[3] = local_10.wMinute / 10 + L'0';
  _Buffer[4] = local_10.wMinute % 10 + L'0';
  _Buffer[6] = local_10.wSecond / 10 + L'0';
  _Buffer[7] = local_10.wSecond % 10 + L'0';
  return _Buffer;
}


