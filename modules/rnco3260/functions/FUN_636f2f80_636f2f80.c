/* Module: rnco3260.dll
   Function: FUN_636f2f80
   Address: 636f2f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636f2f80(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c;
  uint local_8;
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar1 + 0x20))(piVar1,&local_8,&param_1);
  (**(code **)(*piVar1 + 0x10))(piVar1,&local_c);
  iVar2 = FUN_636f2a80(local_c,local_8,param_1);
  *(int *)((int)this + 8) = iVar2;
  return 0;
}


