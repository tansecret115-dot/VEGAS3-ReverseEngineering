/* Module: erv23260.dll
   Function: FUN_637f51a0
   Address: 637f51a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637f51a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x38) = param_8;
  *(undefined4 *)((int)this + 0x34) = param_7;
  *(undefined4 *)((int)this + 0x20) = param_9;
  *(undefined4 *)((int)this + 0x28) = param_11;
  *(undefined4 *)((int)this + 0x24) = param_10;
  *(undefined4 *)((int)this + 0x10) = param_12;
  iVar1 = FUN_637f5210((int)this);
  if (iVar1 != 0) {
    FUN_637f5260(this);
  }
  FUN_637f5240((int)this);
  return;
}


