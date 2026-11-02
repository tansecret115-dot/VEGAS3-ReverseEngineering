/* Module: pncrt.dll
   Function: _wstrdate
   Address: 7802dc40
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wstrdate(wchar_t *_Buffer)

{
  _SYSTEMTIME local_10;
  
                    /* 0x2dc40  561  _wstrdate */
  GetLocalTime(&local_10);
  _Buffer[5] = L'/';
  _Buffer[2] = L'/';
  _Buffer[8] = L'\0';
  *_Buffer = local_10.wMonth / 10 + L'0';
  _Buffer[1] = local_10.wMonth % 10 + L'0';
  _Buffer[3] = (short)((local_10._6_4_ & 0xffff) / 10) + L'0';
  _Buffer[4] = (short)((ulonglong)(local_10._6_4_ & 0xffff) % 10) + L'0';
  _Buffer[6] = (short)((uint)((ulonglong)local_10.wYear % 100) / 10) + L'0';
  _Buffer[7] = (short)(((ulonglong)local_10.wYear % 100) % 10) + L'0';
  return _Buffer;
}


