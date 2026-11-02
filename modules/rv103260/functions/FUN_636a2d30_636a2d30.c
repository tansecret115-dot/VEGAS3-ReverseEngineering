/* Module: rv103260.dll
   Function: FUN_636a2d30
   Address: 636a2d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_636a2d30(int param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_636a2ae0(param_2,param_5,param_6,param_5,param_1,param_3,param_4,param_3);
  iVar1 = param_1 + param_4 * param_3;
  iVar2 = (int)param_3 >> 1;
  iVar3 = (int)param_5 >> 1;
  FUN_636a2ae0(param_2 + param_6 * param_5,iVar3,(int)param_6 >> 1,iVar3,iVar1,iVar2,
               (int)param_4 >> 1,iVar2);
  FUN_636a2ae0(param_2 + param_6 * param_5 + (param_5 >> 1) * (param_6 >> 1),iVar3,(int)param_6 >> 1
               ,iVar3,(param_3 >> 1) * (param_4 >> 1) + iVar1,iVar2,(int)param_4 >> 1,iVar2);
  return 0;
}


