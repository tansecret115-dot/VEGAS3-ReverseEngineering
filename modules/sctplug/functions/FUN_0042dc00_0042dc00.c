/* Module: sctplug.dll
   Function: FUN_0042dc00
   Address: 0042dc00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042dc00(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_004421f8 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_0043ca20)(&DAT_00442204);
  uVar3 = FUN_0042da90((uint *)&DAT_004421fc);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_0043ca20)(&DAT_00442204);
    uVar3 = FUN_0042da90((uint *)&DAT_004421fc);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_004421f8 = 0;
    return 0;
  }
  DAT_0043c9fc = 0;
  _DAT_0043ca08 = 1000;
  DAT_0043ca04 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_0043ca00 = DAT_0043ca04 * 1000;
  _DAT_0043c9f8 = DAT_0043ca04 * 1000000;
  return DAT_0043ca04 * 1000000;
}


