/* Module: rmme3260.dll
   Function: FUN_66225f40
   Address: 66225f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66225f40(void *this)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  void *this_00;
  bool bVar7;
  int in_stack_00000010;
  uint *in_stack_00000014;
  int local_34 [3];
  byte *local_28 [3];
  byte *local_1c [3];
  void *local_10;
  int local_c;
  undefined4 local_8;
  
  this_00 = (void *)0x0;
  local_8 = 0;
  local_10 = this;
  FUN_66250280(local_34,s_logical__6626f798);
  FUN_662504a0(local_28,local_34,(undefined4 *)&stack0x00000004);
  iVar3 = 0;
  local_c = 0;
  if (in_stack_00000014 == (uint *)0x0) {
    local_8 = 0x80070057;
  }
  else if (*(int *)((int)this + 0x1a) < (int)(uint)*(ushort *)((int)this + 0x14)) {
    local_8 = 0x80004005;
  }
  else {
    uVar5 = in_stack_00000010 + 1;
    while ((ushort)uVar5 < *(ushort *)((int)this + 0x14)) {
      if (iVar3 != 0) goto LAB_66226025;
      this_00 = *(void **)(*(int *)((int)this + 0x16) + (uVar5 & 0xffff) * 4);
      if (this_00 != (void *)0x0) {
        FUN_66218240(this_00,local_1c);
        pbVar4 = local_28[0];
        pbVar6 = local_1c[0];
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_66225ffc:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_66226001;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_66225ffc;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_66226001:
        if (iVar3 == 0) {
          local_c = 1;
        }
        FUN_66250210((int *)local_1c);
        iVar3 = local_c;
        this = local_10;
      }
      if (iVar3 == 0) {
        uVar5 = uVar5 + 1;
      }
    }
    if (iVar3 == 0) {
      *in_stack_00000014 = 0xffffffff;
    }
    else {
LAB_66226025:
      uVar2 = FUN_662182a0((int)this_00);
      *in_stack_00000014 = (uint)uVar2;
    }
  }
  FUN_66250210((int *)local_28);
  FUN_66250210(local_34);
  FUN_66250210((int *)&stack0x00000004);
  return local_8;
}


