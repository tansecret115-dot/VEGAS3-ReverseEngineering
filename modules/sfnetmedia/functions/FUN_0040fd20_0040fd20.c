/* Module: sfnetmedia.dll
   Function: FUN_0040fd20
   Address: 0040fd20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040fd20(undefined4 *param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int *piStack_14;
  int *piStack_10;
  int local_4;
  
  piStack_10 = &local_4;
  piStack_14 = (int *)&DAT_0043c7f0;
  local_4 = 0;
  iVar1 = (**(code **)*param_1)(param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*piStack_10 + 0x10))(piStack_10,unaff_retaddr,&piStack_14);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*piStack_14 + 0x14))(piStack_14,local_4,param_1);
    }
  }
  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))(piStack_14);
  }
  if (piStack_10 != (int *)0x0) {
    (**(code **)(*piStack_10 + 8))(piStack_10);
  }
  return iVar1;
}


