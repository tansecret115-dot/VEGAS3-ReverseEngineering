/* Module: rmme3260.dll
   Function: FUN_66219690
   Address: 66219690
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66219690(void *this)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  undefined2 in_stack_00000010;
  undefined4 *puVar10;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 uVar11;
  int local_48 [3];
  int local_3c [3];
  byte *local_30 [3];
  undefined4 *local_24 [3];
  int local_18;
  void *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  FUN_66250280(local_3c,"ASMRuleBook");
  FUN_662500f0(local_24);
  local_c = 0;
  local_8 = 0;
  FUN_66250110(&stack0xffffff98,local_3c);
  puVar10 = (undefined4 *)0x662196d5;
  iVar2 = FUN_66219470(this);
  if ((iVar2 == 0) && (local_c == 2)) {
    FUN_66250760(local_24,local_8 & 0xffff);
    FUN_66250110(&stack0xffffff94,local_3c);
    FUN_662194d0(this);
    FUN_66250730(local_24,local_8 & 0xffff);
  }
  FUN_66250280(local_30,";");
  FUN_66250920((int *)&stack0x00000004);
  puVar3 = FUN_662507e0(&stack0x00000004,local_48,*(uint *)(local_30[0] + -8));
  pbVar4 = (byte *)*puVar3;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *local_30[0];
    if (bVar1 != *local_30[0]) {
LAB_6621976e:
      iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_66219773;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < local_30[0][1];
    if (bVar1 != local_30[0][1]) goto LAB_6621976e;
    pbVar4 = pbVar4 + 2;
    local_30[0] = local_30[0] + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_66219773:
  FUN_66250210(local_48);
  if (iVar2 != 0) {
    FUN_66250680(&stack0x00000004,local_30);
  }
  FUN_66250680(local_24,(undefined4 *)&stack0x00000004);
  uVar8 = local_24[0][-2];
  uVar11 = 2;
  local_8 = uVar8;
  FUN_66250110(&stack0xffffff94,local_3c);
  local_18 = FUN_662191a0(this,puVar10,in_stack_ffffff98,in_stack_ffffff9c,uVar11,uVar8,local_24[0])
  ;
  uVar7 = *(short *)((int)this + 0x56) + 1;
  local_10 = (uint)uVar7;
  uVar8 = local_10 * 2;
  local_14 = operator_new(uVar8);
  uVar6 = 0;
  if (*(short *)((int)this + 0x56) != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar6 = uVar6 + 1;
      *(undefined2 *)((int)local_14 + uVar5 * 2) =
           *(undefined2 *)(uVar5 * 2 + *(int *)((int)this + 0x58));
    } while (uVar6 < *(ushort *)((int)this + 0x56));
    uVar7 = (ushort)local_10;
  }
  *(undefined2 *)((int)local_14 + (uVar8 - 2)) = in_stack_00000010;
  *(ushort *)((int)this + 0x56) = uVar7;
  if (*(void **)((int)this + 0x58) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x58));
  }
  *(void **)((int)this + 0x58) = local_14;
  FUN_66250210((int *)local_30);
  FUN_66250210((int *)local_24);
  FUN_66250210(local_3c);
  FUN_66250210((int *)&stack0x00000004);
  return local_18;
}


