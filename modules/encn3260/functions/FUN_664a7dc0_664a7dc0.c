/* Module: encn3260.dll
   Function: FUN_664a7dc0
   Address: 664a7dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a7dc0(int param_1)

{
  int *this;
  DWORD DVar1;
  int iVar2;
  
  this = (int *)(param_1 + -0x10);
  *(undefined4 *)(param_1 + 0x15c) = 0;
  (**(code **)(*this + 4))(this);
  FUN_664ab6b0((int)this);
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_664aa7e0(this);
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_664a9c30(this);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int *)(param_1 + 0x19c) != 0) {
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
    FUN_664b3c40(*(int *)(param_1 + 0x130));
  }
  if ((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    DVar1 = GetTickCount();
    if (100 < DVar1 - *(int *)(param_1 + 0x6c)) {
      if (*(void **)(param_1 + 0x68) != (void *)0x0) {
        FUN_664b0310(*(void **)(param_1 + 0x68),(char *)0x0);
        iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x18))(param_1 + 8);
        if (iVar2 != 0) {
          FUN_664b3c40(*(int *)(param_1 + 0x130));
        }
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1a0) != 0) {
    DVar1 = GetTickCount();
    if (200 < DVar1 - *(int *)(param_1 + 0x1a0)) {
      FUN_664aaef0((int)this);
      *(undefined4 *)(param_1 + 0x1a0) = 0;
    }
  }
  FUN_664aa6d0(this,2,100);
  DVar1 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x74) == DVar1) {
    FUN_664a9ba0((int)this);
  }
  (**(code **)(*this + 8))(this);
  return 0;
}


