/* Module: vegas30.exe
   Function: FUN_00425cf0
   Address: 00425cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425cf0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  FUN_00562990(&DAT_0064b538,1);
  FUN_00562a20(&DAT_0064b538);
  piVar2 = (int *)(param_1 + 0x98);
  iVar3 = 2;
  do {
    if (*piVar2 != 0) {
      piVar1 = (int *)piVar2[-1];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        piVar2[-1] = 0;
      }
      (**(code **)(*(int *)*piVar2 + 0x24))((int *)*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00562990(&DAT_0064b538,0);
  return 0;
}


