/* Module: mp3rw.dll
   Function: FUN_0042e730
   Address: 0042e730
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042e730(LPCSTR param_1)

{
  uint uVar1;
  uchar local_c4c [260];
  CHAR local_b48 [260];
  uchar local_a44 [260];
  undefined4 local_940 [592];
  
  if (param_1 == (LPCSTR)0x0) {
    return 0x80070057;
  }
  GetTempPathA(0x104,local_b48);
  FUN_0041c730(param_1);
  FUN_00420fe0(local_c4c,"%s%s");
  FUN_0041c940(local_c4c,0x104);
  _mbscpy((uchar *)(param_1 + 0x30c),local_c4c);
  FUN_00434b90(local_940);
  uVar1 = FUN_00434c60(local_940,param_1,1,0);
  if (-1 < (int)uVar1) {
    FUN_0041d600(local_c4c,(LPSECURITY_ATTRIBUTES)0x0);
    FUN_00420fe0(local_a44,"%s%s");
    uVar1 = FUN_00439470(local_940,(uchar *)(param_1 + 0x104),(uchar *)(param_1 + 0x30c),4);
    if (-1 < (int)uVar1) {
      _mbscpy((uchar *)(param_1 + 0x208),local_a44);
    }
    FUN_00434df0(local_940);
  }
  FUN_00434c30(local_940);
  return uVar1;
}


