/* Module: sfppack1.dll
   Function: FUN_5ce03f30
   Address: 5ce03f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ce03f30(void *param_1)

{
  int iVar1;
  uint uVar2;
  HKEY__ local_8;
  uint local_4;
  
  iVar1 = FUN_5ce0acd0((int *)&local_4);
  if (iVar1 < 0) {
    return 0x8004e131;
  }
  uVar2 = FUN_5ce04560(param_1,&local_8);
  if ((int)uVar2 < 0) {
    return 0x8004e12f;
  }
  if (local_4 < (uint)local_8.unused) {
    return 0x8004e130;
  }
  FUN_5ce04760(param_1,local_4 - local_8.unused);
  FUN_5ce04500(param_1);
  return 0;
}


