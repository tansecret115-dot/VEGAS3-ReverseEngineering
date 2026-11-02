/* Module: sfppack3.dll
   Function: FUN_5cc398f0
   Address: 5cc398f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5cc398f0(void *this,undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,
            uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  uint local_14;
  
  uVar4 = *param_3;
  uVar1 = *param_4;
  iVar5 = *(int *)((int)this + 0x6c);
  local_14 = 0;
  if (*(int *)((int)this + 0x70) <= iVar5) {
    do {
      if (uVar4 <= local_14) break;
      if (*(int *)((int)this + 0x70) < *(int *)((int)this + 0x7c)) {
        *(float *)((int)this + 0x84) = *(float *)((int)this + 0x80) + *(float *)((int)this + 0x84);
      }
      if (iVar5 - *(int *)((int)this + 0x7c) < *(int *)((int)this + 0x70)) {
        *(float *)((int)this + 0x84) = *(float *)((int)this + 0x84) - *(float *)((int)this + 0x80);
      }
      uVar3 = 0;
      if (param_5 != 0) {
        do {
          fVar6 = (float10)(**(code **)((int)this + 0x88))(param_1,uVar3);
          (**(code **)((int)this + 0x8c))
                    (param_2,uVar3,(double)((float10)*(float *)((int)this + 0x84) * fVar6));
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_5);
      }
      param_1 = (**(code **)((int)this + 0x90))(param_1);
      param_2 = (**(code **)((int)this + 0x90))(param_2);
      iVar2 = *(int *)((int)this + 0x70) + 1;
      local_14 = local_14 + 1;
      *(int *)((int)this + 0x70) = iVar2;
      iVar5 = *(int *)((int)this + 0x6c);
    } while (iVar2 <= iVar5);
  }
  *param_3 = local_14;
  if ((*(int *)((int)this + 0x6c) <= *(int *)((int)this + 0x70)) &&
     (*(int *)((int)this + 0x78) != *(int *)((int)this + 0x74))) {
    do {
      if (uVar1 <= local_14) {
        *param_4 = local_14;
        return;
      }
      uVar4 = 0;
      if (param_5 != 0) {
        do {
          (**(code **)((int)this + 0x8c))(param_2,uVar4,0,0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_5);
      }
      param_2 = (**(code **)((int)this + 0x90))(param_2);
      iVar5 = *(int *)((int)this + 0x78) + 1;
      local_14 = local_14 + 1;
      *(int *)((int)this + 0x78) = iVar5;
    } while (iVar5 != *(int *)((int)this + 0x74));
    *param_4 = local_14;
    return;
  }
  *param_4 = local_14;
  return;
}


