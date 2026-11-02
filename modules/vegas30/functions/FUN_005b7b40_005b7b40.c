/* Module: vegas30.exe
   Function: FUN_005b7b40
   Address: 005b7b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005b7b40(int param_1,uchar *param_2)

{
  uchar *_Source;
  undefined4 uVar1;
  undefined4 uVar2;
  uchar local_104 [260];
  
  _mbscpy(local_104,param_2);
  _SfAddSlashToPathName_8(local_104,0x104);
  if (*(int *)(param_1 + 0xc) == 1) {
    _Source = (uchar *)_SfGetString_8(DAT_00647204,0x6609);
  }
  else {
    if (*(int *)(param_1 + 0xc) != 2) {
      return 0x80004005;
    }
    _Source = (uchar *)_SfGetString_8(DAT_00647204,0x660a);
  }
  _mbscat(local_104,_Source);
  param_1 = param_1 + 0x10;
  uVar2 = 0x104;
  uVar1 = _SfGetString_8(DAT_00647204,0x660b);
  uVar1 = _SfCreateTempFileAndName_16(local_104,uVar1,param_1,uVar2);
  return uVar1;
}


