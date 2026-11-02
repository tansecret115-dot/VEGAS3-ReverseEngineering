/* Module: Setup.exe
   Function: FUN_00415950
   Address: 00415950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00415950(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_00449838 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_00444080)(&DAT_00449844);
  uVar3 = FUN_004157e0((uint *)&DAT_0044983c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_00444080)(&DAT_00449844);
    uVar3 = FUN_004157e0((uint *)&DAT_0044983c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_00449838 = 0;
    return 0;
  }
  DAT_0044405c = 0;
  _DAT_00444068 = 1000;
  DAT_00444064 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_00444060 = DAT_00444064 * 1000;
  _DAT_00444058 = DAT_00444064 * 1000000;
  return DAT_00444064 * 1000000;
}


