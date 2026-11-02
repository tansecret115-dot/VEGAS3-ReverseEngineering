/* Module: vegas30k.dll
   Function: GetEntryName
   Address: 0106efc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryName(int,char *,unsigned int) */

long CArchive2::GetEntryName(int param_1,char *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  undefined1 local_360 [84];
  uchar local_30c [780];
  
                    /* 0x6efc0  92  ?GetEntryName@CArchive2@@QAGJHPADI@Z */
  *(undefined1 *)param_3 = 0;
  if (-1 < (int)param_2) {
    lVar1 = GetArchiveCount();
    if ((int)param_2 < lVar1) {
      iVar2 = FUN_01070da0(param_2,local_360);
      if ((-1 < iVar2) && (local_30c[0] != '\0')) {
        _mbscpy((uchar *)param_3,local_30c);
      }
      return iVar2;
    }
  }
  return 0;
}


