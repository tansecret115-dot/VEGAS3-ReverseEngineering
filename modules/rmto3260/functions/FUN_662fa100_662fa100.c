/* Module: rmto3260.dll
   Function: FUN_662fa100
   Address: 662fa100
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662fa100(void *this,ushort *param_1)

{
  int iVar1;
  undefined2 extraout_var;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x28))(param_1,2);
  if (iVar1 != 2) {
    iVar2 = -0x7ffbff7f;
  }
  if (iVar2 == 0) {
    iVar1 = FUN_662f2bd0((void *)CONCAT22(extraout_var,*param_1),*param_1);
    *param_1 = (ushort)iVar1;
  }
  return iVar2;
}


