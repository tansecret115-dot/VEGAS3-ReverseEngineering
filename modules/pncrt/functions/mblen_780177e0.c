/* Module: pncrt.dll
   Function: mblen
   Address: 780177e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl mblen(char *_Ch,size_t _MaxCount)

{
  int iVar1;
  
                    /* 0x177e0  668  mblen */
  if (((_Ch != (char *)0x0) && (*_Ch != 0)) && (_MaxCount != 0)) {
    if ((_pctype[(uint)(byte)*_Ch * 2 + 1] & 0x80) == 0) {
      iVar1 = MultiByteToWideChar(__lc_codepage,9,_Ch,1,(LPWSTR)0x0,0);
      return (-(uint)(iVar1 != 0) & 2) - 1;
    }
    if ((1 < __mb_cur_max) && (__mb_cur_max <= (int)_MaxCount)) {
      iVar1 = MultiByteToWideChar(__lc_codepage,9,_Ch,__mb_cur_max,(LPWSTR)0x0,0);
      if (iVar1 != 0) {
        return __mb_cur_max;
      }
    }
    return -1;
  }
  return 0;
}


