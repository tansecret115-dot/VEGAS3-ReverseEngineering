/* Module: vegas30.exe
   Function: FUN_004c4db0
   Address: 004c4db0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c4db0(int param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  EMIXERTYPE EVar4;
  int iVar5;
  
  uVar1 = Mixer_NumBusTypePorts(4);
  if (uVar1 < 0x20) {
    lVar2 = Mixer_NumBusTypePorts(4);
  }
  else {
    lVar2 = 0x20;
  }
  lVar3 = Mixer_NumBusTypePorts(1);
  if (lVar3 - 1U < 0x1a) {
    lVar3 = Mixer_NumBusTypePorts(1);
    iVar5 = lVar3 + -1;
  }
  else {
    iVar5 = 0x1a;
  }
  EVar4 = Mixer_GetMixerType((ISFMixer *)0x0);
  if (EVar4 != 1) {
    iVar5 = 0;
  }
  return (uint)(param_1 != 0) + iVar5 + lVar2;
}


