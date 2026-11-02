/* Module: sftrans1.dll
   Function: FUN_0044eae0
   Address: 0044eae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0044eae0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0045be10();
  *(undefined ***)(param_1 + 0xbc) = &PTR_LAB_0055afb8;
  *(undefined **)(param_1 + 0xd4) = &DAT_0056f728;
  *(undefined **)(param_1 + 0xd8) = &DAT_0056f718;
  *(undefined **)(param_1 + 0xdc) = &DAT_0056f708;
  *(undefined **)(param_1 + 0xe0) = &DAT_0056f6f8;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined ***)(param_1 + 0xf0) = &PTR_LAB_0055571c;
  puVar1 = (undefined4 *)(param_1 + 0xf8);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3ff00000;
  *(undefined ***)(param_1 + 0x128) = &PTR_LAB_0055afa0;
  *(undefined4 *)(param_1 + 300) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  puVar1 = (undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x154) = 1;
  iVar2 = 4;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x178) = 1;
  puVar1 = (undefined4 *)(param_1 + 0x180);
  iVar2 = 4;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x1a0) = 1;
  puVar1 = (undefined4 *)(param_1 + 0x1a8);
  iVar2 = 4;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  puVar1 = (undefined4 *)(param_1 + 0x1cc);
  iVar2 = 4;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}


