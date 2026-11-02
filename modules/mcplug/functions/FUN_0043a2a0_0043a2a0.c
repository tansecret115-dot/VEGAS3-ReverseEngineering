/* Module: mcplug.dll
   Function: FUN_0043a2a0
   Address: 0043a2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043a2a0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_0048d1c8 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_00487710)(&DAT_0048d1d4);
  uVar3 = FUN_0043a130((uint *)&DAT_0048d1cc);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_00487710)(&DAT_0048d1d4);
    uVar3 = FUN_0043a130((uint *)&DAT_0048d1cc);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_0048d1c8 = 0;
    return 0;
  }
  DAT_004876ec = 0;
  _DAT_004876f8 = 1000;
  DAT_004876f4 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_004876f0 = DAT_004876f4 * 1000;
  _DAT_004876e8 = DAT_004876f4 * 1000000;
  return DAT_004876f4 * 1000000;
}


