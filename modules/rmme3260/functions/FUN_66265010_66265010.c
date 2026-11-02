/* Module: rmme3260.dll
   Function: FUN_66265010
   Address: 66265010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66265010(void *this,uint param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)this + (param_1 & 0xffff) * 8);
  *param_2 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


