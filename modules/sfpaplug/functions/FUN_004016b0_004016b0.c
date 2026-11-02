/* Module: sfpaplug.dll
   Function: FUN_004016b0
   Address: 004016b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004016b0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_0044db00;
  piVar3 = param_2;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_00455500;
    piVar3 = param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      iVar1 = 4;
      bVar4 = true;
      piVar2 = &DAT_0044ddb0;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *piVar2 == *param_2;
        piVar2 = piVar2 + 1;
        param_2 = param_2 + 1;
      } while (bVar4);
      if (!bVar4) {
        return 0x80004002;
      }
      if (param_1 != (int *)0x0) {
        piVar2 = param_1 + 1;
        *param_3 = piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
        return 0;
      }
      *param_3 = 0;
      (**(code **)(iRam00000000 + 4))(0);
      return 0;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = (int)param_1;
  return 0;
}


