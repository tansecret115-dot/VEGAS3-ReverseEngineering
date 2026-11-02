/* Module: encn3260.dll
   Function: FUN_66490140
   Address: 66490140
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66490140(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  *(int **)((int)this + 0x90) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  *(int **)((int)this + 0x68) = param_3;
  (**(code **)(*param_3 + 4))(param_3);
  *(int **)((int)this + 0x14) = param_4;
  (**(code **)(*param_4 + 4))(param_4);
  iVar1 = FUN_6648e120(this,param_1);
  if (iVar1 == 0) {
    FUN_6648f180(this);
    iVar1 = 0;
  }
  return iVar1;
}


