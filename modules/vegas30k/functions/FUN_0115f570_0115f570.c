/* Module: vegas30k.dll
   Function: FUN_0115f570
   Address: 0115f570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115f570(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0115eea0(param_1,0xd8);
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x7d);
  do {
    if (*piVar1 != 0) {
      FUN_0115f150(param_1,iVar2);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  if (*(char *)(param_1 + 0xe6) == '\0') {
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0x9d);
    do {
      if (piVar1[-4] != 0) {
        FUN_0115f370(param_1,iVar2,0);
      }
      if (*piVar1 != 0) {
        FUN_0115f370(param_1,iVar2,1);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 4);
  }
  FUN_0115eea0(param_1,0xd9);
  return;
}


