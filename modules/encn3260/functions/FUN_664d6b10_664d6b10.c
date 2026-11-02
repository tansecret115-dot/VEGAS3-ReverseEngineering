/* Module: encn3260.dll
   Function: FUN_664d6b10
   Address: 664d6b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d6b10(void *this,int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) <= param_1) {
    return 0;
  }
  *param_2 = *(undefined4 *)(*(int *)((int)this + 0xc) + param_1 * 8);
  piVar1 = (int *)(param_1 * 8 + *(int *)((int)this + 0xc));
  *param_3 = piVar1[1] - *piVar1;
  return 1;
}


