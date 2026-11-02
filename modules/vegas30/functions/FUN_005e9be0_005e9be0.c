/* Module: vegas30.exe
   Function: FUN_005e9be0
   Address: 005e9be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e9be0(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_3;
  *param_3 = 0;
  if (param_2 != 0) {
    iVar2 = FUN_005badc0(param_2 + 0x144,0x42,0,param_1,1,&param_3);
    if (-1 < iVar2) {
      *piVar1 = *piVar1 + (int)param_3;
    }
  }
  return;
}


