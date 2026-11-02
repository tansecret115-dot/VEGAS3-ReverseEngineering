/* Module: mp3plug.dll
   Function: FUN_5f68bb60
   Address: 5f68bb60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f68bb60(int param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  FUN_5f70ff50((int *)(param_1 + 0x834));
  if (*(LPCVOID *)(param_1 + 0x878) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x878));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x878));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x878) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x868) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x868));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x868));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x868) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x1720) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1720));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1720));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x1720) = 0;
    *(undefined4 *)(param_1 + 0x1718) = 0;
    *(undefined4 *)(param_1 + 0x171c) = 0;
  }
  *(undefined4 *)(param_1 + 0x16f0) = 0;
  *(undefined4 *)(param_1 + 0x16f8) = 0;
  *(undefined4 *)(param_1 + 0x1700) = 0;
  *(undefined4 *)(param_1 + 0x1708) = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x1704) = 0;
  *(undefined4 *)(param_1 + 0x170c) = 0;
  *(undefined4 *)(param_1 + 0x87c) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x892);
  for (iVar2 = 0x395; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined4 *)(param_1 + 0x16e4) = 4;
  return 0;
}


