/* Module: vegas30k.dll
   Function: FUN_01003df0
   Address: 01003df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01003df0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int local_310;
  uchar local_30c [260];
  uchar local_208 [260];
  CHAR local_104 [260];
  
  local_310 = 0;
  if (param_1 == 0) {
    return &DAT_80070057;
  }
  GetTempPathA(0x104,local_104);
  uVar1 = _SfGetFileNamePtrA_4(param_1);
  SfPrintF(local_30c,&DAT_011db124,local_104,uVar1);
  _SfAddSlashToPathName_8(local_30c,0x104);
  _mbscpy((uchar *)(param_1 + 0x30c),local_30c);
  puVar2 = (undefined1 *)_SfZip_Open_12(param_1,2,&local_310);
  if (-1 < (int)puVar2) {
    _SfCreateDirectory_8(local_30c,0);
    SfPrintF(local_208,&DAT_011db124,(uchar *)(param_1 + 0x30c),param_1 + 0x104);
    puVar2 = (undefined1 *)_SfZip_ExtractFile_20(local_310,param_1 + 0x104,local_208,0,0);
    if (-1 < (int)puVar2) {
      _mbscpy((uchar *)(param_1 + 0x208),local_208);
    }
  }
  if (local_310 != 0) {
    puVar2 = (undefined1 *)_SfZip_Close_4(local_310);
  }
  if ((int)puVar2 < 0) {
    _SfDeleteDirectory_12(local_30c,0,1);
  }
  return puVar2;
}


