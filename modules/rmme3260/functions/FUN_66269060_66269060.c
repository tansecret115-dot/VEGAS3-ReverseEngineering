/* Module: rmme3260.dll
   Function: FUN_66269060
   Address: 66269060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66269060(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)((int)this + 0x34c);
  }
  else {
    iVar1 = *(int *)((int)this + 0x38);
  }
  *(undefined4 *)((int)this + 0x358) = 10;
  *(int *)((int)this + 0x34) = iVar1 + param_1;
  (**(code **)(**(int **)((int)this + 0x10) + 0x20))(*(int **)((int)this + 0x10),iVar1 + param_1,0);
  return;
}


