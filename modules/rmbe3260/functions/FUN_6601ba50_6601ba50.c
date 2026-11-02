/* Module: rmbe3260.dll
   Function: FUN_6601ba50
   Address: 6601ba50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601ba50(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_6604f240();
  if (piVar1 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,param_1 + 0x88);
  if (-1 < iVar2) {
    iVar2 = (**(code **)*piVar1)(piVar1,&DAT_66065878,param_2);
  }
  return iVar2;
}


