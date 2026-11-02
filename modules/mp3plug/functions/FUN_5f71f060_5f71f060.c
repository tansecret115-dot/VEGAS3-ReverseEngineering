/* Module: mp3plug.dll
   Function: FUN_5f71f060
   Address: 5f71f060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f71f060(void *param_1)

{
  int iVar1;
  uint uVar2;
  HKEY__ local_8;
  uint local_4;
  
  iVar1 = FUN_5f7266c0((int *)&local_4);
  if (iVar1 < 0) {
    return 0x8004e131;
  }
  uVar2 = FUN_5f71f690(param_1,&local_8);
  if ((int)uVar2 < 0) {
    return 0x8004e12f;
  }
  if (local_4 < (uint)local_8.unused) {
    return 0x8004e130;
  }
  FUN_5f71f890(param_1,local_4 - local_8.unused);
  FUN_5f71f630(param_1);
  return 0;
}


