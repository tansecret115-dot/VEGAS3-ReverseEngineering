/* Module: wmfplug2.dll
   Function: FUN_00402ea0
   Address: 00402ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402ea0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = -0x7ffb1ff9;
  piVar1 = *(int **)(param_1 + 0x240);
  if (piVar1 != (int *)0x0) {
    local_4 = 0;
    param_1 = param_5;
    iVar3 = 1;
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_4,param_4,&param_1,param_6,param_7);
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  return iVar3;
}


