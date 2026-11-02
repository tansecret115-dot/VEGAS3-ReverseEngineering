/* Module: atrc3260.dll
   Function: FUN_680020f0
   Address: 680020f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_680020f0(void *this,int param_1,int param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x1e) != 0) {
    do {
      if (*(code **)((int)this + 0x5a) != (code *)0x0) {
        (**(code **)((int)this + 0x5a))(*(undefined4 *)((int)this + 0x36),param_1,param_2);
      }
      local_8 = local_8 + 1;
      param_2 = param_2 + *(int *)((int)this + 0x22);
      param_1 = param_1 + (*(uint *)((int)this + 0x16) / *(uint *)((int)this + 0x1e)) * 2;
    } while (local_8 < *(uint *)((int)this + 0x1e));
  }
  return;
}


