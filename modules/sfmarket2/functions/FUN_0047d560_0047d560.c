/* Module: sfmarket2.dll
   Function: FUN_0047d560
   Address: 0047d560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047d560(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0047ce90(param_1,0xd8);
  iVar2 = 0;
  piVar1 = (int *)((int)param_1 + 0x7d);
  do {
    if (*piVar1 != 0) {
      FUN_0047d140(param_1,iVar2);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  if (*(char *)((int)param_1 + 0xe6) == '\0') {
    iVar2 = 0;
    piVar1 = (int *)((int)param_1 + 0x9d);
    do {
      if (piVar1[-4] != 0) {
        FUN_0047d360(param_1,iVar2,'\0');
      }
      if (*piVar1 != 0) {
        FUN_0047d360(param_1,iVar2,'\x01');
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 4);
  }
  FUN_0047ce90(param_1,0xd9);
  return;
}


