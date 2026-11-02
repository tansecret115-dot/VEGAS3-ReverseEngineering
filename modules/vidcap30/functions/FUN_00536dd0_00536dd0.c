/* Module: vidcap30.exe
   Function: FUN_00536dd0
   Address: 00536dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00536dd0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_104 [260];
  
  if (*(uint *)(param_1 + 0x898) < 2) {
    return 1;
  }
  uVar2 = 2;
  if (1 < *(uint *)(param_1 + 0x898)) {
    do {
      FUN_00536d50(param_1 + 0x468,uVar2,local_104);
      iVar1 = _SfDoesFileExist_4(local_104);
      if (iVar1 == 0) {
        FUN_00536e70(0xaaaaaaad,"ValidateMultiVolume",local_104);
        return 0x8004e00d;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(param_1 + 0x898));
  }
  return 0;
}


