/* Module: sfppack2.dll
   Function: FUN_5ccebd50
   Address: 5ccebd50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccebd50(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  uVar5 = 0;
  iVar3 = 4;
  *param_2 = 0;
  puVar1 = (uint *)(param_1 + 0xdc);
  do {
    uVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    uVar5 = uVar5 | uVar4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x238);
  do {
    if (iVar3 < 2) {
      bVar6 = *(int *)(param_1 + 0x230) == 1;
    }
    else {
      bVar6 = *(int *)(param_1 + 0x230) == 2;
    }
    if (uVar5 == 0) {
      uVar4 = (uint)(piVar2[-0x65] == 0);
    }
    else {
      uVar4 = piVar2[-0x57];
    }
    if (((uVar4 != 0) && (bVar6)) && (piVar2[-0x86] != *piVar2)) {
      piVar2[-0x86] = *piVar2;
      *param_2 = 1;
      *(undefined4 *)(param_1 + 0xec) = 1;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


