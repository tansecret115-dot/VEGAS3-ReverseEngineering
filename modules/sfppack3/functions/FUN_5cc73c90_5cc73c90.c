/* Module: sfppack3.dll
   Function: FUN_5cc73c90
   Address: 5cc73c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cc73c90(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5cc738aa(this,param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*param_1)(param_1,&DAT_5cc8ef98,(int)this + 0x9c);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


