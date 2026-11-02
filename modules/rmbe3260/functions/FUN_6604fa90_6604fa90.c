/* Module: rmbe3260.dll
   Function: FUN_6604fa90
   Address: 6604fa90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6604fa90(uint param_1,void *param_2,undefined4 *param_3)

{
  void *this;
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  this = param_2;
  uVar3 = 0;
  uVar1 = 0x80004005;
  if (DAT_6606f0e0 != 0) {
    puVar4 = &DAT_6606efc0;
    while (param_1 != *puVar4) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 6;
      if (DAT_6606f0e0 <= uVar3) {
        return uVar1;
      }
    }
    iVar5 = uVar3 * 0x18;
    puVar4 = &param_1;
    param_1 = 0xff;
    uVar1 = *(undefined4 *)(iVar5 + 0x6606efd0);
    uVar6 = *(undefined4 *)(iVar5 + 0x6606efcc);
    pcVar2 = (char *)FUN_6605bc10(param_2,0x100);
    FUN_66051b10(*(char **)(iVar5 + 0x6606efc4),*(undefined4 *)(iVar5 + 0x6606efc8),pcVar2,puVar4,
                 uVar6,uVar1);
    FUN_6605bc90(this,-1);
    *param_3 = *(undefined4 *)(iVar5 + 0x6606efd4);
    uVar1 = 0;
  }
  return uVar1;
}


