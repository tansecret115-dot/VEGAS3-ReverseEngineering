/* Module: pngu3266.dll
   Function: FUN_6061e860
   Address: 6061e860
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6061e860(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  (**(code **)(**(int **)((int)this + 0x830) + 4))();
  puVar1 = (undefined4 *)FUN_60622410(this,param_1,param_2);
  (**(code **)(**(int **)((int)this + 0x830) + 8))();
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)FUN_60622430(this,puVar1)) {
    if (puVar1[4] == 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


