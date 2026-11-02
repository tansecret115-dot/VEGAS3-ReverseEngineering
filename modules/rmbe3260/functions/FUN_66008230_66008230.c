/* Module: rmbe3260.dll
   Function: FUN_66008230
   Address: 66008230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66008230(void *this,uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_2 & 0xffff) {
  case 0:
    iVar1 = 0x451;
    break;
  case 1:
    iVar1 = 0x452;
    break;
  case 2:
    iVar1 = 0x453;
    break;
  case 3:
    iVar1 = 0x45a;
  }
  if (iVar1 != 0) {
    (**(code **)(**(int **)(*(int *)((int)this + 0x10c) +
                           (*(int *)((int)this + 0x114) * (param_1 & 0xffff) + (param_2 & 0xffff)) *
                           4) + 0xb8))(iVar1,this);
  }
  return;
}


