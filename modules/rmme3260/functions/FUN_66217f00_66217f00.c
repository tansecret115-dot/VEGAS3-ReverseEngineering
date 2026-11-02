/* Module: rmme3260.dll
   Function: FUN_66217f00
   Address: 66217f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66217f00(void *this,int *param_1)

{
  size_t _Size;
  void *pvVar1;
  int iVar2;
  
  (**(code **)(*(int *)this + 0x28))();
  _Size = (**(code **)(*param_1 + 0xc))();
  pvVar1 = malloc(_Size);
  if (pvVar1 == (void *)0x0) {
    return -0x7ff8fff2;
  }
  iVar2 = (**(code **)(*param_1 + 0x18))(pvVar1,_Size);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)this + 0x1c))(pvVar1,_Size);
  }
  return iVar2;
}


