/* Module: sfppack2.dll
   Function: FUN_5cd3d180
   Address: 5cd3d180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cd3d180(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5cd3cd9a(this,param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*param_1)(param_1,&DAT_5cd5a830,(int)this + 0x9c);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


