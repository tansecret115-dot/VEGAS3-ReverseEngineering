/* Module: sftrans1.dll
   Function: FUN_004909d0
   Address: 004909d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004909d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_0041e260(0);
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x1608;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x68);
  for (iVar2 = 0xb6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x348) = 0;
  return param_1;
}


