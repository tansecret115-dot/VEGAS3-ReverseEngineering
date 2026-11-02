/* Module: vegas30.exe
   Function: FUN_005eaa10
   Address: 005eaa10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005eaa10(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_3;
  *param_3 = 0;
  iVar2 = FUN_005badc0(0,3,&param_2,param_1,0,&param_3);
  if (-1 < iVar2) {
    *piVar1 = *piVar1 + (int)param_3;
  }
  return;
}


