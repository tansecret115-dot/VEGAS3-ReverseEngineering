/* Module: erv23260.dll
   Function: FUN_63805ba0
   Address: 63805ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * __thiscall
FUN_63805ba0(void *this,uint *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_c;
  
  puVar3 = param_2;
  bVar1 = true;
  bVar2 = true;
  if (*(int *)((int)this + 0x838) == 0) {
    return (uint *)0x4;
  }
  if (*(int *)(*(int *)((int)this + 4) + 0x30) == 0) {
    param_2[0xb] = 0;
    param_2[0xc] = param_1[0xc];
    if (*(int *)((int)this + 0x80) == 1) {
      *(undefined4 *)((int)this + 0x6ac) = 0;
      if ((*(uint *)((int)this + 0x88) != param_1[1]) || (*(uint *)((int)this + 0x8c) != param_1[2])
         ) {
        bVar1 = false;
      }
      if ((!bVar1) &&
         (puVar4 = (uint *)FUN_638063c0(this,(int)param_1,(undefined4 *)((int)this + 0x84)),
         puVar4 != (uint *)0x0)) {
        return puVar4;
      }
      iVar5 = FUN_638095a0(*(int **)((int)this + 0x650));
      *(uint *)(iVar5 + 0x14) = param_1[0xc];
      FUN_6380b0d0(this,param_1,iVar5);
      (**(code **)(**(int **)((int)this + 0x8d0) + 0x24))
                (*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),
                 *(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x10),param_1[1],param_1[2]);
      puVar4 = (uint *)FUN_63807580((void *)((int)this + 0x84),(undefined4 *)param_2[0xd],
                                    param_2 + 0xc,param_4);
      param_2[0xb] = *(uint *)((int)this + 0x7b8);
    }
    else {
      iVar5 = (**(code **)(**(int **)((int)this + 4) + 4))();
      if (iVar5 == 0) {
        FUN_63805e30(this,param_1);
        param_1 = (uint *)param_2[0xd];
        local_c = 0;
        puVar4 = param_2;
        if (0 < *(int *)((int)this + 0x80)) {
          piVar7 = (int *)((int)this + 0x7b8);
          do {
            puVar4 = (uint *)FUN_63807580(piVar7 + -0x1cd,param_1,param_2 + 0xc,param_4);
            param_1 = (uint *)((int)param_1 + *piVar7);
            param_2[0xb] = param_2[0xb] + *piVar7;
            local_c = local_c + 1;
            piVar7 = piVar7 + 0x1df;
          } while (local_c < *(int *)((int)this + 0x80));
        }
      }
      else {
        if (*(int *)((int)this + 0x804) == 0) {
          FUN_63805e30(this,param_1);
        }
        puVar4 = (uint *)FUN_63807580((void *)(*(int *)((int)this + 0x804) * 0x77c + 0x84 +
                                              (int)this),(undefined4 *)param_2[0xd],param_2 + 0xc,
                                      param_4);
        param_2[0xb] = param_2[0xb] +
                       *(int *)(*(int *)((int)this + 0x804) * 0x77c + 0x7b8 + (int)this);
        iVar5 = *(int *)((int)this + 0x804) + 1;
        *(int *)((int)this + 0x804) = iVar5;
        if (iVar5 < *(int *)((int)this + 0x80)) {
          bVar2 = false;
          *param_4 = *param_4 | 4;
        }
        else {
          *(undefined4 *)((int)this + 0x804) = 0;
          bVar2 = true;
        }
      }
    }
    param_2 = puVar4;
    if (bVar2) {
      *(undefined1 *)((int)this + 0x841) = 0;
      *(int *)((int)this + 0x8a4) = (*(int *)((int)this + 0x8a4) + 1) % *(int *)((int)this + 0x7c);
    }
    if ((param_2 == (uint *)0x0) && (puVar3[0xb] == 0)) {
      iVar5 = (**(code **)(**(int **)((int)this + 4) + 4))();
      if (iVar5 != 0) {
        *param_4 = *param_4 | 8;
        return (uint *)0x0;
      }
      puVar6 = (undefined4 *)FUN_637f2230(puVar3);
      puVar3[0xb] = 8;
      *puVar6 = 0;
      puVar6[1] = 0;
    }
    return param_2;
  }
  return (uint *)0x4;
}


