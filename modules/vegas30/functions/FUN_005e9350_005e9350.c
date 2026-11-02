/* Module: vegas30.exe
   Function: FUN_005e9350
   Address: 005e9350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e9350(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = param_1;
  *param_3 = 0;
  iVar2 = FUN_005bad70(param_1,&param_1);
  if (-1 < iVar2) {
    iVar2 = FUN_005c3d90(iVar3,0);
    if (-1 < iVar2) {
      iVar3 = FUN_005bad70(iVar3,&param_3);
      if (-1 < iVar3) {
        *piVar1 = (int)param_3 - param_1;
      }
    }
  }
  return;
}


