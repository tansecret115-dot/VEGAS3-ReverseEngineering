/* Module: rnco3260.dll
   Function: FUN_636f3060
   Address: 636f3060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636f3060(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar1 + 0x20))(piVar1,&local_10,&local_c);
  (**(code **)(*piVar1 + 0x28))(piVar1,local_28,local_24,&local_1c,&local_20);
  (**(code **)(*piVar1 + 0x18))(piVar1,&local_8);
  (**(code **)(*piVar1 + 0x30))(piVar1,&param_1,local_2c);
  (**(code **)(*piVar1 + 0x38))(piVar1,&local_18,&local_14);
  FUN_636f2320(local_8,param_1);
  *(int *)((int)this + 0xc) = local_c * local_10;
  *(int *)((int)this + 0x18) = local_10;
  iVar2 = local_c * local_10 * 5;
  *(int *)((int)this + 0x10) = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  *(uint *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x20) = local_20;
  *(uint *)((int)this + 0x14) = (param_1 * 0x18 + 0x1f >> 3 & 0x1ffffffc) * local_14 + local_18 * 3;
  *(undefined4 *)((int)this + 0x1c) = local_1c;
  if (*(int *)((int)this + 8) != 0) {
    *(uint *)((int)this + 0x24) = -param_1;
  }
  return 0;
}


