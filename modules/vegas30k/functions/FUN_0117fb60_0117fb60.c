/* Module: vegas30k.dll
   Function: FUN_0117fb60
   Address: 0117fb60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0117fb60(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  DWORD dwMsg;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (uVar2 <= param_2) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = (param_2 - uVar2) * *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x1c) = param_2;
    uVar2 = uVar3 / uVar1;
    *(uint *)(param_1 + 0x20) = uVar3 % uVar1;
    for (uVar3 = uVar3 / uVar1; uVar3 != 0; uVar3 = uVar3 - 1) {
      dwMsg = FUN_0117fa60(param_1);
      midiOutShortMsg(*(HMIDIOUT *)(param_1 + 4),dwMsg);
      uVar2 = *(int *)(param_1 + 0x4c) + 1;
      *(uint *)(param_1 + 0x4c) = uVar2;
      if (uVar2 == 8) {
        uVar2 = FUN_0117f950(param_1,2);
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
    }
  }
  return uVar2;
}


