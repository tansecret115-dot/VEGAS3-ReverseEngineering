/* Module: vegas30.exe
   Function: FUN_00605b60
   Address: 00605b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00605b60(undefined4 param_1,uchar *param_2,uint param_3)

{
  if ((param_2 != (uchar *)0x0) && (0x18 < param_3)) {
    FUN_006050b0(param_2,param_3);
    _mbscat(param_2,(uchar *)"-000000-000000-000000");
    return 0;
  }
  return 0x80004005;
}


