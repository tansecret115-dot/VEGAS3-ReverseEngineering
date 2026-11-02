/* Module: rmme3260.dll
   Function: FUN_6623bfc0
   Address: 6623bfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623bfc0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x6c) + 0xb4));
  uVar2 = 0x80004005;
  iVar1 = FUN_66251030((void *)(param_1 + 0x30),(uint)param_2,(int *)&local_8);
  if (iVar1 != 0) {
    FUN_66251160((void *)(param_1 + 0x30),param_2);
    (**(code **)(*(int *)((int)local_8 + 8) + 0x18))((int)local_8 + 8);
    FUN_6623b900(local_8,0);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
    uVar2 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x6c) + 0xb4));
  return uVar2;
}


