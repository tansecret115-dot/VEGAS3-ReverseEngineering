/* Module: vegas30k.dll
   Function: FUN_01040d80
   Address: 01040d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01040d80(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_01040e20();
  }
  hMem = GlobalAlloc(2,*(int *)(param_1 + 0x80) << 5);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    return 0x80004005;
  }
  *(LPVOID *)(param_1 + 0x74) = pvVar1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      *(LPVOID *)(param_1 + 0x78) = pvVar1;
      pvVar1 = (LPVOID)((int)pvVar1 + 0x20);
      *(LPVOID *)(*(int *)(param_1 + 0x78) + 0x18) = pvVar1;
      uVar2 = *(int *)(param_1 + 0x84) + 1;
      *(uint *)(param_1 + 0x84) = uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x80));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x18) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x84) = 0;
  return 0;
}


