/* Module: sftrkfx1.dll
   Function: FUN_5cbf1720
   Address: 5cbf1720
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cbf1720(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5cbf133a(this,param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*param_1)(param_1,&DAT_5cc0ada0,(int)this + 0x9c);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


