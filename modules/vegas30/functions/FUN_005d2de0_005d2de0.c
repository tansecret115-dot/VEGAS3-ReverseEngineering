/* Module: vegas30.exe
   Function: FUN_005d2de0
   Address: 005d2de0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005d2de0(int param_1,int param_2)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  lVar1 = 1;
  if (*(uint *)(param_2 + 0x118) < *(uint *)(param_1 + 0x7d8)) {
    lVar1 = Mixer_RemoveFXBus((ISFMixer *)0x0,*(ulong *)(param_2 + 0x530),0);
    if ((-1 < lVar1) && (uVar3 = *(uint *)(param_2 + 0x530), uVar3 < *(uint *)(param_2 + 0x118))) {
      puVar2 = (undefined4 *)(param_2 + 0x328 + uVar3 * 4);
      do {
        uVar3 = uVar3 + 1;
        *puVar2 = puVar2[1];
        puVar2 = puVar2 + 1;
      } while (uVar3 < *(uint *)(param_2 + 0x118));
    }
  }
  return lVar1;
}


