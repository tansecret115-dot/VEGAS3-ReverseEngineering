/* Module: sfppack3.dll
   Function: FUN_5cc348d0
   Address: 5cc348d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc348d0(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x3ff00000;
  if (*(LPCVOID *)(param_1 + 0xb0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb0));
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalAlloc(0x42,52000);
  pvVar2 = GlobalLock(pvVar1);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(LPVOID *)(param_1 + 0xb0) = pvVar2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  iVar3 = ftol();
  *(double *)(param_1 + 0x1d0) = (double)iVar3;
  *(double *)(param_1 + 0x90) = (double)iVar3;
  if (*(LPCVOID *)(param_1 + 0x1f0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1f0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1f0));
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalAlloc(0x42,16000);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x1f0) = pvVar2;
  if (*(LPCVOID *)(param_1 + 500) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 500));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 500));
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalAlloc(0x42,16000);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 500) = pvVar2;
  puVar4 = (undefined4 *)(param_1 + 0x2f8);
  iVar3 = 2;
  do {
    puVar4[-0x40] = 0;
    puVar4[-0x3f] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  return 0;
}


