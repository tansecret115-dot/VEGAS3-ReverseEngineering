/* Module: encn3260.dll
   Function: FUN_6648ef20
   Address: 6648ef20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648ef20(void *this,int *param_1)

{
  int iVar1;
  undefined4 *local_c;
  uint local_8;
  
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  iVar1 = FUN_6648e440(this,param_1,&local_c,&local_8);
  if (iVar1 == 0) {
    iVar1 = FUN_6648efa0(this,local_c,local_8);
    if ((iVar1 == 0) && ((*(int **)((int)this + 0x91))[0x1d] != 0)) {
      (**(code **)(**(int **)((int)this + 0x91) + 0x74))();
      *(undefined4 *)(*(int *)((int)this + 0x91) + 0x74) = 0;
      FUN_6648f2b0(*(int *)((int)this + 0x91));
    }
  }
  return iVar1;
}


