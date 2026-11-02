/* Module: vegas30k.dll
   Function: FUN_01070560
   Address: 01070560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01070560(int param_1)

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
      FUN_010704e0(param_1 + 0x468,uVar2,local_104);
      iVar1 = _SfDoesFileExist_4(local_104);
      if (iVar1 == 0) {
        FUN_01070600(0xaaaaaaad,"ValidateMultiVolume",local_104);
        return 0x8004e00d;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(param_1 + 0x898));
  }
  return 0;
}


