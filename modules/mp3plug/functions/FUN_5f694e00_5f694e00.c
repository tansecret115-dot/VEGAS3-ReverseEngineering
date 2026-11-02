/* Module: mp3plug.dll
   Function: FUN_5f694e00
   Address: 5f694e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f694e00(void *this,int *param_1)

{
  *(int **)((int)this + 0x24) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  (**(code **)(**(int **)((int)this + 0x24) + 0x2c))(*(int **)((int)this + 0x24),(int)this + 0x18);
  return 0;
}


