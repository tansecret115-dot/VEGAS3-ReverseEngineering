/* Module: qt4plug.dll
   Function: FUN_5f5258f0
   Address: 5f5258f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f5258f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined ***)this = &PTR_LAB_5f596f0c;
  *puVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)*param_1)(param_1,&DAT_5f595cb0,puVar1);
    if (iVar2 < 0) {
      *puVar1 = 0;
    }
  }
  return this;
}


