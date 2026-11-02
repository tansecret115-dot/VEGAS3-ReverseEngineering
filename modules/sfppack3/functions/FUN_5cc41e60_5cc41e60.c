/* Module: sfppack3.dll
   Function: FUN_5cc41e60
   Address: 5cc41e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc41e60(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_5cc41e20(this,param_1);
  if (((iVar1 == 0) && (*(int *)((int)this + 0x264) != 0)) &&
     ((param_2 != 0 || (*(int *)((int)this + 0x24c) == 0)))) {
    *(undefined4 *)((int)this + 0x24c) = 1;
    return 0;
  }
  uVar2 = FUN_5cc44f20(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x24c) = 1;
  return uVar2;
}


