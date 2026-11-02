/* Module: rmbe3260.dll
   Function: FUN_6604ed90
   Address: 6604ed90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6604ed90(int param_1,void *param_2,void *param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = 0;
  uVar1 = 0x80004005;
  if (DAT_6606ee84 != 0) {
    piVar3 = &DAT_6606ee20;
    while (param_1 != *piVar3) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 5;
      if (DAT_6606ee84 <= uVar2) {
        return uVar1;
      }
    }
    iVar4 = uVar2 * 0x14;
    FUN_6605b970(param_2,*(char **)(iVar4 + 0x6606ee24));
    FUN_6605b970(param_3,*(char **)(iVar4 + 0x6606ee28));
    *param_4 = *(undefined4 *)(iVar4 + 0x6606ee2c);
    uVar1 = 0;
    *param_5 = *(undefined4 *)(iVar4 + 0x6606ee30);
  }
  return uVar1;
}


