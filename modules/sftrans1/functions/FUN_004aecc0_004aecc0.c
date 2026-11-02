/* Module: sftrans1.dll
   Function: FUN_004aecc0
   Address: 004aecc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004aecc0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
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
  puVar3 = (undefined4 *)(param_1 + 0xf8);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3ff00000;
  *(undefined ***)(param_1 + 0x128) = &PTR_LAB_0055afa0;
  *(undefined4 *)(param_1 + 300) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  piVar1 = *(int **)(param_1 + 300);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  *(undefined4 *)(param_1 + 0x94) = 2;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 2;
  *(undefined4 *)(param_1 + 0x10c) = 2;
  *(undefined4 *)(param_1 + 0xf8) = 5;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x104) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x110) = 0x41;
  return param_1;
}


