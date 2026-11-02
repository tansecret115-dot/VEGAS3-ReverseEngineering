/* Module: rmme3260.dll
   Function: FUN_66203290
   Address: 66203290
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66203290(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_2c [3];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = FUN_66217fa0(param_1,&local_c,&local_8);
  if (((-1 < iVar1) && (iVar1 = FUN_66217ff0(param_1,&local_14,&local_10), -1 < iVar1)) &&
     (iVar1 = FUN_66218070(param_1,&local_20,&local_18,&local_1c), -1 < iVar1)) {
    if (*(int *)(*(int *)((int)this + 0x62) + -8) == 0) {
      piVar2 = FUN_66218350(param_1,local_2c);
      FUN_662503a0((void *)((int)this + 0x62),piVar2);
      FUN_66250210(local_2c);
    }
    uVar3 = *(uint *)((int)this + 0x72);
    if (*(uint *)((int)this + 0x72) < local_8) {
      uVar3 = local_8;
    }
    *(uint *)((int)this + 0x72) = uVar3;
    uVar3 = *(uint *)((int)this + 0x6e);
    if (*(uint *)((int)this + 0x6e) < local_c) {
      uVar3 = local_c;
    }
    *(uint *)((int)this + 0x6e) = uVar3;
    uVar3 = *(uint *)((int)this + 0x7a);
    if (*(uint *)((int)this + 0x7a) < local_10) {
      uVar3 = local_10;
    }
    *(uint *)((int)this + 0x7a) = uVar3;
    uVar3 = *(uint *)((int)this + 0x76);
    if (*(uint *)((int)this + 0x76) < local_14) {
      uVar3 = local_14;
    }
    *(uint *)((int)this + 0x76) = uVar3;
    uVar3 = *(uint *)((int)this + 0x82);
    if (*(uint *)((int)this + 0x82) < local_18) {
      uVar3 = local_18;
    }
    *(uint *)((int)this + 0x82) = uVar3;
    uVar3 = *(uint *)((int)this + 0x86);
    if (*(uint *)((int)this + 0x86) < local_1c) {
      uVar3 = local_1c;
    }
    *(uint *)((int)this + 0x86) = uVar3;
    uVar3 = *(uint *)((int)this + 0x7e);
    if (local_20 < *(uint *)((int)this + 0x7e)) {
      uVar3 = local_20;
    }
    *(uint *)((int)this + 0x7e) = uVar3;
  }
  return iVar1;
}


