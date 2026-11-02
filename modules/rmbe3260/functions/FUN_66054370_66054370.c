/* Module: rmbe3260.dll
   Function: FUN_66054370
   Address: 66054370
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66054370(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = (int *)0x0;
  iVar2 = (**(code **)(*(int *)this + 0x2c))(&local_c,&local_8,param_1);
  if (iVar2 != 0) {
    return 0;
  }
  if (local_8 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*local_8 + 0x5c))();
  if (iVar2 != 0) {
    return 0;
  }
  piVar1 = *(int **)(local_c + 0x10);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*(int *)this + 8))(piVar1,local_c,local_8);
  iVar2 = *(int *)(local_c + 8);
  if (local_8[8] != 0) {
    (**(code **)(*local_8 + 0x50))(piVar1,local_c,iVar2);
    return iVar2;
  }
  iVar2 = FUN_660544e0(this,piVar1,local_c,local_8,iVar2);
  return iVar2;
}


