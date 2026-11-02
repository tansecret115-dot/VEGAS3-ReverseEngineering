/* Module: sfppack1.dll
   Function: FUN_5cdfe300
   Address: 5cdfe300
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cdfe300(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5cdfdf1a(this,param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*param_1)(param_1,&DAT_5ce1ab08,(int)this + 0x9c);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


