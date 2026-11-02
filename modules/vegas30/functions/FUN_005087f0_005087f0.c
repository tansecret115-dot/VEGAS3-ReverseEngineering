/* Module: vegas30.exe
   Function: FUN_005087f0
   Address: 005087f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005087f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = 0;
  if (0 < DAT_00646c90) {
    piVar3 = &DAT_00646c70;
    do {
      iVar2 = 4;
      bVar6 = true;
      piVar4 = param_1;
      piVar5 = piVar3;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 8;
    } while (iVar1 < DAT_00646c90);
  }
  return 0;
}


