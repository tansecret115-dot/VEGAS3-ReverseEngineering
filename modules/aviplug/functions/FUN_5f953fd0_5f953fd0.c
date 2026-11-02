/* Module: aviplug.dll
   Function: FUN_5f953fd0
   Address: 5f953fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f9542ec) */
/* WARNING: Removing unreachable block (ram,0x5f954312) */

uint * __fastcall FUN_5f953fd0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int unaff_EBX;
  uint *unaff_EBP;
  uint *unaff_ESI;
  uint *unaff_EDI;
  undefined4 *puVar3;
  uint *unaff_retaddr;
  int in_stack_00000018;
  int *in_stack_0000001c;
  int *in_stack_00000024;
  undefined4 *in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  int in_stack_0000007c;
  int in_stack_000000e0;
  int *in_stack_000000e8;
  int *in_stack_000000ec;
  
  puVar3 = &stack0x00000028;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (uint *)(**(code **)(*in_stack_000000e8 + 0x14))
                             (in_stack_000000e8,in_stack_000000ec,param_2);
  if (puVar1 == unaff_EBP) {
    (**(code **)(*in_stack_000000e8 + 0x40))
              (in_stack_000000e8,in_stack_000000e8[4],0x18,1000,&stack0x00000038,&stack0x00000080);
    puVar1 = (uint *)(**(code **)(*in_stack_000000e8 + 0x50))
                               (in_stack_000000e8,&stack0x00000004,&DAT_5f9eec08,&DAT_5f9da560,
                                &stack0x00000020);
    if (puVar1 == unaff_EBP) {
      FUN_5f94fbb0(&stack0x00000038);
      in_stack_0000003c = DAT_5f9eebbc;
      in_stack_00000040 = DAT_5f9eebc0;
      in_stack_00000038 = DAT_5f9eebb8;
      in_stack_00000048 = DAT_5f9eeba8;
      in_stack_0000004c = DAT_5f9eebac;
      in_stack_00000044 = DAT_5f9eebc4;
      in_stack_00000054 = DAT_5f9eebb4;
      in_stack_00000050 = DAT_5f9eebb0;
      iVar2 = (**(code **)(in_stack_00000028[1] + 0x50))(in_stack_00000028 + 1,&stack0x00000038);
      if ((int)unaff_EBP <= iVar2) {
        (**(code **)*in_stack_00000028)(in_stack_00000028,&DAT_5f9eeb58,&stack0x00000000);
        iVar2 = (**(code **)(*unaff_EBP + 0x4c))(unaff_EBP,1,&stack0xfffffff8);
        if (((int)unaff_EBP <= iVar2) &&
           (iVar2 = (**(code **)(*in_stack_0000001c + 0x2c))
                              (in_stack_0000001c,unaff_EBP,unaff_retaddr), (int)unaff_EBP <= iVar2))
        {
          puVar1 = (uint *)(((uint *)in_stack_000000e8[4] != unaff_EBP) + 2000);
          (**(code **)*unaff_EBP)(unaff_EBP,&DAT_5f9da560,&stack0xfffffff8);
          iVar2 = (**(code **)(*in_stack_000000ec + 0xc))
                            (in_stack_000000ec,&stack0x00000004,&stack0x0000000c,&stack0x00000000);
          if ((int)unaff_EBP <= iVar2) {
            if (((unaff_EBP != puVar1) || (in_stack_00000018 != 0x7d7)) ||
               (unaff_EBP != (uint *)0x7dc)) {
              (**(code **)(*in_stack_000000e8 + 0x3c))
                        (in_stack_000000e8,in_stack_000000e8[4],&stack0x00000038,&stack0x00000080);
              iVar2 = (**(code **)(*(int *)(in_stack_00000018 + 4) + 0x50))
                                (in_stack_00000018 + 4,&stack0x00000028);
              if ((iVar2 < (int)unaff_EBP) ||
                 (iVar2 = (**(code **)(*unaff_ESI + 0x10))
                                    (unaff_ESI,puVar1,in_stack_00000018,unaff_EBP),
                 iVar2 < (int)unaff_EBP)) goto LAB_5f9542c8;
            }
            FUN_5f94fbb0(&stack0x00000038);
            iVar2 = (**(code **)(*in_stack_00000024 + 0x1c))(in_stack_00000024,&stack0x00000038);
            if ((int)unaff_EBP <= iVar2) {
              in_stack_0000002c = in_stack_0000007c;
              FUN_5f94fbb0(&stack0x00000038);
              iVar2 = (**(code **)(in_stack_00000028[1] + 0x1c))
                                (in_stack_00000028 + 1,&stack0x00000038);
              if ((int)unaff_EBP <= iVar2) {
                in_stack_00000030 = in_stack_0000007c;
                *(undefined4 *)(in_stack_0000007c + 0x40) = 0x64737664;
                *(uint *)(in_stack_0000007c + 0x44) =
                     (-(uint)(in_stack_000000e8[4] != 0) & 24000) + 120000;
                iVar2 = (**(code **)(in_stack_0000001c[2] + 0x1c))(in_stack_0000001c + 2);
                if (((int)unaff_EBP <= iVar2) &&
                   ((*(short *)(in_stack_000000e0 + 0xe) == 0x18 ||
                    (iVar2 = FUN_5f97a4e0((undefined4 *)&stack0xfffffffc,0x1b,
                                          *(int *)(in_stack_000000e0 + 4),
                                          *(int *)(in_stack_000000e0 + 8),unaff_EBP,(uint)unaff_EBP,
                                          (uint)unaff_EBP), (int)unaff_EBP <= iVar2)))) {
                  in_stack_00000034 = 1;
                  (**(code **)(*in_stack_000000e8 + 0x4c))
                            (in_stack_000000e8,&stack0x0000001c,in_stack_000000e8 + 0xd);
                  in_stack_000000e8[5] = unaff_EBX;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_5f9542c8:
  if (unaff_ESI != unaff_EBP) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (unaff_retaddr != unaff_EBP) {
    (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
  }
  (**(code **)(*in_stack_000000e8 + 0x48))(in_stack_000000e8,&stack0x0000001c);
  if (unaff_EDI != unaff_EBP) {
    FUN_5f97a480(unaff_EDI,(uint)unaff_EBP);
  }
  return unaff_retaddr;
}


