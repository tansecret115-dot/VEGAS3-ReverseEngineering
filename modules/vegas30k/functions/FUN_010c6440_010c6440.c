/* Module: vegas30k.dll
   Function: FUN_010c6440
   Address: 010c6440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_010c6440(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_0128eb80 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_01206550)(&DAT_0128eb8c);
  iVar2 = FUN_010c62d0(&DAT_0128eb84);
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_01206550)(&DAT_0128eb8c);
    iVar2 = FUN_010c62d0(&DAT_0128eb84);
  }
  if (uVar1 < 0x1c2) {
    DAT_0128eb80 = 0;
    return 0;
  }
  DAT_0120652c = 0;
  _DAT_01206538 = 1000;
  DAT_01206534 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_01206530 = DAT_01206534 * 1000;
  DAT_01206528 = DAT_01206534 * 1000000;
  return DAT_01206534 * 1000000;
}


