/* Module: Setup.exe
   Function: FUN_004021b0
   Address: 004021b0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004021b0(void)

{
  long lVar1;
  CArchive2 local_940 [2368];
  
  CArchive2::CArchive2(local_940);
  lVar1 = CArchive2::Open((char *)local_940,0x4477e0,(CSfArchiveProgress *)0x1);
  if (-1 < lVar1) {
    lVar1 = CArchive2::ExtractEntry((char *)local_940,"sfmsi.ini",0x4478e4);
    if (-1 < lVar1) {
      lVar1 = CArchive2::Close();
      if (-1 < lVar1) {
        SetFileAttributesA(&DAT_004476dc,0x100);
      }
    }
  }
  CArchive2::~CArchive2(local_940);
  return lVar1;
}


