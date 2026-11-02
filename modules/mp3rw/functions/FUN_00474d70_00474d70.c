/* Module: mp3rw.dll
   Function: FUN_00474d70
   Address: 00474d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474d70(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_004746a0(param_1,0xd8);
  iVar2 = 0;
  piVar1 = (int *)((int)param_1 + 0x7d);
  do {
    if (*piVar1 != 0) {
      FUN_00474950(param_1,iVar2);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  if (*(char *)((int)param_1 + 0xe6) == '\0') {
    iVar2 = 0;
    piVar1 = (int *)((int)param_1 + 0x9d);
    do {
      if (piVar1[-4] != 0) {
        FUN_00474b70(param_1,iVar2,'\0');
      }
      if (*piVar1 != 0) {
        FUN_00474b70(param_1,iVar2,'\x01');
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 4);
  }
  FUN_004746a0(param_1,0xd9);
  return;
}


