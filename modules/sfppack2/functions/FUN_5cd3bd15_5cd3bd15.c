/* Module: sfppack2.dll
   Function: FUN_5cd3bd15
   Address: 5cd3bd15
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall
FUN_5cd3bd15(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_5cd3f271(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = *param_4;
  *(undefined4 *)((int)this + 0x2c) = param_4[1];
  *(undefined4 *)((int)this + 0x30) = param_4[2];
  *(undefined4 *)((int)this + 0x34) = param_4[3];
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x38) = param_3;
  *(undefined4 *)((int)this + 0x48) = 1;
  return this;
}


