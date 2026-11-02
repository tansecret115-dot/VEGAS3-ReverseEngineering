/* Module: g2plug.dll
   Function: FUN_5f83f960
   Address: 5f83f960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f83f960(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5f877f00 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5f876f30)(&DAT_5f877f0c);
  uVar3 = FUN_5f83f7f0((uint *)&DAT_5f877f04);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5f876f30)(&DAT_5f877f0c);
    uVar3 = FUN_5f83f7f0((uint *)&DAT_5f877f04);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5f877f00 = 0;
    return 0;
  }
  DAT_5f876f0c = 0;
  _DAT_5f876f18 = 1000;
  DAT_5f876f14 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5f876f10 = DAT_5f876f14 * 1000;
  _DAT_5f876f08 = DAT_5f876f14 * 1000000;
  return DAT_5f876f14 * 1000000;
}


