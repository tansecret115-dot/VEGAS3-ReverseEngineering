/* Module: vegas30.exe
   Function: FUN_005e9de0
   Address: 005e9de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e9de0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_4;
  *param_4 = 0;
  iVar2 = *(int *)(*(int *)(param_2 + 8) + param_3 * 4);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_005badc0(iVar2,0x2a,0,param_1,1,&param_4);
  if (-1 < iVar2) {
    *piVar1 = *piVar1 + (int)param_4;
  }
  return;
}


