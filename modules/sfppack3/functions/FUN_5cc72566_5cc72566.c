/* Module: sfppack3.dll
   Function: FUN_5cc72566
   Address: 5cc72566
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall
FUN_5cc72566(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_5cc76619(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = *param_4;
  *(undefined4 *)((int)this + 0x24) = param_4[1];
  *(undefined4 *)((int)this + 0x28) = param_4[2];
  *(undefined4 *)((int)this + 0x2c) = param_4[3];
  *(undefined4 *)((int)this + 0x30) = param_3;
  return this;
}


