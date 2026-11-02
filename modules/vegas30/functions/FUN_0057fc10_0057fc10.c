/* Module: vegas30.exe
   Function: FUN_0057fc10
   Address: 0057fc10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057fc10(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = 0;
  }
  iVar2 = param_4;
  if (param_4 < 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(*param_1 + -8);
  if (iVar1 < iVar3 + iVar2) {
    iVar2 = iVar1 - iVar3;
  }
  if (iVar1 < iVar3) {
    iVar2 = 0;
  }
  FUN_005808d0();
  FUN_00580ae0(&param_3,iVar2,iVar3,0);
  FUN_005808e0(&param_3);
  FUN_00580a90();
  return param_2;
}


