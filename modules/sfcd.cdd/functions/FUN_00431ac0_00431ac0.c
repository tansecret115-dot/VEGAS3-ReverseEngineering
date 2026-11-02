/* Module: sfcd.cdd
   Function: FUN_00431ac0
   Address: 00431ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00431ac0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00444648;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


