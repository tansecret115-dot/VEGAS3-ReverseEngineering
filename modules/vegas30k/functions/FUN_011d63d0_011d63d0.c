/* Module: vegas30k.dll
   Function: FUN_011d63d0
   Address: 011d63d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011d63d0(int param_1,undefined4 *param_2,uint param_3)

{
  MMRESULT MVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (((*(byte *)(param_1 + 8) & 1) == 0) || (*(int *)(param_1 + 0x188) == 0)) {
    return 0x8004e001;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x230);
  if (puVar3 == (undefined4 *)0x0) {
    return 0x8000ffff;
  }
  if ((*(byte *)(puVar3 + 4) & 0xc) == 0) {
    puVar3 = (undefined4 *)*puVar3;
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(uint *)(*(int *)(param_1 + 0x230) + 4) = param_3;
    *(uint *)(*(int *)(param_1 + 0x230) + 8) = param_3;
    ResetEvent(*(HANDLE *)(param_1 + 0x26c));
    MVar1 = midiOutLongMsg(*(HMIDIOUT *)(param_1 + 0x184),*(LPMIDIHDR *)(param_1 + 0x230),0x40);
    if (MVar1 == 0) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x26c),0xffffffff);
    }
    return 0;
  }
  return 0x80070005;
}


