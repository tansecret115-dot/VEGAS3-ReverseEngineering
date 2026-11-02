/* Module: sfmarket2.dll
   Function: FUN_00406f40
   Address: 00406f40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00406f40(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 extraout_var;
  undefined2 uVar2;
  undefined2 extraout_var_00;
  short sVar3;
  short sVar4;
  int in_stack_00000024;
  undefined4 in_stack_00000038;
  short in_stack_0000003c;
  int local_4;
  
  local_4 = 0;
  sVar3 = 0x1d;
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  if (-1 < iVar1) {
    (**(code **)(local_4 + 0xc))(&local_4,&stack0xfffffff8);
    sVar4 = sVar3;
    if (&stack0x00000000 != (undefined1 *)0x4) {
      if ((in_stack_00000024 == 6) && (sVar4 = in_stack_0000003c, in_stack_0000003c == 0x1d)) {
        FUN_00406f40(param_1,in_stack_00000038);
        sVar4 = sVar3;
      }
      if (&stack0x00000000 != (undefined1 *)0x4) {
        (**(code **)(*param_1 + 0x4c))(param_1,&local_4);
      }
    }
    uVar2 = 0;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      uVar2 = extraout_var_00;
    }
    return CONCAT22(uVar2,sVar4);
  }
  uVar2 = 0;
  if (&stack0x00000000 != (undefined1 *)0x4) {
    (**(code **)(local_4 + 8))(&local_4);
    uVar2 = extraout_var;
  }
  return CONCAT22(uVar2,0x1d);
}


