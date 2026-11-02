/* Module: vidcap30.exe
   Function: FUN_004d09d0
   Address: 004d09d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004d09d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = &DAT_00585f80;
  piVar2 = param_1;
  iVar1 = (**(code **)*param_1)(param_1,&DAT_00585f80,&param_1);
  if (iVar1 < 0) {
    return false;
  }
  iVar1 = (**(code **)(*piVar3 + 0x6c))(piVar3);
  (**(code **)(*piVar2 + 8))(piVar2);
  return 0 < iVar1;
}


