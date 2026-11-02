/* Module: sfppack2.dll
   Function: FUN_5cd0d39b
   Address: 5cd0d39b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cd0d39b(void *this,undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint in_EAX;
  int iVar1;
  int *piVar2;
  void *pvVar3;
  
  piVar2 = (int *)0x0;
  if (in_EAX != 0) {
    if (-1 < (int)in_EAX) goto LAB_5cd0d3af;
    piVar2 = (int *)-in_EAX;
  }
  in_EAX = 0;
LAB_5cd0d3af:
  pvVar3 = (void *)0x0;
  if ((this == (void *)0x0) || (pvVar3 = this, -1 < (int)this)) {
    iVar1 = 0;
  }
  else {
    iVar1 = -(int)this;
    pvVar3 = (void *)0x0;
  }
  FUN_5cd0d3e0(param_3,in_EAX,iVar1,piVar2,(int)pvVar3,0,0,(undefined4 *)&stack0x00000000);
  return;
}


