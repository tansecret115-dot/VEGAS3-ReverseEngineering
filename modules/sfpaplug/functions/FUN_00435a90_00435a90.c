/* Module: sfpaplug.dll
   Function: FUN_00435a90
   Address: 00435a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_00435a90(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_004352e0(param_1);
  piVar2 = FUN_00434f90(this,param_1);
  if ((int)piVar2 < 0) {
    piVar1 = piVar2;
  }
  piVar2 = (int *)FUN_00435730(this,param_1);
  if ((int)piVar2 < 0) {
    piVar1 = piVar2;
  }
  piVar2 = FUN_00434ac0(this,param_1);
  if ((int)piVar2 < 0) {
    piVar1 = piVar2;
  }
  FUN_00435ae0(param_1);
  return piVar1;
}


