/* Module: vegas30.exe
   Function: FUN_0042a200
   Address: 0042a200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042a200(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x3210) == -1) || (*(int *)(param_1 + 0x3214) == -1)) ||
     (*(int *)(param_1 + 0x3218) == -1)) {
    if (param_2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_2;
    }
    iVar1 = 0;
    if (0 < iVar3) {
      piVar2 = (int *)param_2[2];
      do {
        if (*piVar2 == 0) {
          return 0;
        }
        if ((*(uint *)(*piVar2 + 0x1a8) & 0x100000) != 0) {
          FUN_004296a0(param_1,iVar1);
          return 1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < iVar3);
    }
  }
  return 0;
}


