/* Module: aviplug.dll
   Function: FUN_5f9547e0
   Address: 5f9547e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __fastcall FUN_5f9547e0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  undefined4 *puVar4;
  int *unaff_retaddr;
  undefined4 *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000070;
  int in_stack_000000d8;
  int *in_stack_000000e0;
  int *in_stack_000000e4;
  undefined1 *puStack_10;
  
  puVar4 = &stack0x00000020;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puStack_10 = &stack0x00000014;
  piVar1 = (int *)(**(code **)(*in_stack_000000e0 + 0x28))
                            (in_stack_000000e0,in_stack_000000e4,param_2);
  piVar2 = unaff_EBP;
  if (piVar1 == unaff_EBP) {
    (**(code **)(*in_stack_000000e0 + 0x3c))
              (in_stack_000000e0,unaff_EBP,&stack0x0000002c,&stack0x00000074);
    piVar1 = (int *)(**(code **)(*in_stack_000000e0 + 0x50))
                              (in_stack_000000e0,&stack0x00000000,&DAT_5f9eec18,&DAT_5f9da550,
                               &stack0x0000001c);
    if (piVar1 == unaff_EBP) {
      FUN_5f94fbb0(&stack0x0000002c);
      in_stack_0000002c = DAT_5f9eebb8;
      in_stack_00000034 = DAT_5f9eebc0;
      in_stack_00000030 = DAT_5f9eebbc;
      in_stack_00000038 = DAT_5f9eebc4;
      in_stack_00000040 = DAT_5f9eebdc;
      in_stack_0000003c = DAT_5f9eebd8;
      in_stack_00000044 = DAT_5f9eebe0;
      in_stack_00000048 = DAT_5f9eebe4;
      piVar2 = (int *)(**(code **)(in_stack_0000001c[1] + 0x50))
                                (in_stack_0000001c + 1,&stack0x0000002c);
      if ((int)unaff_EBP <= (int)piVar2) {
        (**(code **)*in_stack_0000001c)(in_stack_0000001c,&DAT_5f9eeb58,&stack0x00000000);
        piVar2 = (int *)(**(code **)(*unaff_EBP + 0x4c))(unaff_EBP,1,&puStack_10);
        if (((int)unaff_EBP <= (int)piVar2) &&
           (piVar2 = (int *)(**(code **)(*unaff_EBP + 0x2c))(unaff_EBP,unaff_EBX,unaff_retaddr),
           (int)unaff_EBP <= (int)piVar2)) {
          piVar1 = (int *)0xffffffff;
          iVar3 = *(int *)(in_stack_000000d8 + 4);
          if (iVar3 < 0x169) {
            if (iVar3 == 0x168) {
              piVar1 = (int *)0x3e9;
            }
            else if (iVar3 == 0x58) {
              piVar1 = (int *)0x3eb;
            }
            else if (iVar3 == 0xb4) {
              piVar1 = (int *)0x3ea;
            }
          }
          else if (iVar3 == 0x2d0) {
            piVar1 = (int *)0x3e8;
          }
          (**(code **)*unaff_EBP)(unaff_EBP,&DAT_5f9da550,&stack0xfffffff4);
          piVar2 = (int *)(**(code **)(*in_stack_000000e4 + 0xc))
                                    (in_stack_000000e4,&stack0x00000000);
          if ((int)unaff_EBP <= (int)piVar2) {
            if (unaff_EBP != piVar1) {
              (**(code **)(*in_stack_000000e0 + 0x40))
                        (in_stack_000000e0,unaff_EBP,0x18,piVar1,&stack0x0000002c,&stack0x00000074);
              piVar2 = (int *)(**(code **)(unaff_EBP[1] + 0x50))(unaff_EBP + 1,&stack0x00000014);
              if (((int)piVar2 < (int)unaff_EBP) ||
                 (piVar2 = (int *)(**(code **)(*unaff_EDI + 0x10))(unaff_EDI,piVar1),
                 (int)piVar2 < (int)unaff_EBP)) goto LAB_5f954a87;
            }
            FUN_5f94fbb0(&stack0x0000002c);
            piVar2 = (int *)(**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,&stack0x0000002c);
            if ((int)unaff_EBP <= (int)piVar2) {
              in_stack_00000020 = in_stack_00000070;
              FUN_5f94fbb0(&stack0x0000002c);
              piVar2 = (int *)(**(code **)(in_stack_0000001c[1] + 0x1c))
                                        (in_stack_0000001c + 1,&stack0x0000002c);
              if ((int)unaff_EBP <= (int)piVar2) {
                in_stack_00000024 = in_stack_00000070;
                piVar2 = (int *)(**(code **)(unaff_EBP[2] + 0x1c))(unaff_EBP + 2);
                if ((int)unaff_EBP <= (int)piVar2) {
                  in_stack_00000028 = 1;
                  (**(code **)(*in_stack_000000e0 + 0x4c))
                            (in_stack_000000e0,&stack0x00000010,in_stack_000000e0 + 6);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_5f954a87:
  if (unaff_EDI != unaff_EBP) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  if (unaff_retaddr != unaff_EBP) {
    (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
  }
  if (unaff_EBX != unaff_EBP) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  (**(code **)(*in_stack_000000e0 + 0x48))(in_stack_000000e0,&stack0x00000010);
  if (unaff_retaddr != unaff_EBP) {
    puStack_10 = (undefined1 *)(**(code **)(*in_stack_000000e0 + 0x44))(in_stack_000000e0,piVar2);
  }
  return puStack_10;
}


