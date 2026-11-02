/* Module: sfxpfx1.dll
   Function: FUN_5c944f90
   Address: 5c944f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c944f90(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x3ff00000;
  if (*(LPCVOID *)(param_1 + 0xb8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalAlloc(0x42,52000);
  pvVar2 = GlobalLock(pvVar1);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(LPVOID *)(param_1 + 0xb8) = pvVar2;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  iVar3 = ftol();
  *(double *)(param_1 + 0x1d8) = (double)iVar3;
  *(double *)(param_1 + 0x98) = (double)iVar3;
  if (*(LPCVOID *)(param_1 + 0x1f8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1f8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1f8));
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalAlloc(0x42,16000);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x1f8) = pvVar2;
  if (*(LPCVOID *)(param_1 + 0x1fc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1fc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1fc));
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalAlloc(0x42,16000);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x1fc) = pvVar2;
  puVar4 = (undefined4 *)(param_1 + 0x300);
  iVar3 = 2;
  do {
    puVar4[-0x40] = 0;
    puVar4[-0x3f] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  return 0;
}


