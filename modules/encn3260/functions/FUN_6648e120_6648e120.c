/* Module: encn3260.dll
   Function: FUN_6648e120
   Address: 6648e120
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648e120(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)(param_1,&DAT_664dc5f0,(int)this + 0xc);
  if (iVar1 == 0) {
    iVar1 = (**(code **)*param_1)(param_1,&DAT_664dc6c0,(int)this + 0x10);
    if (iVar1 == 0) {
      (**(code **)*param_1)(param_1,&DAT_664dcb30,(int)this + 0x18);
      (**(code **)*param_1)(param_1,&DAT_664dd850,(int)this + 0x1c);
      (**(code **)*param_1)(param_1,&DAT_664dda80,(int)this + 8);
      iVar1 = 0;
    }
  }
  return iVar1;
}


