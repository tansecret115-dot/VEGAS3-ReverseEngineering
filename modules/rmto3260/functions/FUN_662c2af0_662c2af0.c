/* Module: rmto3260.dll
   Function: FUN_662c2af0
   Address: 662c2af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c2af0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_662c2c40(param_1);
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_662ed6f0(puVar1);
  }
  *(int *)(param_1 + 0x34) = iVar2;
  if (iVar2 == 0) {
    iVar4 = -0x7ff8fff2;
  }
  if (-1 < iVar4) {
    puVar1 = operator_new(0x14);
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_662ed6f0(puVar1);
    }
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar2 == 0) {
      iVar4 = -0x7ff8fff2;
    }
    if (-1 < iVar4) {
      puVar1 = operator_new(0x14);
      if (puVar1 == (undefined4 *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_662ed6f0(puVar1);
      }
      *(int *)(param_1 + 0x48) = iVar2;
      if (iVar2 == 0) {
        iVar4 = -0x7ff8fff2;
      }
      if (-1 < iVar4) {
        puVar1 = operator_new(0x14);
        if (puVar1 == (undefined4 *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_662ed6f0(puVar1);
        }
        *(int *)(param_1 + 0x44) = iVar2;
        if (iVar2 == 0) {
          iVar4 = -0x7ff8fff2;
        }
        if (-1 < iVar4) {
          puVar1 = operator_new(0x14);
          if (puVar1 == (undefined4 *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_662ed6f0(puVar1);
          }
          *(int *)(param_1 + 0x40) = iVar2;
          if (iVar2 == 0) {
            iVar4 = -0x7ff8fff2;
          }
          if (-1 < iVar4) {
            piVar3 = operator_new(0x3a);
            if (piVar3 == (int *)0x0) {
              piVar3 = (int *)0x0;
            }
            else {
              piVar3 = FUN_662e0760(piVar3);
            }
            *(int **)(param_1 + 0x2c) = piVar3;
            if (piVar3 == (int *)0x0) {
              iVar4 = -0x7ff8fff2;
            }
            if (-1 < iVar4) {
              piVar3 = operator_new(0x2a);
              if (piVar3 == (int *)0x0) {
                piVar3 = (int *)0x0;
              }
              else {
                piVar3 = FUN_662e0cc0(piVar3);
              }
              *(int **)(param_1 + 0x30) = piVar3;
              if (piVar3 == (int *)0x0) {
                iVar4 = -0x7ff8fff2;
              }
              if (iVar4 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  FUN_662c2c40(param_1);
  return iVar4;
}


