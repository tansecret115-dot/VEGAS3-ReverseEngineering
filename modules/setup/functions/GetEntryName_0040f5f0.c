/* Module: Setup.exe
   Function: GetEntryName
   Address: 0040f5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryName(int,char *,unsigned int) */

long CArchive2::GetEntryName(int param_1,char *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  int local_360 [21];
  uchar local_30c [780];
  
                    /* 0xf5f0  29  ?GetEntryName@CArchive2@@QAGJHPADI@Z */
  *(undefined1 *)param_3 = 0;
  if (-1 < (int)param_2) {
    lVar1 = GetArchiveCount();
    if ((int)param_2 < lVar1) {
      iVar2 = FUN_004113d0((void *)param_1,(int)param_2,local_360);
      if ((-1 < iVar2) && (local_30c[0] != '\0')) {
        _mbscpy((uchar *)param_3,local_30c);
      }
      return iVar2;
    }
  }
  return 0;
}


