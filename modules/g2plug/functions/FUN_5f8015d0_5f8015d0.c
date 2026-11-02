/* Module: g2plug.dll
   Function: FUN_5f8015d0
   Address: 5f8015d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f8015d0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_5f869b00;
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
    piVar2 = &DAT_5f86a3d0;
    piVar3 = param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      if ((((DAT_5f869db0 == *param_2) && (DAT_5f869db4 == param_2[1])) &&
          (DAT_5f869db8 == param_2[2])) && (DAT_5f869dbc == param_2[3])) {
        if (param_1 != (int *)0x0) {
          piVar2 = param_1 + 0x11;
          *param_3 = piVar2;
          (**(code **)(*piVar2 + 4))(piVar2);
          return 0;
        }
        *param_3 = 0;
        (**(code **)(iRam00000000 + 4))(0);
        return 0;
      }
      return 0x80004002;
    }
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}


