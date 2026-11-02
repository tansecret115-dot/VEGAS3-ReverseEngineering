/* Module: erv23260.dll
   Function: FUN_638264d9
   Address: 638264d9
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_638264d9(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int in_stack_00000258;
  
  bVar2 = *(byte *)(param_2 + 10 + unaff_EBP * 8);
  if ((bVar2 & 1) != 0) {
    uVar4 = (uint)(*(byte *)(param_2 + 2 + unaff_EBP * 8) >> 4);
    uVar5 = uVar4 & ((uint)*(byte *)(in_stack_00000258 + 3 + param_2) |
                    *(uint *)(&stack0x00000050 + unaff_EBP * 8)) << 2;
    iVar3 = *(int *)(&DAT_63837b54 +
                    (((uint)*(byte *)(param_2 + -0xd + unaff_EBP * 8) |
                     *(uint *)(&stack0x00000050 + unaff_EBP * 8)) & uVar4) * 4);
    *(int *)(&stack0x00000020 + unaff_EBP * 8) = unaff_EBP * 8;
    *(undefined4 *)(&stack0x0000001c + unaff_EBP * 8) = *(undefined4 *)(&stack0x00000254 + uVar5);
    FUN_63826643(iVar3,param_2);
    bVar2 = *(char *)(extraout_EDX + 10 + unaff_EBP * 8) - (char)uVar5;
    *(byte *)(extraout_EDX + 10 + unaff_EBP * 8) = bVar2;
    param_2 = extraout_EDX;
  }
  iVar3 = param_2 + 8;
  if ((bVar2 & 2) != 0) {
    uVar4 = (uint)(*(byte *)(param_2 + 2 + unaff_EBP * 8) >> 4) &
            ((uint)*(byte *)(in_stack_00000258 + -5 + iVar3) |
            *(uint *)(&stack0x00000050 + unaff_EBP * 8)) << 2;
    *(int *)(&stack0x00000020 + unaff_EBP * 8) = unaff_EBP * 8;
    *(undefined4 *)(&stack0x0000001c + unaff_EBP * 8) = *(undefined4 *)(&stack0x00000254 + uVar4);
    FUN_63826643(-8,iVar3);
    bVar2 = *(char *)(extraout_EDX_00 + 2 + unaff_EBP * 8) + (char)uVar4 * -2;
    *(byte *)(extraout_EDX_00 + 2 + unaff_EBP * 8) = bVar2;
    iVar3 = extraout_EDX_00;
  }
  iVar3 = iVar3 + -8 + unaff_EBP * 8;
  if ((bVar2 & 4) != 0) {
    bVar2 = *(byte *)(iVar3 + -0xd);
    *(undefined4 *)(&stack0x00000020 + unaff_EBP * 8) = 0;
    bVar1 = *(byte *)(iVar3 + 2) >> 4;
    *(int *)(&stack0x0000001c + unaff_EBP * 8) = in_stack_00000258;
    FUN_63826643(*(int *)(&DAT_63837b54 +
                         (((uint)bVar2 | *(uint *)(&stack0x00000050 + unaff_EBP * 8)) & (uint)bVar1)
                         * 4),iVar3);
    bVar2 = *(char *)(extraout_EDX_01 + 10) + bVar1 * -4;
    *(byte *)(extraout_EDX_01 + 10) = bVar2;
    iVar3 = extraout_EDX_01;
  }
  if ((bVar2 & 8) != 0) {
    *(undefined4 *)(&stack0x00000020 + unaff_EBP * 8) = 0;
    bVar2 = *(byte *)(iVar3 + 2);
    *(int *)(&stack0x0000001c + unaff_EBP * 8) = in_stack_00000258;
    FUN_63826643(-8,iVar3 + 8);
    *(byte *)(extraout_EDX_02 + 2) = *(char *)(extraout_EDX_02 + 2) + (bVar2 >> 4) * -8;
  }
  return;
}


