/* Module: rv303260.dll
   Function: FUN_672087b0
   Address: 672087b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_672087b0(void *this,uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_41c;
  undefined4 local_418 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(int *)((int)this + 0x28) != 0) && (*(int *)((int)this + 0x1c) != 0)) {
    if ((*(uint *)this & 0xf0000000) == 0) {
      local_c = 0x42;
      local_10 = *param_3;
      local_8 = param_3[4];
      *(uint *)((int)this + 8) = param_1;
      *(uint *)((int)this + 0xc) = param_2;
      *(undefined4 *)((int)this + 4) = 1;
      *(undefined4 **)((int)this + 0x10) = &local_10;
      *(undefined4 **)((int)this + 0x14) = &local_41c;
      iVar1 = FUN_67208510((int)this);
      *param_4 = local_41c;
      param_4[0x101] = local_18;
      local_18 = local_18 + 1;
      if (local_18 != 0) {
        puVar2 = local_418;
        puVar3 = param_4;
        for (; puVar3 = puVar3 + 1, local_18 != 0; local_18 = local_18 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
        }
      }
      param_4[0x102] = (uint)(local_14 != 0);
      param_4[0x103] = param_3[1];
      return iVar1;
    }
    *(uint *)((int)this + 8) = param_1;
    *(uint *)((int)this + 0xc) = param_2;
    *(undefined4 *)((int)this + 4) = 1;
    *(undefined4 **)((int)this + 0x10) = param_3;
    *(undefined4 **)((int)this + 0x14) = param_4;
    iVar1 = FUN_67208510((int)this);
    return iVar1;
  }
  return 0x6f;
}


