/* Module: vidcap30.exe
   Function: FUN_004bc4b0
   Address: 004bc4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004bc4b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_310;
  uchar local_30c [260];
  uchar local_208 [260];
  CHAR local_104 [260];
  
  local_310 = 0;
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  GetTempPathA(0x104,local_104);
  uVar1 = _SfGetFileNamePtrA_4(param_1);
  SfPrintF(local_30c,&DAT_00586f0c,local_104,uVar1);
  _SfAddSlashToPathName_8(local_30c,0x104);
  _mbscpy((uchar *)(param_1 + 0x30c),local_30c);
  iVar2 = _SfZip_Open_12(param_1,2,&local_310);
  if (-1 < iVar2) {
    _SfCreateDirectory_8(local_30c,0);
    SfPrintF(local_208,&DAT_00586f0c,(uchar *)(param_1 + 0x30c),param_1 + 0x104);
    iVar2 = _SfZip_ExtractFile_20(local_310,param_1 + 0x104,local_208,0,0);
    if (-1 < iVar2) {
      _mbscpy((uchar *)(param_1 + 0x208),local_208);
    }
  }
  if (local_310 != 0) {
    iVar2 = _SfZip_Close_4(local_310);
  }
  if (iVar2 < 0) {
    _SfDeleteDirectory_12(local_30c,0,1);
  }
  return iVar2;
}


