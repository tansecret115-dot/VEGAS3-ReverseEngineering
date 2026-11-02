/* Module: sfmarket2.dll
   Function: FUN_0040a4a0
   Address: 0040a4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040a4a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int *piStack_14;
  int *piStack_10;
  int local_4;
  
  piStack_10 = &local_4;
  piStack_14 = (int *)&DAT_004a4120;
  local_4 = 0;
  iVar1 = (**(code **)*param_1)(param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*piStack_10 + 0x10))(piStack_10,local_4,&piStack_14);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*piStack_14 + 0x18))(piStack_14,unaff_retaddr);
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


