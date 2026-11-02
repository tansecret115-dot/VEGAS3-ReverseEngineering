/* Module: vegas30.exe
   Function: FUN_00522ac0
   Address: 00522ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00522ac0(void)

{
  int iVar1;
  
  iVar1 = FUN_00522a40(1);
  if (iVar1 == 0) {
    iVar1 = FUN_00522a40(2);
    if (iVar1 == 0) {
      iVar1 = FUN_00522a40(0);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


