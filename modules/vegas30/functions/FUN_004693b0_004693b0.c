/* Module: vegas30.exe
   Function: FUN_004693b0
   Address: 004693b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004693b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    local_8 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(param_1[2] + local_8 * 4);
        if ((*piVar2 == 0x31) || (*piVar2 == 0x32)) {
          iVar3 = FUN_005ec620();
          if ((iVar3 != 0) && (iVar3 = 0, 0 < piVar2[0x21])) {
            piVar4 = piVar2 + 0x88;
            do {
              FUN_005ed410(*(undefined4 *)(*piVar4 + 0x18),0,0);
              iVar3 = iVar3 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar3 < piVar2[0x21]);
          }
          FUN_00469690();
        }
        local_8 = local_8 + 1;
      } while (local_8 < iVar1);
    }
    _SfList_DeleteList_16(param_1,0,0xffffffff,0);
  }
  return;
}


