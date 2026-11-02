/* Module: rmto3260.dll
   Function: FUN_662fa140
   Address: 662fa140
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662fa140(void *this,short *param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  void *local_8;
  
  iVar2 = 0;
  local_8 = this;
  iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x28))(&local_8,2);
  if (iVar1 != 2) {
    iVar2 = -0x7ffbff7f;
  }
  if (iVar2 == 0) {
    iVar1 = FUN_662f2bd0(this_00,(ushort)local_8);
    *param_1 = (short)iVar1 + 8;
    return 0;
  }
  *param_1 = 0;
  return iVar2;
}


