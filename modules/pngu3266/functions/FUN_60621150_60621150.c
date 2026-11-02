/* Module: pngu3266.dll
   Function: FUN_60621150
   Address: 60621150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60621150(int param_1,int *param_2,int param_3,uint param_4)

{
  undefined4 *this;
  int *piVar1;
  void *pvVar2;
  
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  this = operator_new(0xc);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    *this = 0;
    this[1] = 0;
    this[2] = 0;
  }
  pvVar2 = (void *)0x0;
  piVar1 = FUN_60621a30(this,param_2,param_3,param_4);
  FUN_60621bf0((void *)(param_1 + 0x18),(int)piVar1,pvVar2);
  return 0;
}


