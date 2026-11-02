/* Module: rmbe3260.dll
   Function: FUN_6602b0f0
   Address: 6602b0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6602b0f0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    return -0x7fffbffb;
  }
  iVar2 = FUN_6604ee00(this,4,s_RNColorCreateImageManipulator2_6606de24,(int)param_1);
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return -0x7fffbffb;
  }
  if (-1 < iVar2) {
    (**(code **)(*piVar1 + 0x50))(piVar1);
    iVar2 = (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,param_2);
    if (iVar2 < 0) {
      return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1,param_3);
    if (iVar2 < 0) {
      return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1,param_4,param_5);
    if (iVar2 < 0) {
      return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,param_6,param_7,param_8,param_9);
    if (iVar2 < 0) {
      return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*(int *)*param_1 + 0x44))((int *)*param_1);
  }
  return iVar2;
}


