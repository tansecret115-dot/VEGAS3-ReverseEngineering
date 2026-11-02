/* Module: espr3260.dll
   Function: FUN_632f9040
   Address: 632f9040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f9040(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0x5260) = param_1;
  switch(param_1) {
  case 0:
    *(undefined4 *)(*(int *)(*(int *)this + 4) + 0x810 + (int)this) = 0x90;
    *(undefined4 *)((int)this + 0x5250) = 0x90;
    *(undefined4 *)(*(int *)(*(int *)this + 4) + 0x814 + (int)this) = 3;
    *(int *)((int)this + *(int *)(*(int *)this + 4) + 0x818) =
         *(int *)(*(int *)(*(int *)this + 4) + 0x810 + (int)this) + 0x82;
    iVar1 = *(int *)(*(int *)this + 4);
    *(int *)((int)this + 0x14) =
         *(int *)((int)this + iVar1 + 0x818) - *(int *)((int)this + iVar1 + 0x810);
    *(undefined4 *)((int)this + *(int *)(*(int *)this + 4) + 0x7fc) = 0x3f666666;
    *(undefined4 *)(*(int *)(*(int *)this + 4) + 0x800 + (int)this) = 0x3f19999a;
    *(undefined4 *)((int)this + 0x18) = 2;
    *(undefined4 *)((int)this + 0x5254) = 2;
    *(undefined4 *)((int)this + 4) = 0x3f0ccccd;
    *(undefined4 *)((int)this + 0x1c) = 0x1d;
    *(undefined4 *)((int)this + 0x5258) = 0x1d;
    *(undefined4 *)((int)this + 8) = 0x3f400000;
    *(undefined4 *)((int)this + 0x20) = 0x74;
    *(undefined4 *)((int)this + 0x525c) = 0x74;
    *(undefined4 *)((int)this + 0x10) = 0;
    return;
  case 1:
    *(undefined4 *)(*(int *)(*(int *)this + 4) + 0x810 + (int)this) = 0x90;
    *(undefined4 *)((int)this + 0x5250) = 0x90;
    *(undefined4 *)(*(int *)(*(int *)this + 4) + 0x814 + (int)this) = 3;
    *(int *)((int)this + *(int *)(*(int *)this + 4) + 0x818) =
         *(int *)(*(int *)(*(int *)this + 4) + 0x810 + (int)this) + 0x82;
    iVar1 = *(int *)(*(int *)this + 4);
    *(int *)((int)this + 0x14) =
         *(int *)((int)this + iVar1 + 0x818) - *(int *)((int)this + iVar1 + 0x810);
    *(undefined4 *)((int)this + *(int *)(*(int *)this + 4) + 0x7fc) = 0x3f666666;
    *(undefined4 *)(*(int *)(*(int *)this + 4) + 0x800 + (int)this) = 0x3f19999a;
    *(undefined4 *)((int)this + 0x1c) = 0x13;
    *(undefined4 *)((int)this + 0x5258) = 0x13;
    *(undefined4 *)((int)this + 4) = 0x3f0ccccd;
    *(undefined4 *)((int)this + 8) = 0x3f400000;
    *(undefined4 *)((int)this + 0x18) = 1;
    *(undefined4 *)((int)this + 0x5254) = 1;
    *(undefined4 *)((int)this + 0x20) = 0x98;
    *(undefined4 *)((int)this + 0x525c) = 0x98;
    *(undefined4 *)((int)this + 0x10) = 1;
    return;
  case 2:
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x844) + 4) + 0x1054 + (int)this) = 0xf0;
    *(undefined4 *)((int)this + 0x5250) = 0xf0;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x844) + 4) + 0x1058 + (int)this) = 5;
    iVar1 = *(int *)(*(int *)((int)this + 0x844) + 4);
    *(int *)((int)this + iVar1 + 0x105c) = *(int *)(iVar1 + 0x1054 + (int)this) + 0x82;
    iVar1 = *(int *)(*(int *)((int)this + 0x844) + 4);
    *(int *)((int)this + 0x930) =
         *(int *)((int)this + iVar1 + 0x105c) - *(int *)((int)this + iVar1 + 0x1054);
    *(undefined4 *)((int)this + *(int *)(*(int *)((int)this + 0x844) + 4) + 0x1040) = 0x3f666666;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x844) + 4) + 0x1044 + (int)this) = 0x3f19999a;
    *(undefined4 *)((int)this + 0x8c4) = 0x3f0ccccd;
    *(undefined4 *)((int)this + 0x934) = 2;
    *(undefined4 *)((int)this + 0x5254) = 2;
    *(undefined4 *)((int)this + 0x8c8) = 0x3f333333;
    *(undefined4 *)((int)this + 0x938) = 0x25;
    *(undefined4 *)((int)this + 0x5258) = 0x25;
    *(undefined4 *)((int)this + 0x8cc) = 0x3f000000;
    *(undefined4 *)((int)this + 0x8d0) = 0x3f400000;
    *(undefined4 *)((int)this + 0x93c) = 0x94;
    *(undefined4 *)((int)this + 0x525c) = 0x94;
    iVar1 = *(int *)(*(int *)((int)this + 0x844) + 4);
    *(float *)((int)this + iVar1 + 0x1048) =
         _DAT_632fa630 / (float)(*(int *)((int)this + iVar1 + 0x1058) + 1);
    return;
  case 3:
    *(undefined4 *)((int)this + 0x5240) = 0xa0;
    *(undefined4 *)((int)this + 0x5250) = 0xa0;
    *(undefined4 *)((int)this + 0x524c) = 0xa0;
    *(undefined4 *)((int)this + 0x525c) = 0xa0;
    *(undefined4 *)((int)this + 0x5244) = 1;
    *(undefined4 *)((int)this + 0x5254) = 1;
    *(undefined4 *)((int)this + 0x5248) = 0x14;
    *(undefined4 *)((int)this + 0x5258) = 0x14;
  }
  return;
}


