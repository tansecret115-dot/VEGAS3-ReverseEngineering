/* Module: aviplug.dll
   Function: FUN_5f933ff0
   Address: 5f933ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f933ff0(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int *piVar2;
  int *piVar3;
  undefined4 local_4;
  
  local_4 = 0;
  piVar3 = param_2;
  iVar1 = (**(code **)*param_2)(param_2,&DAT_5f9da4b0,&local_4);
  if (-1 < iVar1) {
    piVar2 = (int *)0x584e4653;
    iVar1 = (**(code **)(*piVar3 + 0x1c))(piVar3,0x584e4653,unaff_retaddr,&param_1);
    if (iVar1 == -0x7ffbbf8d) {
      iVar1 = -0x7ffb1ff6;
    }
    (**(code **)(*piVar2 + 8))(piVar2);
    return iVar1;
  }
  return -0x7fffbffe;
}


