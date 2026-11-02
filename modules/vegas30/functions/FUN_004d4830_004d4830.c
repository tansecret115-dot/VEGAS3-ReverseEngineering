/* Module: vegas30.exe
   Function: FUN_004d4830
   Address: 004d4830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4830(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = _DAT_00000000;
    if (*(int *)(param_1 + 0xbc8) != 0) {
      piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar3 = *piVar4;
    }
  }
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 8) + iVar5 * 4);
      if (((*(int *)(iVar1 + 4) == 2) && ((*(byte *)(iVar1 + 0x10) & 0x80) != 0)) &&
         (iVar1 = *(int *)(*(int *)(iVar1 + 0x69c) + 0x54), iVar1 != 0)) {
        local_8 = 0xbf800000;
        local_4 = 0xbf800000;
        if ((*(int *)(iVar1 + 0x324) != 0) && (*(int *)(iVar1 + 0x104) < *(int *)(iVar1 + 0x10c))) {
          _MeterInst_Message_16(*(int *)(iVar1 + 0x324),0x60c,0x20000,&local_8);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}


