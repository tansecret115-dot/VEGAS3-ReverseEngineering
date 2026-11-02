/* Module: sfxpfx2.dll
   Function: FUN_5c8c9580
   Address: 5c8c9580
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5c8c9580(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5c8c919a(this,param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*param_1)(param_1,&DAT_5c8e3558,(int)this + 0x9c);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


