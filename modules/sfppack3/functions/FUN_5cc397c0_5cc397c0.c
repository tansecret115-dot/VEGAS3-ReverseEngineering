/* Module: sfppack3.dll
   Function: FUN_5cc397c0
   Address: 5cc397c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5cc397c0(void *this,undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,
            uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 local_10;
  
  uVar1 = *param_3;
  iVar3 = *(int *)((int)this + 0x6c);
  local_10 = 0;
  uVar4 = 0;
  if (*(int *)((int)this + 0x70) <= iVar3) {
    do {
      uVar4 = local_10;
      if (uVar1 <= local_10) break;
      if (*(int *)((int)this + 0x70) < *(int *)((int)this + 0x7c)) {
        *(float *)((int)this + 0x84) = *(float *)((int)this + 0x80) + *(float *)((int)this + 0x84);
      }
      if (iVar3 - *(int *)((int)this + 0x7c) < *(int *)((int)this + 0x70)) {
        *(float *)((int)this + 0x84) = *(float *)((int)this + 0x84) - *(float *)((int)this + 0x80);
      }
      uVar4 = 0;
      if (param_5 != 0) {
        do {
          fVar5 = (float10)(**(code **)((int)this + 0x88))(param_1,uVar4);
          (**(code **)((int)this + 0x8c))
                    (param_2,uVar4,(double)((float10)*(float *)((int)this + 0x84) * fVar5));
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_5);
      }
      param_1 = (**(code **)((int)this + 0x90))(param_1);
      param_2 = (**(code **)((int)this + 0x90))(param_2);
      iVar2 = *(int *)((int)this + 0x70) + 1;
      uVar4 = local_10 + 1;
      *(int *)((int)this + 0x70) = iVar2;
      iVar3 = *(int *)((int)this + 0x6c);
      local_10 = uVar4;
    } while (iVar2 <= iVar3);
  }
  *param_4 = uVar4;
  if ((*(int *)((int)this + 0x70) < *(int *)((int)this + 0x6c)) ||
     (*(int *)((int)this + 0x74) <= *(int *)((int)this + 0x78))) {
    *param_3 = uVar4;
    return;
  }
  do {
    if (uVar1 <= uVar4) break;
    iVar3 = *(int *)((int)this + 0x78) + 1;
    uVar4 = uVar4 + 1;
    *(int *)((int)this + 0x78) = iVar3;
  } while (iVar3 < *(int *)((int)this + 0x74));
  *param_3 = uVar4;
  return;
}


