/* Module: oggplug.dll
   Function: FUN_00409220
   Address: 00409220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00409220(void *this,undefined4 *param_1,DWORD *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  HANDLE local_8;
  undefined4 local_4;
  
  WaitForSingleObject(*(HANDLE *)((int)this + 0x1d0),0xffffffff);
  if (*(int *)((int)this + 0x130) != 0) {
    puVar4 = FUN_00409130(this,param_1,param_2);
    return puVar4;
  }
  if (*(int *)((int)this + 0x1bc) == 0) {
    ResetEvent(*(HANDLE *)((int)this + 0xc));
    ReleaseMutex(*(HANDLE *)((int)this + 0x1d0));
    piVar1 = *(int **)((int)this + 0x134);
    if (piVar1 != (int *)0x0) {
      if (*(int *)((int)this + 0x1c4) == 0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,5,0,0);
      }
      else {
        (**(code **)(*piVar1 + 0xc))(piVar1,2,0,0);
        *(undefined4 *)((int)this + 0x1c4) = 0;
      }
    }
    if (*(int *)((int)this + 0x1bc) < *(int *)((int)this + 0x1b0)) {
      do {
        local_8 = *(HANDLE *)((int)this + 0xc);
        local_4 = *(undefined4 *)((int)this + 0x10);
        DVar5 = WaitForMultipleObjects(2,&local_8,0,0xffffffff);
        if (DVar5 != 0) {
          if (*(int *)((int)this + 0x1bc) < 1) {
            *param_2 = 0;
            ReleaseMutex(*(HANDLE *)((int)this + 0x1d0));
            return (undefined4 *)0x1;
          }
          break;
        }
        ResetEvent(*(HANDLE *)((int)this + 0xc));
      } while (*(int *)((int)this + 0x1bc) < *(int *)((int)this + 0x1b0));
    }
    WaitForSingleObject(*(HANDLE *)((int)this + 0x1d0),0xffffffff);
    piVar1 = *(int **)((int)this + 0x134);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,0,0,0);
    }
  }
  *param_1 = *(undefined4 *)((int)this + *(int *)((int)this + 0x1b4) * 4 + 0x138);
  uVar2 = *(uint *)((int)this + *(int *)((int)this + 0x1b4) * 4 + 0x188);
  *param_2 = uVar2;
  uVar3 = *(uint *)((int)this + 0x120);
  *(uint *)((int)this + 0x120) = uVar3 + uVar2;
  *(uint *)((int)this + 0x124) =
       *(int *)((int)this + 0x124) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar3,uVar2);
  ReleaseMutex(*(HANDLE *)((int)this + 0x1d0));
  return (undefined4 *)(uint)(*param_2 == 0);
}


