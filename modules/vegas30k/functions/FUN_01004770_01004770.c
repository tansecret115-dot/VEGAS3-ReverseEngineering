/* Module: vegas30k.dll
   Function: FUN_01004770
   Address: 01004770
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_01004770(ulong param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  CArchive2 local_940 [2368];
  
  CArchive2::CArchive2(local_940);
  lVar1 = CArchive2::Open((char *)local_940,param_1,(CSfArchiveProgress *)0x1);
  if (-1 < lVar1) {
    lVar1 = CArchive2::ExtractAll((char *)local_940,param_3);
    CArchive2::Close();
  }
  CArchive2::~CArchive2(local_940);
  return lVar1;
}


