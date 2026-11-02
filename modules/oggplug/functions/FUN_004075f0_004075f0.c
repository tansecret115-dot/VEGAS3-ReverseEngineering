/* Module: oggplug.dll
   Function: FUN_004075f0
   Address: 004075f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004075f0(int param_1)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x358) = 0;
  hMem = GlobalAlloc(0x42,*(int *)(param_1 + 0x348) << 5);
  pvVar2 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 0x364) = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x348)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x364);
        iVar3 = iVar3 + 0x20;
        *(undefined4 *)(iVar1 + -0x10 + iVar3) = 0;
        *(undefined4 *)(iVar1 + -0xc + iVar3) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x364) + -8 + iVar3) = *(undefined4 *)(param_1 + 0x210);
        *(undefined4 *)(*(int *)(param_1 + 0x364) + -0x20 + iVar3) = 1;
        *(int *)(*(int *)(param_1 + 0x364) + -0x1c + iVar3) = iVar4;
        iVar4 = iVar4 + 1;
        *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x358) | 1;
      } while (iVar4 < *(int *)(param_1 + 0x348));
    }
    return 0;
  }
  return 0x8007000e;
}


