/* Module: sfmarket2.dll
   Function: FUN_00484d00
   Address: 00484d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00484d00(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  uint unaff_EBX;
  int *unaff_retaddr;
  int in_stack_00000024;
  
  puVar1 = (uint *)(**(code **)(in_stack_00000024 + 0x20))
                             (*(undefined4 *)(in_stack_00000024 + 0x28),0x120,4);
  if (puVar1 == (uint *)0x0) {
    return -4;
  }
  iVar2 = FUN_00484820(unaff_retaddr,unaff_EBX,0x101,0x4a38ac,0x4a3928,param_3,param_1,param_5,
                       (uint *)&stack0xfffffff0,puVar1);
  if (iVar2 == 0) {
    if (*param_1 != 0) {
      iVar2 = FUN_00484820(unaff_retaddr + unaff_EBX,0,0,0x4a39a4,0x4a3a1c,param_4,param_2,param_5,
                           (uint *)&stack0xfffffff0,puVar1);
      if (iVar2 == 0) {
        if ((*param_2 != 0) || (unaff_EBX < 0x102)) {
          (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),puVar1);
          return 0;
        }
      }
      else {
        if (iVar2 == -3) {
          *(char **)(in_stack_00000024 + 0x18) = "oversubscribed distance tree";
          (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),puVar1);
          return -3;
        }
        if (iVar2 == -5) {
          *(char **)(in_stack_00000024 + 0x18) = "incomplete distance tree";
          (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),puVar1);
          return -3;
        }
        if (iVar2 == -4) goto LAB_00484e29;
      }
      *(char **)(in_stack_00000024 + 0x18) = "empty distance tree with lengths";
      iVar2 = -3;
LAB_00484e29:
      (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),puVar1);
      return iVar2;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(in_stack_00000024 + 0x18) = "oversubscribed literal/length tree";
      (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),puVar1);
      return -3;
    }
    if (iVar2 == -4) goto LAB_00484e6a;
  }
  *(char **)(in_stack_00000024 + 0x18) = "incomplete literal/length tree";
  iVar2 = -3;
LAB_00484e6a:
  (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),puVar1);
  return iVar2;
}


