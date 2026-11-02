/* Module: rmbe3260.dll
   Function: FUN_66008a70
   Address: 66008a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66008a70(void *this,uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_2 & 0xffff) {
  case 0:
    iVar1 = 0x455;
    break;
  case 1:
    iVar1 = 0x456;
    break;
  case 2:
    iVar1 = 0x457;
    break;
  case 3:
    iVar1 = 0x458;
    break;
  case 4:
    iVar1 = 0x459;
    break;
  case 5:
    iVar1 = 0x45a;
  }
  if (iVar1 != 0) {
    (**(code **)(**(int **)(*(int *)((int)this + 0x10c) +
                           (*(int *)((int)this + 0x114) * (param_1 & 0xffff) + (param_2 & 0xffff)) *
                           4) + 0xb8))(iVar1,this);
  }
  return;
}


