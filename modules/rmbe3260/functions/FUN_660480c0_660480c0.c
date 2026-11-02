/* Module: rmbe3260.dll
   Function: FUN_660480c0
   Address: 660480c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_660480c0(void *this,ushort *param_1,char param_2)

{
  int iVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x28))(param_1,2);
  this_00 = extraout_ECX;
  if (iVar1 != 2) {
    iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
    this_00 = extraout_ECX_00;
  }
  if ((iVar2 == 0) && (param_2 == '\x01')) {
    iVar1 = FUN_66055b90(this_00,*param_1);
    *param_1 = (ushort)iVar1;
  }
  return iVar2;
}


