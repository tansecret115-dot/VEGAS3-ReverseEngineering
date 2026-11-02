/* Module: sftrans1.dll
   Function: FUN_00422de0
   Address: 00422de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00422de0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_1,4,0);
  if (-1 < iVar1) {
    iVar1 = 0;
    piVar3 = (int *)(param_1 + 4);
    do {
      iVar2 = (**(code **)(*param_2 + 0x10))(param_2,piVar3,4,0);
      if (iVar2 < 0) {
        return;
      }
      if ((0 < *piVar3) &&
         (iVar2 = (**(code **)(*param_2 + 0x10))(param_2,piVar3[1],*piVar3 * 0x68,0), iVar2 < 0)) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar1 < 4);
  }
  return;
}


