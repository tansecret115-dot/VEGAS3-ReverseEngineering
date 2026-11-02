/* Module: encn3260.dll
   Function: FUN_664d62b0
   Address: 664d62b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664d62b0(undefined4 *param_1)

{
  tm *ptVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  _tzset();
  time((time_t *)&stack0xfffffff8);
  ptVar1 = localtime((time_t *)&stack0xfffffff8);
  local_1c = CONCAT22((short)ptVar1->tm_min,(short)ptVar1->tm_sec);
  local_18 = CONCAT22((short)ptVar1->tm_wday,(short)ptVar1->tm_hour);
  local_14 = CONCAT22((short)ptVar1->tm_yday + 1,(short)ptVar1->tm_mday);
  local_10 = CONCAT22((short)ptVar1->tm_year,(short)ptVar1->tm_mon + 1);
  iVar2 = (int)((ulonglong)((longlong)*(int *)_timezone_exref * 0x6e5d4c3b) >> 0x20) -
          *(int *)_timezone_exref;
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  param_1[3] = local_10;
  *(short *)(param_1 + 4) = (short)(iVar2 >> 0xb) - (short)(iVar2 >> 0x1f);
  return;
}


