/* Module: vegas30.exe
   Function: FUN_005c6660
   Address: 005c6660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c6660(int param_1)

{
  uchar *_Dest;
  int iVar1;
  
  _Dest = (uchar *)(param_1 + 0x584);
  if (*(char *)(param_1 + 0x584) != '\0') {
    iVar1 = _SfDoesFileExist_4(_Dest);
    if (iVar1 != 0) {
      DeleteFileA((LPCSTR)_Dest);
      _mbscat(_Dest,".sfl");
      DeleteFileA((LPCSTR)_Dest);
      *_Dest = '\0';
    }
  }
  *(undefined4 *)(param_1 + 0x688) = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  *(undefined4 *)(param_1 + 0x68c) = 0;
  *(undefined4 *)(param_1 + 0x694) = 0;
  *(undefined4 *)(param_1 + 0x69c) = 0xffffffff;
  return;
}


