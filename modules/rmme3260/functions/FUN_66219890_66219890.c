/* Module: rmme3260.dll
   Function: FUN_66219890
   Address: 66219890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66219890(void *this,int param_1,undefined2 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *(undefined2 *)(*(int *)((int)this + 0x4e) + param_1 * 2);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*(int *)((int)this + 0x52) + param_1 * 4);
  }
  return 0;
}


