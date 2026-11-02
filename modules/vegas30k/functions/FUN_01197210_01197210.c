/* Module: vegas30k.dll
   Function: FUN_01197210
   Address: 01197210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01197210(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 0x3fc) != 0) {
    FUN_011972f0();
  }
  hMem = GlobalAlloc(2,*(int *)(param_1 + 0x424) * 0x38);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  *(LPVOID *)(param_1 + 0x3fc) = pvVar1;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  if (*(uint *)(param_1 + 0x42c) < *(uint *)(param_1 + 0x424)) {
    do {
      *(undefined4 *)((int)pvVar1 + 0x34) = *(undefined4 *)(param_1 + 0x400);
      *(LPVOID *)(param_1 + 0x400) = pvVar1;
      pvVar1 = (LPVOID)((int)pvVar1 + 0x38);
      *(LPVOID *)(*(int *)(param_1 + 0x400) + 0x30) = pvVar1;
      *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + 1;
    } while (*(uint *)(param_1 + 0x42c) < *(uint *)(param_1 + 0x424));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3fc) + 0x34) = *(undefined4 *)(param_1 + 0x400);
  *(undefined4 *)(*(int *)(param_1 + 0x400) + 0x30) = *(undefined4 *)(param_1 + 0x3fc);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x3fc);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x3fc);
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  return 0;
}


