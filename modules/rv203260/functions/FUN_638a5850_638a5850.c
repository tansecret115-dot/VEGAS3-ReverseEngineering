/* Module: rv203260.dll
   Function: FUN_638a5850
   Address: 638a5850
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638a5850(void *this,int param_1,int *param_2)

{
  if (((param_1 == 0) || (param_1 == 2)) || (param_1 == 3)) {
    *param_2 = (int)this;
  }
  else {
    *param_2 = 0;
  }
  if ((int *)*param_2 != (int *)0x0) {
    (**(code **)(*(int *)*param_2 + 4))();
  }
  return (-(uint)(*param_2 != 0) & 0xfffff000) + 0x1000;
}


