/* Module: mp3plug.dll
   Function: FUN_5f698240
   Address: 5f698240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f698240(int param_1)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  hMem = GlobalAlloc(0x42,*(int *)(param_1 + 0x1a0) << 5);
  pvVar2 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 0x1bc) = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x1bc);
        iVar4 = iVar3 + 0x20;
        *(undefined4 *)(iVar1 + -0x10 + iVar4) = 0;
        *(undefined4 *)(iVar1 + -0xc + iVar4) = 0;
        *(int *)(iVar3 + 0x18 + *(int *)(param_1 + 0x1bc)) = *(int *)(param_1 + 0x3c) << 3;
        *(undefined4 *)(*(int *)(param_1 + 0x1bc) + -0x20 + iVar4) = 1;
        *(int *)(*(int *)(param_1 + 0x1bc) + -0x1c + iVar4) = iVar5;
        iVar5 = iVar5 + 1;
        *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 1;
        iVar3 = iVar4;
      } while (iVar5 < *(int *)(param_1 + 0x1a0));
    }
    return 0;
  }
  return 0x8007000e;
}


