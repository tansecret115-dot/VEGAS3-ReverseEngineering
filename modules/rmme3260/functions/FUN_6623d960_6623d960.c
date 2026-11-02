/* Module: rmme3260.dll
   Function: FUN_6623d960
   Address: 6623d960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623d960(int param_1)

{
  int *this;
  DWORD DVar1;
  int iVar2;
  
  this = (int *)(param_1 + -0x10);
  *(undefined4 *)(param_1 + 0x15c) = 0;
  (**(code **)(*this + 4))(this);
  FUN_66241320((int)this);
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_66240450(this);
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_6623f8a0(this);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int *)(param_1 + 0x19c) != 0) {
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
    FUN_66249100(*(int *)(param_1 + 0x130));
  }
  if ((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    DVar1 = GetTickCount();
    if (100 < DVar1 - *(int *)(param_1 + 0x6c)) {
      if (*(void **)(param_1 + 0x68) != (void *)0x0) {
        FUN_66245780(*(void **)(param_1 + 0x68),(char *)0x0);
        iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x18))(param_1 + 8);
        if (iVar2 != 0) {
          FUN_66249100(*(int *)(param_1 + 0x130));
        }
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1a0) != 0) {
    DVar1 = GetTickCount();
    if (200 < DVar1 - *(int *)(param_1 + 0x1a0)) {
      FUN_66240b60((int)this);
      *(undefined4 *)(param_1 + 0x1a0) = 0;
    }
  }
  FUN_66240340(this,2,100);
  DVar1 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x74) == DVar1) {
    FUN_6623f810((int)this);
  }
  (**(code **)(*this + 8))(this);
  return 0;
}


