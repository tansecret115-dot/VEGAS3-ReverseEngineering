/* Module: vegas30k.dll
   Function: FUN_01194810
   Address: 01194810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01194810(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x7a8) != 0) {
    FUN_011948e0();
  }
  hMem = GlobalAlloc(2,*(int *)(param_1 + 0x7b8) * 0x38);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  *(LPVOID *)(param_1 + 0x7a8) = pvVar1;
  *(undefined4 *)(param_1 + 0x7ac) = 0;
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  if (*(int *)(param_1 + 0x7b8) != 0) {
    do {
      *(undefined4 *)((int)pvVar1 + 0x34) = *(undefined4 *)(param_1 + 0x7ac);
      *(LPVOID *)(param_1 + 0x7ac) = pvVar1;
      pvVar1 = (LPVOID)((int)pvVar1 + 0x38);
      *(LPVOID *)(*(int *)(param_1 + 0x7ac) + 0x30) = pvVar1;
      uVar2 = *(int *)(param_1 + 0x7c0) + 1;
      *(uint *)(param_1 + 0x7c0) = uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x7b8));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x7a8) + 0x34) = *(undefined4 *)(param_1 + 0x7ac);
  *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0x30) = *(undefined4 *)(param_1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_1 + 0x7a8);
  return 0;
}


