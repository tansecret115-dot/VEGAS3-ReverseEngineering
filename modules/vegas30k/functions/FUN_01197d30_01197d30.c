/* Module: vegas30k.dll
   Function: FUN_01197d30
   Address: 01197d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01197d30(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x454) != 0) {
    FUN_01197e00();
  }
  hMem = GlobalAlloc(2,*(int *)(param_1 + 0x424) * 0x38);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  *(LPVOID *)(param_1 + 0x454) = pvVar1;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  if (*(int *)(param_1 + 0x424) != 0) {
    do {
      *(undefined4 *)((int)pvVar1 + 0x34) = *(undefined4 *)(param_1 + 0x458);
      *(LPVOID *)(param_1 + 0x458) = pvVar1;
      pvVar1 = (LPVOID)((int)pvVar1 + 0x38);
      *(LPVOID *)(*(int *)(param_1 + 0x458) + 0x30) = pvVar1;
      uVar2 = *(int *)(param_1 + 0x47c) + 1;
      *(uint *)(param_1 + 0x47c) = uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x424));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x454) + 0x34) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(*(int *)(param_1 + 0x458) + 0x30) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x454);
  return 0;
}


