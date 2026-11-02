/* Module: vidcap30.exe
   Function: FUN_005602c0
   Address: 005602c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005602c0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint unaff_EBX;
  int unaff_retaddr;
  int in_stack_00000024;
  
  iVar1 = (**(code **)(in_stack_00000024 + 0x20))(*(undefined4 *)(in_stack_00000024 + 0x28),0x120,4)
  ;
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_0055fde0(unaff_retaddr,unaff_EBX,0x101,&DAT_005a0ac4,&DAT_005a0b40,param_3,param_1,
                       param_5,&stack0xfffffff0,iVar1);
  if (iVar2 == 0) {
    if (*param_1 != 0) {
      iVar2 = FUN_0055fde0(unaff_retaddr + unaff_EBX * 4,0,0,&DAT_005a0bbc,&DAT_005a0c34,param_4,
                           param_2,param_5,&stack0xfffffff0,iVar1);
      if (iVar2 == 0) {
        if ((*param_2 != 0) || (unaff_EBX < 0x102)) {
          (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),iVar1);
          return 0;
        }
      }
      else {
        if (iVar2 == -3) {
          *(char **)(in_stack_00000024 + 0x18) = "oversubscribed distance tree";
          (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -5) {
          *(char **)(in_stack_00000024 + 0x18) = "incomplete distance tree";
          (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -4) goto LAB_005603e9;
      }
      *(char **)(in_stack_00000024 + 0x18) = "empty distance tree with lengths";
      iVar2 = -3;
LAB_005603e9:
      (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),iVar1);
      return iVar2;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(in_stack_00000024 + 0x18) = "oversubscribed literal/length tree";
      (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),iVar1);
      return -3;
    }
    if (iVar2 == -4) goto LAB_0056042a;
  }
  *(char **)(in_stack_00000024 + 0x18) = "incomplete literal/length tree";
  iVar2 = -3;
LAB_0056042a:
  (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),iVar1);
  return iVar2;
}


