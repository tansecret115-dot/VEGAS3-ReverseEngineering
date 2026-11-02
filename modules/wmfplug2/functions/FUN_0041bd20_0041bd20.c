/* Module: wmfplug2.dll
   Function: FUN_0041bd20
   Address: 0041bd20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0041bd20(void *this,undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
            undefined4 *param_5,uint *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = param_4;
  uVar3 = param_3;
  if (*(int *)((int)this + 0x6c) == 0) {
    return -0x7ff8ffa9;
  }
  if (*(int *)((int)this + 0x1c) == 0) {
    iVar4 = (**(code **)(**(int **)((int)this + 0x84) + 0x3c))
                      (*(int **)((int)this + 0x84),param_1,param_2,param_4,param_3,&param_3);
    if (-1 < iVar4) {
      if (param_3 < uVar3) {
        FUN_00428ab0(*(ushort **)((int)this + 0x80),
                     (undefined4 *)((*(ushort **)((int)this + 0x80))[6] * param_3 + (int)puVar1),
                     uVar3 - param_3);
        uVar2 = *(uint *)((int)this + 0x78);
        *(uint *)((int)this + 0x78) = uVar2 + (uVar3 - param_3);
        *(uint *)((int)this + 0x7c) =
             *(int *)((int)this + 0x7c) + (uint)CARRY4(uVar2,uVar3 - param_3);
        param_3 = uVar3;
      }
      uVar3 = *(uint *)((int)this + 0x78);
      *(uint *)((int)this + 0x78) = uVar3 + param_3;
      *(uint *)((int)this + 0x7c) = *(int *)((int)this + 0x7c) + (uint)CARRY4(uVar3,param_3);
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = param_3;
    }
  }
  else {
    uVar2 = *(ushort *)(*(int *)((int)this + 0x80) + 0xc) * param_3;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_4 = 0;
      param_4 = param_4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_4 = 0;
      param_4 = (undefined4 *)((int)param_4 + 1);
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = param_3;
    }
    uVar3 = *(uint *)((int)this + 0x78);
    *(uint *)((int)this + 0x78) = uVar3 + param_3;
    iVar4 = 0;
    *(uint *)((int)this + 0x7c) =
         *(int *)((int)this + 0x7c) + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar3,param_3);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return iVar4;
}


