/* Module: encn3260.dll
   Function: FUN_66498d00
   Address: 66498d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66498d00(void *this,int *param_1,int *param_2)

{
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)this = &PTR_FUN_664de958;
  *(int **)((int)this + 0x10) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  *(int **)((int)this + 0xc) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


