/* Module: sfs4rw.dll
   Function: FUN_0042e580
   Address: 0042e580
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042e580(LPCSTR param_1)

{
  uint uVar1;
  int *local_310;
  uchar local_30c [260];
  uchar local_208 [260];
  CHAR local_104 [260];
  
  local_310 = (int *)0x0;
  if (param_1 == (LPCSTR)0x0) {
    return 0x80070057;
  }
  GetTempPathA(0x104,local_104);
  FUN_0041c6b0(param_1);
  FUN_00420f60(local_30c,"%s%s");
  FUN_0041c8c0(local_30c,0x104);
  _mbscpy((uchar *)(param_1 + 0x30c),local_30c);
  uVar1 = FUN_00426f00(param_1,2,&local_310);
  if (-1 < (int)uVar1) {
    FUN_0041d580(local_30c,(LPSECURITY_ATTRIBUTES)0x0);
    FUN_00420f60(local_208,"%s%s");
    uVar1 = FUN_00425dd0(local_310,param_1 + 0x104,local_208,0);
    if (-1 < (int)uVar1) {
      _mbscpy((uchar *)(param_1 + 0x208),local_208);
    }
  }
  if (local_310 != (int *)0x0) {
    uVar1 = FUN_00425520(local_310);
  }
  if ((int)uVar1 < 0) {
    FUN_0041dba0(local_30c,(uchar *)0x0,1);
  }
  return uVar1;
}


