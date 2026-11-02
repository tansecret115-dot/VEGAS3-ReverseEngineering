/* Module: vegas30k.dll
   Function: FUN_01193530
   Address: 01193530
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01193530(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  
  FUN_011a8670(param_2,param_3);
  piVar1 = (int *)param_1[0x186];
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if ((param_1[2] & 0x400U) == 0) {
    return 0;
  }
  iVar3 = (**(code **)(*piVar1 + 0xd4))(piVar1,param_2,param_3);
  iVar2 = param_1[0x19d];
  while ((iVar2 != 0 && (-1 < iVar3))) {
    if (((*(byte *)(iVar2 + 0xc) & 2) != 0) &&
       (((*(byte *)(iVar2 + 8) & 2) != 0 && (*(int *)(param_1[0x186] + 0x28) != *(int *)(iVar2 + 4))
        ))) {
      iVar3 = FUN_01194180(unaff_EBX,param_3);
    }
    iVar2 = *(int *)(iVar2 + 0x18);
  }
  piVar1 = (int *)param_1[0x19b];
  if ((piVar1 != (int *)0x0) && ((param_1[2] & 4U) == 0)) {
    iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1);
    if (-1 < iVar3) goto LAB_011935db;
    (**(code **)(*param_1 + 0x120))(param_1);
  }
  if (iVar3 < 0) {
    (**(code **)(*param_1 + 0x120))(param_1);
    return iVar3;
  }
LAB_011935db:
  param_1[2] = param_1[2] | 0x800;
  if ((code *)param_1[0x193] == (code *)0x0) {
    return iVar3;
  }
  (*(code *)param_1[0x193])
            (param_1,0x12,param_1[0x194],0,0,0xffffffff,0xffffffff,0,0,0,0,0,0,0xffffffff);
  return iVar3;
}


