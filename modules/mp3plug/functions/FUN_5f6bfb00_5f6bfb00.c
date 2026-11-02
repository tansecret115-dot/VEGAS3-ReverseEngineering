/* Module: mp3plug.dll
   Function: FUN_5f6bfb00
   Address: 5f6bfb00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f6bfb00(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5f752770 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5f73e588)(&DAT_5f75277c);
  uVar3 = FUN_5f6bf990((uint *)&DAT_5f752774);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5f73e588)(&DAT_5f75277c);
    uVar3 = FUN_5f6bf990((uint *)&DAT_5f752774);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5f752770 = 0;
    return 0;
  }
  DAT_5f73e564 = 0;
  _DAT_5f73e570 = 1000;
  DAT_5f73e56c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5f73e568 = DAT_5f73e56c * 1000;
  _DAT_5f73e560 = DAT_5f73e56c * 1000000;
  return DAT_5f73e56c * 1000000;
}


