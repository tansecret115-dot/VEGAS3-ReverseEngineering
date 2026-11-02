/* Module: vegas30.exe
   Function: FUN_005cf890
   Address: 005cf890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cf890(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int *local_8;
  int *local_4;
  
  uVar2 = 0;
  local_8 = (int *)0x0;
  iVar1 = FUN_005f6990(&local_8);
  if (-1 < iVar1) {
    local_4 = (int *)0x0;
    param_1 = 0;
    iVar1 = (**(code **)(*local_8 + 0x48))(local_8,&local_4,&param_1);
    if ((-1 < iVar1) && (0x47 < param_1)) {
      iVar1 = 4;
      bVar5 = true;
      piVar4 = &DAT_00646788;
      piVar3 = local_4;
      do {
        piVar3 = piVar3 + 1;
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if ((bVar5) &&
         ((((iVar1 = local_4[5], iVar1 == 0x64737664 || (iVar1 == 0x6e76645f)) ||
           (iVar1 == 0x6e766477)) || (iVar1 == 0x70766477)))) {
        uVar2 = 1;
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar2;
}


