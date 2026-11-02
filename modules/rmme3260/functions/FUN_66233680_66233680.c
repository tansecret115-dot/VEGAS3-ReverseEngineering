/* Module: rmme3260.dll
   Function: FUN_66233680
   Address: 66233680
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66233680(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  (**(code **)(**(int **)((int)this + 0x830) + 4))();
  puVar1 = (undefined4 *)FUN_66254810(this,param_1,param_2);
  (**(code **)(**(int **)((int)this + 0x830) + 8))();
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)FUN_66254830(this,puVar1)) {
    if (puVar1[4] == 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


