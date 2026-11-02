/* Module: erv23260.dll
   Function: FUN_637ff990
   Address: 637ff990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_637ff990(void *this,int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  *(undefined ***)this = &PTR_FUN_6382a580;
  iVar1 = FUN_637ffff0(param_1);
  *(int *)((int)this + 0x24) = iVar1;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x50333632;
  FUN_637ff9f0((int)this);
  iVar1 = FUN_637f2000(param_2 * 8 + 8);
  *(int *)((int)this + 4) = iVar1;
  *param_4 = (-(uint)(iVar1 != 0) & 0xfffffffe) + 2;
  return this;
}


