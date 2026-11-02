/* Module: sftrkfx1.dll
   Function: FUN_5cbe2100
   Address: 5cbe2100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5cbe2100(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5cc12358 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5cc10f68)(&DAT_5cc12364);
  uVar3 = FUN_5cbe1f90((uint *)&DAT_5cc1235c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5cc10f68)(&DAT_5cc12364);
    uVar3 = FUN_5cbe1f90((uint *)&DAT_5cc1235c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5cc12358 = 0;
    return 0;
  }
  DAT_5cc10f44 = 0;
  _DAT_5cc10f50 = 1000;
  DAT_5cc10f4c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5cc10f48 = DAT_5cc10f4c * 1000;
  _DAT_5cc10f40 = DAT_5cc10f4c * 1000000;
  return DAT_5cc10f4c * 1000000;
}


