/* Module: aviplug.dll
   Function: FUN_5f9c52d0
   Address: 5f9c52d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f9c52d0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5fa16588 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5f9f3ab8)(&DAT_5fa16594);
  uVar3 = FUN_5f9c5160((uint *)&DAT_5fa1658c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5f9f3ab8)(&DAT_5fa16594);
    uVar3 = FUN_5f9c5160((uint *)&DAT_5fa1658c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5fa16588 = 0;
    return 0;
  }
  DAT_5f9f3a94 = 0;
  _DAT_5f9f3aa0 = 1000;
  DAT_5f9f3a9c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5f9f3a98 = DAT_5f9f3a9c * 1000;
  _DAT_5f9f3a90 = DAT_5f9f3a9c * 1000000;
  return DAT_5f9f3a9c * 1000000;
}


