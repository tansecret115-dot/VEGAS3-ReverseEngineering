/* Module: rmto3260.dll
   Function: FUN_662d9e80
   Address: 662d9e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662d9e80(void *this,undefined4 *param_1,uint *param_2)

{
  *param_1 = *(undefined4 *)((int)this + 0x2a);
  param_1[1] = *(undefined4 *)((int)this + 0x2e);
  *param_2 = (uint)*(ushort *)((int)this + 0x6c);
  return 0;
}


