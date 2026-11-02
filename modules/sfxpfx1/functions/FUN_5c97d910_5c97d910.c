/* Module: sfxpfx1.dll
   Function: FUN_5c97d910
   Address: 5c97d910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c97d910(void *param_1)

{
  int iVar1;
  uint uVar2;
  HKEY__ local_8;
  uint local_4;
  
  iVar1 = FUN_5c9846b0((int *)&local_4);
  if (iVar1 < 0) {
    return 0x8004e131;
  }
  uVar2 = FUN_5c97df40(param_1,&local_8);
  if ((int)uVar2 < 0) {
    return 0x8004e12f;
  }
  if (local_4 < (uint)local_8.unused) {
    return 0x8004e130;
  }
  FUN_5c97e140(param_1,local_4 - local_8.unused);
  FUN_5c97dee0(param_1);
  return 0;
}


