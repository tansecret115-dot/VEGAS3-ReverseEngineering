/* Module: mp3rw.dll
   Function: FUN_00410d30
   Address: 00410d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00410d30(void *param_1)

{
  int iVar1;
  uint uVar2;
  HKEY__ local_8;
  uint local_4;
  
  iVar1 = FUN_00418090((int *)&local_4);
  if (iVar1 < 0) {
    return 0x8004e131;
  }
  uVar2 = FUN_00411360(param_1,&local_8);
  if ((int)uVar2 < 0) {
    return 0x8004e12f;
  }
  if (local_4 < (uint)local_8.unused) {
    return 0x8004e130;
  }
  FUN_00411560(param_1,local_4 - local_8.unused);
  FUN_00411300(param_1);
  return 0;
}


