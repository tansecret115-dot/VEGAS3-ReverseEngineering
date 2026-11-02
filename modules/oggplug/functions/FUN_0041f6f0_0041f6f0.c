/* Module: oggplug.dll
   Function: FUN_0041f6f0
   Address: 0041f6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0041f6f0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_00511870 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_00450c98)(&DAT_0051187c);
  uVar3 = FUN_0041f580((uint *)&DAT_00511874);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_00450c98)(&DAT_0051187c);
    uVar3 = FUN_0041f580((uint *)&DAT_00511874);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_00511870 = 0;
    return 0;
  }
  DAT_00450c74 = 0;
  _DAT_00450c80 = 1000;
  DAT_00450c7c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_00450c78 = DAT_00450c7c * 1000;
  _DAT_00450c70 = DAT_00450c7c * 1000000;
  return DAT_00450c7c * 1000000;
}


