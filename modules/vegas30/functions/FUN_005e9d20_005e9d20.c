/* Module: vegas30.exe
   Function: FUN_005e9d20
   Address: 005e9d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e9d20(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_3;
  *param_3 = 0;
  iVar2 = FUN_005badc0(param_2 + 0x638,0x41,0,param_1,1,&param_3);
  if (-1 < iVar2) {
    *piVar1 = *piVar1 + (int)param_3;
  }
  return;
}


