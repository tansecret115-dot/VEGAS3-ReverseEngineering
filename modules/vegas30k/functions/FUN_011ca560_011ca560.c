/* Module: vegas30k.dll
   Function: FUN_011ca560
   Address: 011ca560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011ca560(int param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x90) + 0xc);
  if (param_4 != 0) {
    do {
      if (*(uint *)(param_1 + 0x3a4) <= *(uint *)(param_1 + 0x39c)) {
        return 0;
      }
      uVar3 = param_4 - uVar4;
      if (0x1ff < uVar3) {
        uVar3 = 0x200;
      }
      _SfAudio_FindPeaks_20
                (*(undefined4 *)(param_1 + 0x90),3,param_3,uVar3,*(int *)(param_1 + 0x398) + 4);
      iVar2 = *(int *)(param_1 + 0x398);
      *(uint *)(iVar2 + 0x20) = uVar3 + uVar4 + param_2;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x398) + 0x28) = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x398) + 0x30);
      *(int *)(param_1 + 0x398) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0x390);
      }
      *(int *)(param_1 + 0x39c) = *(int *)(param_1 + 0x39c) + 1;
      uVar4 = uVar4 + 0x200;
      param_3 = param_3 + (uint)uVar1 * 0x200;
      *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
    } while (uVar4 < param_4);
  }
  return 0;
}


