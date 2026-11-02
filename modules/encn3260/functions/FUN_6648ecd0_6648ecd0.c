/* Module: encn3260.dll
   Function: FUN_6648ecd0
   Address: 6648ecd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648ecd0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  *(int **)((int)this + 0x14) = param_3;
  (**(code **)(*param_3 + 4))(param_3);
  *(int **)((int)this + 0x95) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  iVar1 = FUN_6648e120(this,param_1);
  if (iVar1 == 0) {
    FUN_6648e380((int)this);
    iVar1 = 0;
  }
  return iVar1;
}


