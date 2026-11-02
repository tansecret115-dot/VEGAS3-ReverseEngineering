/* Module: rmto3260.dll
   Function: FUN_662e98d0
   Address: 662e98d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x662e990e) */

int __thiscall FUN_662e98d0(void *this,int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_3;
  (**(code **)(**(int **)((int)this + 4) + 8))(param_3,0);
  piVar1 = *(int **)((int)this + 4);
  param_3 = 0x14;
  iVar4 = piVar1[5];
  if ((uint)piVar1[6] < iVar4 + 0x14U) {
    iVar3 = (**(code **)(*piVar1 + 0x24))(&param_3);
  }
  else {
    *(int *)(piVar1[8] + 0x14) = *(int *)(piVar1[8] + 0x14) + 1;
    iVar3 = piVar1[5];
    piVar1[5] = iVar4 + 0x14U;
  }
  *param_1 = iVar3;
  iVar4 = FUN_662e4d20(this,iVar3,0x14,param_3);
  if (iVar4 == 0) {
    *param_2 = param_3;
    return 0;
  }
  if (iVar4 == 0x40040) {
    (**(code **)(**(int **)((int)this + 4) + 8))(iVar2,0);
  }
  return iVar4;
}


