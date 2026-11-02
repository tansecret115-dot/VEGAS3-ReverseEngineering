/* Module: vegas30k.dll
   Function: FUN_01195a90
   Address: 01195a90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_01195a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            uint param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0xfffffffe;
  if ((*(int *)(param_1 + 0x7d4) != 0) &&
     (((*(byte *)(param_1 + 8) & 2) != 0 || (*(int *)(param_1 + 0x808) != 0)))) {
    uVar3 = 0;
    iVar1 = param_1 + 0x4be;
    uVar2 = (**(code **)(param_1 + 0x64c))
                      (param_1,0x50,*(undefined4 *)(param_1 + 0x650),iVar1,
                       *(undefined4 *)(param_1 + 0x7c8),0,0,0,0x3ff00000,param_4,param_5,param_6,0,0
                      );
    if (0 < (int)uVar2) {
      if (((int)uVar2 >> 0x1f <= param_5) && (((int)uVar2 >> 0x1f < param_5 || (uVar2 < param_6))))
      {
        param_6 = uVar2;
      }
      _SfAudio_Mix_24(iVar1,uVar3,iVar1,*(undefined4 *)(param_1 + 0x7c8),param_6,param_1 + 0x7b8);
    }
  }
  return uVar2;
}


