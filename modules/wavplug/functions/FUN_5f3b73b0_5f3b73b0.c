/* Module: wavplug.dll
   Function: FUN_5f3b73b0
   Address: 5f3b73b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f3b73b0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5f3e0848 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5f3daf00)(&DAT_5f3e0854);
  uVar3 = FUN_5f3b7240((uint *)&DAT_5f3e084c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5f3daf00)(&DAT_5f3e0854);
    uVar3 = FUN_5f3b7240((uint *)&DAT_5f3e084c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5f3e0848 = 0;
    return 0;
  }
  DAT_5f3daedc = 0;
  _DAT_5f3daee8 = 1000;
  DAT_5f3daee4 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5f3daee0 = DAT_5f3daee4 * 1000;
  _DAT_5f3daed8 = DAT_5f3daee4 * 1000000;
  return DAT_5f3daee4 * 1000000;
}


