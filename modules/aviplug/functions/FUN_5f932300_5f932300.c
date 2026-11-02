/* Module: aviplug.dll
   Function: FUN_5f932300
   Address: 5f932300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f932300(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f9d78c0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5f9d78b0;
  *(undefined4 *)((int)this + 0x230) = 0xffffffff;
  *(undefined4 *)((int)this + 0x238) = 0xffffffff;
  *(undefined4 *)((int)this + 0x234) = 0xffffffff;
  *(undefined4 *)((int)this + 0x23c) = 0xffffffff;
  *(undefined4 *)((int)this + 600) = 0xffffffff;
  *(int **)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x21c) = 1;
  *(undefined4 *)((int)this + 0x220) = 1;
  *(undefined4 *)((int)this + 0x224) = 1;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = param_2;
  *(undefined ***)this = &PTR_LAB_5f9d7850;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f9d7828;
  *(undefined ***)((int)this + 8) = &PTR_LAB_5f9d7804;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5f9d77f4;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 0x250) = 1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  piVar1 = *(int **)((int)this + 0x260);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return this;
}


