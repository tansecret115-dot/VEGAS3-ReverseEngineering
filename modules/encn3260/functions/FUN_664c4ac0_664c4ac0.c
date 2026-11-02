/* Module: encn3260.dll
   Function: FUN_664c4ac0
   Address: 664c4ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c4ac0(int param_1)

{
  int iVar1;
  int iVar2;
  
  do {
    do {
      iVar2 = FUN_664c4670(*(int **)(param_1 + 0x18));
    } while (iVar2 == 0x20);
  } while (iVar2 == 9);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar2 != -1) {
    *(undefined4 *)(iVar1 + 0xc) = 1;
    *(int *)(iVar1 + 0x10) = iVar2;
  }
  return;
}


