/* Module: sfcdi.dll
   Function: FUN_5bf450b0
   Address: 5bf450b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5bf450b0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5bf7b798 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5bf65de0)(&DAT_5bf7b7a4);
  uVar3 = FUN_5bf44f40((uint *)&DAT_5bf7b79c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5bf65de0)(&DAT_5bf7b7a4);
    uVar3 = FUN_5bf44f40((uint *)&DAT_5bf7b79c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5bf7b798 = 0;
    return 0;
  }
  DAT_5bf65dbc = 0;
  _DAT_5bf65dc8 = 1000;
  DAT_5bf65dc4 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5bf65dc0 = DAT_5bf65dc4 * 1000;
  _DAT_5bf65db8 = DAT_5bf65dc4 * 1000000;
  return DAT_5bf65dc4 * 1000000;
}


