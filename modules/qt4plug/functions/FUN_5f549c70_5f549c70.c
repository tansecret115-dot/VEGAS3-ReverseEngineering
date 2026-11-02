/* Module: qt4plug.dll
   Function: FUN_5f549c70
   Address: 5f549c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f549c70(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5f5a9448 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5f5a3ce0)(&DAT_5f5a9454);
  uVar3 = FUN_5f549b00((uint *)&DAT_5f5a944c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5f5a3ce0)(&DAT_5f5a9454);
    uVar3 = FUN_5f549b00((uint *)&DAT_5f5a944c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5f5a9448 = 0;
    return 0;
  }
  DAT_5f5a3cbc = 0;
  _DAT_5f5a3cc8 = 1000;
  DAT_5f5a3cc4 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5f5a3cc0 = DAT_5f5a3cc4 * 1000;
  _DAT_5f5a3cb8 = DAT_5f5a3cc4 * 1000000;
  return DAT_5f5a3cc4 * 1000000;
}


