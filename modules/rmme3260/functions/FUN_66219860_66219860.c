/* Module: rmme3260.dll
   Function: FUN_66219860
   Address: 66219860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66219860(void *this,int param_1,undefined2 param_2,undefined4 param_3)

{
  *(undefined2 *)(*(int *)((int)this + 0x4e) + param_1 * 2) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x52) + param_1 * 4) = param_3;
  return 0;
}


