/* Module: vidcap30.exe
   Function: riff_WriteANSIString
   Address: 004b6fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_WriteANSIString,12 */

undefined4 riff_WriteANSIString(HANDLE param_1,uchar *param_2,uint *param_3)

{
  uchar *_Source;
  int iVar1;
  uchar *_Dest;
  BOOL BVar2;
  uint _Size;
  undefined4 local_4;
  
                    /* 0xb6fb0  797  _riff_WriteANSIString@12 */
  _Source = param_2;
  local_4 = 0;
  iVar1 = lstrlenA((LPCSTR)param_2);
  _Size = iVar1 + 1;
  _Dest = calloc(1,_Size);
  if (_Dest == (uchar *)0x0) {
    return 0x8007000e;
  }
  _mbscpy(_Dest,_Source);
  BVar2 = WriteFile(param_1,_Dest,_Size,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    free(_Dest);
    return 0x8004e009;
  }
  free(_Dest);
  if ((_Size & 1) != 0) {
    BVar2 = WriteFile(param_1,&local_4,1,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return 0x8004e009;
    }
    _Size = iVar1 + 2;
  }
  *param_3 = _Size;
  return 0;
}


