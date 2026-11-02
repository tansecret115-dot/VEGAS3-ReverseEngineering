/* Module: rv203260.dll
   Function: FUN_638a1210
   Address: 638a1210
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638a1210(void *this,int param_1,uint *param_2)

{
  if (param_1 == 1) {
    *param_2 = (uint)this;
  }
  else {
    *param_2 = ~-(uint)(param_1 != 0) & (uint)this;
  }
  if ((int *)*param_2 != (int *)0x0) {
    (**(code **)(*(int *)*param_2 + 4))();
  }
  return (-(uint)(*param_2 != 0) & 0xfffff000) + 0x1000;
}


