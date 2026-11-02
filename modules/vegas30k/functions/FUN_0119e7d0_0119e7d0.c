/* Module: vegas30k.dll
   Function: FUN_0119e7d0
   Address: 0119e7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0119e7d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 1;
  iVar2 = *(int *)(param_1 + 0x614) + -1;
  *(int *)(param_1 + 0x614) = iVar2;
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(param_1 + 0x644) != 0) {
        FUN_0119c050(1);
      }
      FUN_011af0c0();
      FUN_011aec80();
      FUN_011972f0();
      *(undefined4 *)(param_1 + 0x5ac) = 0;
      _SfAudio_ResampleClose_4(*(undefined4 *)(param_1 + 0x698));
      return 0;
    }
    FUN_011aec80();
    uVar1 = 0;
  }
  return uVar1;
}


