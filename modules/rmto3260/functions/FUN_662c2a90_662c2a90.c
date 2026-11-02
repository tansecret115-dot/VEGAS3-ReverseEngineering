/* Module: rmto3260.dll
   Function: FUN_662c2a90
   Address: 662c2a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c2a90(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  (**(code **)(*param_1 + 0x14))(param_1);
  piVar1 = FUN_662f0880(0);
  param_1[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(param_2,0x8000,0);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(param_1[-4] + 0x2c))(param_1 + -4);
    }
  }
  return iVar2;
}


