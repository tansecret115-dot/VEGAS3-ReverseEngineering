/* Module: pngu3266.dll
   Function: FUN_60607a80
   Address: 60607a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_60607a80(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = *param_3;
  *(undefined4 *)((int)this + 0xc) = param_3[1];
  *(undefined4 *)((int)this + 0x10) = param_3[2];
  *(undefined4 *)((int)this + 0x14) = param_3[3];
  (**(code **)(**(int **)this + 4))(*(int **)this);
  return this;
}


