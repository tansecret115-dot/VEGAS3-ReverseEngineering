/* Module: rv303260.dll
   Function: FUN_672083e0
   Address: 672083e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_672083e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_6720e700(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if ((((DAT_672167d4 != 0) && (*(int *)(param_1 + 0x50) != 0)) && (*(int *)(param_1 + 0x58) != 0))
     && (*(int *)(param_1 + 0x5c) != 0)) {
    iVar2 = 0;
    if (0 < DAT_672167d8) {
      piVar3 = &DAT_67216768;
      do {
        if (*piVar3 == *(int *)(param_1 + 0x5c)) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < DAT_672167d8);
    }
    if (iVar2 < DAT_672167d8) {
      (&DAT_67216768)[iVar2] = *(undefined4 *)(&DAT_67216764 + DAT_672167d8 * 4);
    }
    DAT_672167d8 = DAT_672167d8 + -1;
    (&DAT_67216768)[DAT_672167d8] = 0;
    TerminateThread(*(HANDLE *)(param_1 + 0x50),0xffffffff);
    *(undefined4 *)(param_1 + 0x50) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return 0;
}


