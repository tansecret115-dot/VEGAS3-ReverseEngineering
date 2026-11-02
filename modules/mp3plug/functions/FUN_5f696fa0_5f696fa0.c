/* Module: mp3plug.dll
   Function: FUN_5f696fa0
   Address: 5f696fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f696fa0(int param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = param_2[4];
  *(undefined4 *)(param_1 + 0x24) = param_2[5];
  *(undefined4 *)(param_1 + 0x28) = param_2[6];
  *(undefined4 *)(param_1 + 0x2c) = param_2[7];
  *(undefined4 *)(param_1 + 0x30) = param_2[8];
  *(undefined4 *)(param_1 + 0x34) = param_2[9];
  *(undefined4 *)(param_1 + 0x38) = param_2[10];
  *(undefined4 *)(param_1 + 0x3c) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x40) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x58) = param_2[0x10];
  *(undefined4 *)(param_1 + 0x4c) = param_2[0xd];
  *(undefined4 *)(param_1 + 0x50) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x54) = param_2[0xf];
  if (param_2[0x11] != 0) {
    param_2[0x11] = param_2 + 0x13;
    if (*(LPCVOID *)(param_1 + 0x44) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x44));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x44));
      GlobalFree(pvVar1);
    }
    pvVar1 = GlobalAlloc(0x42,param_2[0x12]);
    puVar2 = GlobalLock(pvVar1);
    *(undefined4 **)(param_1 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      uVar4 = param_2[0x12];
      puVar5 = (undefined4 *)param_2[0x11];
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(undefined4 *)(param_1 + 0x48) = param_2[0x12];
    }
  }
  return;
}


