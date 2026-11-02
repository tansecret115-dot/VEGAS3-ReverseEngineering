/* Module: rmto3260.dll
   Function: FUN_662f11f0
   Address: 662f11f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f11f0(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 8))(param_2,param_3);
  if (iVar1 == -1) {
    return 0;
  }
  if (*param_1 < 0) {
    *(undefined4 *)((int)this + 0x40) = 0x16;
    return 0;
  }
  uVar2 = *(int *)((int)this + 0x14) + *param_1;
  if (*(uint *)((int)this + 0x18) < uVar2) {
    iVar1 = (**(code **)(*(int *)this + 0x24))(param_1);
    return iVar1;
  }
  *(int *)(*(int *)((int)this + 0x20) + 0x14) = *(int *)(*(int *)((int)this + 0x20) + 0x14) + 1;
  if (*param_1 == 0) {
    return *(int *)(*(int *)((int)this + 0x20) + 0xc);
  }
  iVar1 = *(int *)((int)this + 0x14);
  *(uint *)((int)this + 0x14) = uVar2;
  return iVar1;
}


