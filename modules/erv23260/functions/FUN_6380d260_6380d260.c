/* Module: erv23260.dll
   Function: FUN_6380d260
   Address: 6380d260
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6380d260(void *this,int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 0x254) = *(undefined4 *)(param_5 + 0x18);
  if (*(int *)((int)this + 8) != 0) {
    (**(code **)(*(int *)this + 0x10))();
  }
  puVar1 = FUN_637f1030(param_4 * param_3 * 0x7c,1);
  if (puVar1 != (undefined4 *)0x0) {
    *(int *)((int)this + 0x124) = param_3;
    uVar4 = param_3 + 2;
    *(uint *)((int)this + 0x128) = param_4;
    uVar3 = (param_4 + 2) * uVar4 * 0x10;
    *(undefined4 **)((int)this + 8) = puVar1;
    *(int *)((int)this + 0x130) = param_2;
    *(int *)((int)this + 300) = param_1;
    puVar1 = FUN_637f1030((uVar3 & 0xfffffff) << 3,1);
    *(undefined4 **)((int)this + 0xf0) = puVar1;
    *(undefined4 **)((int)this + 0xf4) = puVar1 + uVar4 * 0x10 + 4;
    *(uint *)((int)this + 0x100) = (uVar4 & 0xfffffff) << 2;
    *(undefined4 **)((int)this + 0xf8) =
         puVar1 + (uVar3 & 0xfffffff) + (uVar4 & 0x1ffffff) * 0x10 + 2;
    *(uint *)((int)this + 0xfc) = (uVar4 & 0xfffffff) << 3;
    puVar1 = FUN_637f1030(param_2 * param_1 * 0x400,1);
    *(undefined4 **)((int)this + 0xc) = puVar1;
    puVar1 = FUN_637f1030(param_2 * param_1 * 0x200,1);
    *(undefined4 **)((int)this + 0x10) = puVar1;
    puVar1 = FUN_637f1030(*(int *)((int)this + 0x128) * *(int *)((int)this + 0x124) * 0x30,1);
    *(undefined4 **)((int)this + 0x14) = puVar1;
    puVar1 = FUN_637f1030(*(int *)((int)this + 0x124) * 0x60,1);
    *(undefined4 **)((int)this + 0x1c) = puVar1;
    puVar1 = FUN_637f1030(0x600,1);
    *(undefined4 **)((int)this + 0xd4) = puVar1;
    puVar1 = FUN_637f1030(0x600,1);
    *(undefined4 **)((int)this + 0xd8) = puVar1;
    puVar1 = FUN_637f1030(0x600,1);
    *(undefined4 **)((int)this + 0xdc) = puVar1;
    puVar1 = FUN_637f1030(0x100,1);
    *(undefined4 **)((int)this + 0xe0) = puVar1;
    puVar1 = FUN_637f1030(0x790,1);
    *(undefined4 **)((int)this + 0xe4) = puVar1;
    puVar1 = FUN_637f1030(param_4,1);
    *(undefined4 **)((int)this + 0xc4) = puVar1;
    puVar1 = FUN_637f1030((*(int *)((int)this + 0x124) + 1) * 0x80,1);
    *(undefined4 **)((int)this + 0x104) = puVar1;
    *(undefined4 **)((int)this + 0x108) = puVar1;
    *(undefined4 **)((int)this + 0x10c) = puVar1 + *(int *)((int)this + 0x124) * 0x20;
    puVar1 = FUN_637f1030(0x2700,1);
    *(undefined4 **)((int)this + 0x110) = puVar1;
    *(undefined4 **)((int)this + 0x114) = puVar1 + 0x900;
    *(undefined4 **)((int)this + 0x11c) = puVar1 + 0x980;
    *(undefined4 **)((int)this + 0x118) = puVar1 + 0x940;
    puVar1 = FUN_637f1030(*(int *)(param_5 + 0x10) << 3,1);
    *(undefined4 **)((int)this + 0x244) = puVar1;
    puVar1 = FUN_637f1030(*(int *)((int)this + 0x124) << 2,1);
    *(undefined4 **)((int)this + 0x248) = puVar1;
    puVar1 = FUN_637f1030(*(int *)((int)this + 0x124) << 2,1);
    *(undefined4 **)((int)this + 0x24c) = puVar1;
    if (((((*(int *)((int)this + 0xf0) != 0) && (*(int *)((int)this + 0xc) != 0)) &&
         (*(int *)((int)this + 0x10) != 0)) &&
        (((*(int *)((int)this + 0x14) != 0 && (*(int *)((int)this + 0x1c) != 0)) &&
         ((*(int *)((int)this + 0xd4) != 0 &&
          ((*(int *)((int)this + 0xd8) != 0 && (*(int *)((int)this + 0xdc) != 0)))))))) &&
       ((*(int *)((int)this + 0xe0) != 0 &&
        (((((*(int *)((int)this + 0xe4) != 0 && (*(int *)((int)this + 0xc4) != 0)) &&
           (*(int *)((int)this + 0x104) != 0)) &&
          ((*(int *)((int)this + 0x110) != 0 && (*(int *)((int)this + 0x244) != 0)))) &&
         ((*(int *)((int)this + 0x248) != 0 && (puVar1 != (undefined4 *)0x0)))))))) {
      iVar2 = FUN_63810a50((int)this);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_6380d560((int)this);
      return 0;
    }
  }
  return 2;
}


