/* Module: rmbe3260.dll
   Function: FUN_66010d70
   Address: 66010d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66010d70(void *this,int *param_1)

{
  int *piVar1;
  byte local_c [4];
  undefined1 local_8;
  
  piVar1 = param_1;
  (**(code **)(*param_1 + 4))(param_1,&param_1);
  strncpy((char *)local_c,(char *)&param_1,4);
  local_8 = 0;
  FUN_6605c9a0((void *)((int)this + 4),local_c,(int)piVar1);
  return;
}


