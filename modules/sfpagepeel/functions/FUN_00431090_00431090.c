/* Module: sfpagepeel.dll
   Function: FUN_00431090
   Address: 00431090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00431090(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_0047e618 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_0047cff8)(&DAT_0047e624);
  uVar3 = FUN_00430f20((uint *)&DAT_0047e61c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_0047cff8)(&DAT_0047e624);
    uVar3 = FUN_00430f20((uint *)&DAT_0047e61c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_0047e618 = 0;
    return 0;
  }
  DAT_0047cfd4 = 0;
  _DAT_0047cfe0 = 1000;
  DAT_0047cfdc = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_0047cfd8 = DAT_0047cfdc * 1000;
  _DAT_0047cfd0 = DAT_0047cfdc * 1000000;
  return DAT_0047cfdc * 1000000;
}


