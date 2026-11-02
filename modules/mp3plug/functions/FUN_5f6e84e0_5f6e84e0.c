/* Module: mp3plug.dll
   Function: FUN_5f6e84e0
   Address: 5f6e84e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6e84e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x51c);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 3)) {
    if (0x14 < iVar2) {
      iVar2 = 0x15;
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    if (0x23 < iVar2) {
      iVar2 = 0x24;
    }
  }
  FUN_5f6e9720(iVar2,0x240 - *(int *)(param_1 + 0x82c),param_1 + 0x1c,*(int *)(param_1 + 0x69c),
               param_1 + 0x6a0,*(int *)(param_1 + 0x530),*(int *)(param_1 + 0x534));
  FUN_5f6e8e10(iVar2,param_1 + 0x1c,*(uint *)(param_1 + 0x534),param_1 + 0x878);
  return 1;
}


