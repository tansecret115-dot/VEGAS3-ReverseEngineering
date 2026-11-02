/* Module: vidcap30.exe
   Function: FUN_004bc5e0
   Address: 004bc5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004bc5e0(ulong param_1)

{
  uchar *_Dest;
  undefined4 uVar1;
  long lVar2;
  uchar local_c4c [260];
  CHAR local_b48 [260];
  uchar local_a44 [260];
  CArchive2 local_940 [2368];
  
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  GetTempPathA(0x104,local_b48);
  uVar1 = _SfGetFileNamePtrA_4(param_1);
  SfPrintF(local_c4c,&DAT_00586f0c,local_b48,uVar1);
  _SfAddSlashToPathName_8(local_c4c,0x104);
  _Dest = (uchar *)(param_1 + 0x30c);
  _mbscpy(_Dest,local_c4c);
  CArchive2::CArchive2(local_940);
  lVar2 = CArchive2::Open((char *)local_940,param_1,(CSfArchiveProgress *)0x1);
  if (-1 < lVar2) {
    _SfCreateDirectory_8(local_c4c,0);
    SfPrintF(local_a44,&DAT_00586f0c,_Dest,(char *)(param_1 + 0x104));
    lVar2 = CArchive2::ExtractEntry((char *)local_940,(char *)(param_1 + 0x104),(ulong)_Dest);
    if (-1 < lVar2) {
      _mbscpy((uchar *)(param_1 + 0x208),local_a44);
    }
    CArchive2::Close();
  }
  CArchive2::~CArchive2(local_940);
  return lVar2;
}


