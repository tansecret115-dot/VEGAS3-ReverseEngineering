/* Module: vegas30.exe
   Function: FUN_005d2690
   Address: 005d2690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d2690(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Transport_IsPlaying();
  if (iVar1 != 0) {
    FUN_005b83b0(param_1,1);
    uVar2 = FUN_00591460(param_1,param_2,*(undefined4 *)(DAT_0065a06c + 0x6c),1,1);
    FUN_005b84d0(param_1,1);
    return uVar2;
  }
  return 0;
}


