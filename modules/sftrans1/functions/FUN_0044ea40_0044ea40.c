/* Module: sftrans1.dll
   Function: FUN_0044ea40
   Address: 0044ea40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0044ea40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
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
  puVar2 = (undefined4 *)(param_1 + 0xf8);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3ff00000;
  *(undefined ***)(param_1 + 0x128) = &PTR_LAB_0055afa0;
  *(undefined4 *)(param_1 + 300) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  return param_1;
}


