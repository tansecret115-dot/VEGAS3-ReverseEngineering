/* Module: sfppack3.dll
   Function: FUN_5cc538db
   Address: 5cc538db
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cc538db(void *this,undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint in_EAX;
  int iVar1;
  int *piVar2;
  void *pvVar3;
  
  piVar2 = (int *)0x0;
  if (in_EAX != 0) {
    if (-1 < (int)in_EAX) goto LAB_5cc538ef;
    piVar2 = (int *)-in_EAX;
  }
  in_EAX = 0;
LAB_5cc538ef:
  pvVar3 = (void *)0x0;
  if ((this == (void *)0x0) || (pvVar3 = this, -1 < (int)this)) {
    iVar1 = 0;
  }
  else {
    iVar1 = -(int)this;
    pvVar3 = (void *)0x0;
  }
  FUN_5cc53920(param_3,in_EAX,iVar1,piVar2,(int)pvVar3,0,0,(undefined4 *)&stack0x00000000);
  return;
}


