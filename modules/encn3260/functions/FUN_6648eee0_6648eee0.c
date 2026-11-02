/* Module: encn3260.dll
   Function: FUN_6648eee0
   Address: 6648eee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648eee0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  *(int **)((int)this + 0x95) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  *(int **)((int)this + 0x14) = param_3;
  (**(code **)(*param_3 + 4))(param_3);
  FUN_6648e380((int)this);
  FUN_6648e120(this,param_1);
  return;
}


