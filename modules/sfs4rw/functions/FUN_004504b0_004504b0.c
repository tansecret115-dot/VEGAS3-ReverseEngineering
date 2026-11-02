/* Module: sfs4rw.dll
   Function: FUN_004504b0
   Address: 004504b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004504b0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

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
  iVar2 = FUN_0044ffd0(unaff_retaddr,unaff_EBX,0x101,0x49e51c,0x49e598,param_3,param_1,param_5,
                       (uint *)&stack0xfffffff0,puVar1);
  if (iVar2 == 0) {
    if (*param_1 != 0) {
      iVar2 = FUN_0044ffd0(unaff_retaddr + unaff_EBX,0,0,0x49e614,0x49e68c,param_4,param_2,param_5,
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
        if (iVar2 == -4) goto LAB_004505d9;
      }
      *(char **)(in_stack_00000024 + 0x18) = "empty distance tree with lengths";
      iVar2 = -3;
LAB_004505d9:
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
    if (iVar2 == -4) goto LAB_0045061a;
  }
  *(char **)(in_stack_00000024 + 0x18) = "incomplete literal/length tree";
  iVar2 = -3;
LAB_0045061a:
  (**(code **)(in_stack_00000024 + 0x24))(*(undefined4 *)(in_stack_00000024 + 0x28),puVar1);
  return iVar2;
}


