/* Module: sfppack3.dll
   Function: FUN_5cc6ade0
   Address: 5cc6ade0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5cc6ade0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5cc98f78 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5cc979e8)(&DAT_5cc98f84);
  uVar3 = FUN_5cc6ac70((uint *)&DAT_5cc98f7c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5cc979e8)(&DAT_5cc98f84);
    uVar3 = FUN_5cc6ac70((uint *)&DAT_5cc98f7c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5cc98f78 = 0;
    return 0;
  }
  DAT_5cc979c4 = 0;
  _DAT_5cc979d0 = 1000;
  DAT_5cc979cc = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5cc979c8 = DAT_5cc979cc * 1000;
  _DAT_5cc979c0 = DAT_5cc979cc * 1000000;
  return DAT_5cc979cc * 1000000;
}


