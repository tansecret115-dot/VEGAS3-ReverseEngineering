/* Module: sftrans1.dll
   Function: FUN_00544f00
   Address: 00544f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00544f00(int *param_1,undefined4 param_2,int param_3,int param_4)

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
  FUN_00545bc0();
  FUN_00545dd0(&param_3,iVar2,iVar3,0);
  FUN_00545bd0(&param_3);
  FUN_00545d80();
  return param_2;
}


