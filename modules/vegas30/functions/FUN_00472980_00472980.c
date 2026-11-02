/* Module: vegas30.exe
   Function: FUN_00472980
   Address: 00472980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00472980(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  uint in_stack_00000028;
  int in_stack_0000002c;
  uint in_stack_00000030;
  int in_stack_00000034;
  undefined4 in_stack_00000040;
  undefined4 *in_stack_00000044;
  int local_14;
  uint local_8;
  
  uVar4 = *(uint *)(in_stack_0000001c + 0x18);
  iVar1 = *(int *)(in_stack_0000001c + 0x1c);
  iVar9 = (in_stack_0000002c - iVar1) - (uint)(in_stack_00000028 < uVar4);
  uVar7 = in_stack_00000030 - uVar4;
  iVar5 = (in_stack_00000034 - iVar1) - (uint)(in_stack_00000030 < uVar4);
  iVar8 = *(int *)(in_stack_0000001c + 0x24);
  uVar2 = *(uint *)(in_stack_0000001c + 0x20);
  local_14 = 0;
  uVar3 = uVar7;
  iVar6 = iVar5;
  do {
    if (local_14 == 0) {
      iVar6 = *(int *)(in_stack_00000024 + 0x54);
      bVar11 = *(uint *)(in_stack_00000024 + 0x50) < uVar4;
      uVar3 = *(uint *)(in_stack_00000024 + 0x50) - uVar4;
LAB_00472a0a:
      iVar6 = (iVar6 - iVar1) - (uint)bVar11;
    }
    else {
      if (local_14 == 1) {
        iVar6 = *(int *)(in_stack_00000024 + 0x6c);
        bVar11 = *(uint *)(in_stack_00000024 + 0x68) < uVar4;
        uVar3 = *(uint *)(in_stack_00000024 + 0x68) - uVar4;
        goto LAB_00472a0a;
      }
      if (local_14 == 2) {
        uVar3 = *(uint *)(in_stack_00000024 + 0x70) + *(uint *)(in_stack_00000024 + 0x68);
        iVar6 = *(int *)(in_stack_00000024 + 0x74) + *(int *)(in_stack_00000024 + 0x6c) +
                (uint)CARRY4(*(uint *)(in_stack_00000024 + 0x70),*(uint *)(in_stack_00000024 + 0x68)
                            );
        bVar11 = uVar3 < uVar4;
        uVar3 = uVar3 - uVar4;
        goto LAB_00472a0a;
      }
    }
    iVar10 = iVar8;
    local_8 = uVar2;
    if ((iVar5 <= iVar8) && ((iVar5 < iVar8 || (uVar7 < uVar2)))) {
      iVar10 = iVar5;
      local_8 = uVar7;
    }
    if (((iVar9 <= iVar6) && ((iVar9 < iVar6 || (in_stack_00000028 - uVar4 <= uVar3)))) &&
       ((iVar6 < iVar10 || ((iVar6 <= iVar10 && (uVar3 < local_8)))))) {
      iVar8 = iVar8 - (uint)(uVar2 == 0);
      uVar4 = uVar3 + 1;
      iVar6 = iVar6 + (uint)(0xfffffffe < uVar3);
      if ((iVar8 < iVar6) || ((iVar8 <= iVar6 && (uVar2 - 1 <= uVar4)))) {
        uVar4 = uVar2 - 1;
        iVar6 = iVar8;
      }
      uVar12 = FUN_005ceab0(in_stack_00000018,in_stack_0000001c,uVar4,iVar6,0,0,in_stack_00000014,0)
      ;
      *in_stack_00000010 = uVar12;
      if (local_14 == 0) {
        *in_stack_00000044 = 1;
      }
      FUN_00472770(*(undefined4 *)in_stack_00000010,*(undefined4 *)((int)in_stack_00000010 + 4),
                   in_stack_00000020,0,local_14 != 0,in_stack_00000040);
      return 1;
    }
    local_14 = local_14 + 1;
    if (2 < local_14) {
      return 0;
    }
  } while( true );
}


