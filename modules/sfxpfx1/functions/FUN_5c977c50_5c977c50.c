/* Module: sfxpfx1.dll
   Function: FUN_5c977c50
   Address: 5c977c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5c977c50(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5c97786a(this,param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*param_1)(param_1,&DAT_5c992270,(int)this + 0x9c);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


