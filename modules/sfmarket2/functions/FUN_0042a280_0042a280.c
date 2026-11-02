/* Module: sfmarket2.dll
   Function: FUN_0042a280
   Address: 0042a280
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042a280(LPCSTR param_1)

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
  FUN_004201b0(param_1);
  FUN_00424a60(local_c4c,"%s%s");
  FUN_004203c0(local_c4c,0x104);
  _mbscpy((uchar *)(param_1 + 0x30c),local_c4c);
  FUN_004317f0(local_940);
  uVar1 = FUN_004318c0(local_940,param_1,1,0);
  if (-1 < (int)uVar1) {
    FUN_00421080(local_c4c,(LPSECURITY_ATTRIBUTES)0x0);
    FUN_00424a60(local_a44,"%s%s");
    uVar1 = FUN_004360d0(local_940,(uchar *)(param_1 + 0x104),(uchar *)(param_1 + 0x30c),4);
    if (-1 < (int)uVar1) {
      _mbscpy((uchar *)(param_1 + 0x208),local_a44);
    }
    FUN_00431a50(local_940);
  }
  FUN_00431890(local_940);
  return uVar1;
}


