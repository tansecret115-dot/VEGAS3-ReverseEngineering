/* Module: vidcap30.exe
   Function: FUN_00523080
   Address: 00523080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00523080(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_00662450 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_005b8668)(&DAT_0066245c);
  iVar2 = FUN_00522f10(&DAT_00662454);
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_005b8668)(&DAT_0066245c);
    iVar2 = FUN_00522f10(&DAT_00662454);
  }
  if (uVar1 < 0x1c2) {
    DAT_00662450 = 0;
    return 0;
  }
  DAT_005b8644 = 0;
  _DAT_005b8650 = 1000;
  DAT_005b864c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_005b8648 = DAT_005b864c * 1000;
  _DAT_005b8640 = DAT_005b864c * 1000000;
  return DAT_005b864c * 1000000;
}


