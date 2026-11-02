/* Module: mp3plug.dll
   Function: FUN_5f6ba9a0
   Address: 5f6ba9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6ba9a0(uchar *param_1,uchar *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uchar *_Dest;
  
  iVar1 = lstrlenA((LPCSTR)param_1);
  iVar2 = lstrlenA(".sfl");
  if (param_3 < (uint)(iVar1 + 1 + iVar2)) {
    return 0x80070057;
  }
  _mbscpy(param_2,param_1);
  if (param_4 == 0) {
    _Dest = (uchar *)FUN_5f6b37f0((LPCSTR)param_2);
    _mbscpy(_Dest,".sfl");
    return 0;
  }
  _mbscat(param_2,".sfl");
  return 0;
}


