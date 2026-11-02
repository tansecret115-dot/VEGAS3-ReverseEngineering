/* Module: vegas30k.dll
   Function: FUN_011d4bc0
   Address: 011d4bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011d4bc0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  MMRESULT MVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  LPMIDIHDR pmh;
  
  pmh = (LPMIDIHDR)0x0;
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x28) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x168);
    do {
      if (*(int *)*puVar4 == param_2) {
        pmh = *(LPMIDIHDR *)(*(int *)(param_1 + 0x168) + uVar1 * 4);
        break;
      }
      uVar1 = uVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x28));
  }
  if ((pmh->dwFlags & 4) == 0) {
    *(undefined4 *)(param_1 + 0x170) = 0x3c3;
    uVar1 = *(uint *)(param_1 + 0x20);
    if (param_3 < *(uint *)(param_1 + 0x20)) {
      uVar1 = param_3;
    }
    pmh->dwBufferLength = uVar1;
    MVar2 = midiInAddBuffer(*(HMIDIIN *)(param_1 + 0x160),pmh,0x40);
    uVar3 = FUN_011c2260(MVar2);
    return uVar3;
  }
  return 0x80070005;
}


