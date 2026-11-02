/* Module: rmme3260.dll
   Function: FUN_6620efe0
   Address: 6620efe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6620efe0(void *this,uint param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_1 != 0) {
    iVar1 = FUN_66251030((void *)((int)this + 0x10c),param_1,(int *)&local_8);
    if (iVar1 != 0) {
      (**(code **)(*local_8 + 0x14))(param_1);
    }
  }
  return;
}


