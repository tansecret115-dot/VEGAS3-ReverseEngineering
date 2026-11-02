/* Module: vegas30.exe
   Function: FUN_00503e40
   Address: 00503e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00503e40(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint local_4;
  
  Mixer_GetMixerType((ISFMixer *)0x0);
  local_4 = 0;
  iVar1 = FUN_005030c0(param_1);
  FUN_00503080(iVar1,0,&local_4);
  *(undefined4 *)(iVar1 + 4) = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (*(int *)(*param_2 + 0xfec) != 0) {
    puVar4 = (uint *)(iVar1 + 8);
    do {
      if (local_4 <= uVar2) {
        uVar2 = 0;
      }
      *puVar4 = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar3 < *(uint *)(*param_2 + 0xfec));
  }
  FUN_005034c0(param_1,param_2);
  return;
}


