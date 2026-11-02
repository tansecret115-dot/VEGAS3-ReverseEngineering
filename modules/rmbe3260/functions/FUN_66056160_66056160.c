/* Module: rmbe3260.dll
   Function: FUN_66056160
   Address: 66056160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66056160(void *this,int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(~-(uint)(param_1 != 0) & (uint)this);
  *param_2 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (-(uint)(*param_2 != 0) & 0xfffff000) + 0x1000;
}


