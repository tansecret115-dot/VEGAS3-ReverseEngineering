/* Module: rmme3260.dll
   Function: FUN_6625fa50
   Address: 6625fa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625fa50(void *this,int *param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if ((this != (void *)0x0) && (param_1 != (int *)0x0)) {
    iVar1 = FUN_66251030(*(void **)((int)this + 0x14),(uint)param_1,&local_8);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x1c))();
      FUN_66250fc0(*(void **)((int)this + 0x14),(uint)param_1,(int)param_1);
      *(short *)((int)this + 0x18) = *(short *)((int)this + 0x18) + 1;
      return 0;
    }
  }
  return 0x80004005;
}


