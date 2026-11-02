/* Module: vidpcore.dll
   Function: FUN_5de6fc30
   Address: 5de6fc30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de6fc30(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_5df157d0();
  FUN_5df090f0();
  FUN_5df090f0();
  FUN_5df090f0();
  iVar1 = FUN_5df08950();
  if (-1 < iVar1) {
    iVar1 = FUN_5df09170();
    if (((iVar1 == 0) || (iVar1 = FUN_5df09170(), iVar1 == 0)) ||
       (iVar1 = FUN_5df09170(), iVar1 == 0)) {
      FUN_5df09140();
      FUN_5df09140();
      FUN_5df09140();
      return -0x7fffbffb;
    }
    if ((*(int *)(extraout_ECX + 0x1c4) != 0) || (*(int *)(extraout_ECX + 0x238) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
      if (*(int *)(extraout_ECX + 0x238) == 0) {
        puVar2 = (undefined4 *)(extraout_ECX + 0x154);
        puVar3 = (undefined4 *)(extraout_ECX + 0x18c);
        for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      else {
        FUN_5de71120();
      }
      *(undefined4 *)(extraout_ECX + 0x1c4) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
    }
    iVar1 = FUN_5de6ff70();
    if (-1 < iVar1) {
      FUN_5df090e0();
    }
  }
  FUN_5df09140();
  FUN_5df09140();
  FUN_5df09140();
  return iVar1;
}


