/* Module: mp3plug.dll
   Function: FUN_5f692420
   Address: 5f692420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f692420(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  if (param_1[0x420] != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
    iVar3 = 0;
    if (0 < (int)param_1) {
      iVar4 = 0;
      do {
        piVar1 = *(int **)(iVar4 + 0x20 + piVar2[0x420]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x28))(piVar1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x28;
      } while (iVar3 < (int)param_1);
    }
  }
  if (piVar2[1] != 0) {
    (**(code **)(*(int *)piVar2[5] + 0x18))();
    (**(code **)(*(int *)piVar2[5] + 8))((int *)piVar2[5]);
    piVar2[5] = 0;
    piVar2[1] = 0;
  }
  return 0;
}


