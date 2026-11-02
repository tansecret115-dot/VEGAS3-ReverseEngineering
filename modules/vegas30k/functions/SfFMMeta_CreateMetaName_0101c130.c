/* Module: vegas30k.dll
   Function: SfFMMeta_CreateMetaName
   Address: 0101c130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_CreateMetaName(char const *,char *,long,int) */

long SfFMMeta_CreateMetaName(char *param_1,char *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uchar *_Dest;
  
                    /* 0x1c130  383  ?SfFMMeta_CreateMetaName@@YGJPBDPADJH@Z */
  iVar1 = lstrlenA(param_1);
  iVar2 = lstrlenA(".sfl");
  if ((uint)param_3 < (uint)(iVar1 + 1 + iVar2)) {
    return -0x7ff8ffa9;
  }
  _mbscpy((uchar *)param_2,(uchar *)param_1);
  if (param_4 == 0) {
    _Dest = (uchar *)_SfGetFileNameExtensionPtrA_4(param_2);
    _mbscpy(_Dest,".sfl");
    return 0;
  }
  _mbscat((uchar *)param_2,".sfl");
  return 0;
}


