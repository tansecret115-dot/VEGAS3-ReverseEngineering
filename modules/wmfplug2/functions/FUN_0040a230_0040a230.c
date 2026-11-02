/* Module: wmfplug2.dll
   Function: FUN_0040a230
   Address: 0040a230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040a230(void *this,undefined4 param_1)

{
  int *piVar1;
  MMRESULT MVar2;
  
  piVar1 = *(int **)((int)this + 0x48);
  if (piVar1 != (int *)0x0) {
    switch(param_1) {
    case 1:
      *(undefined4 *)((int)this + 8) = 1;
      (**(code **)(*piVar1 + 0xc))(piVar1,7,0,0);
      return 0;
    case 2:
      if (*(int *)((int)this + 0x1c) == 0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,2,0,0);
      }
      MVar2 = timeSetEvent(1000,100,&LAB_0040a1c0,(DWORD_PTR)this,1);
      *(MMRESULT *)((int)this + 0x44) = MVar2;
      return 0;
    case 3:
      if (*(UINT *)((int)this + 0x44) != 0) {
        timeKillEvent(*(UINT *)((int)this + 0x44));
        *(undefined4 *)((int)this + 0x44) = 0;
      }
      if (*(int *)((int)this + 0x1c) == 0) {
        (**(code **)(**(int **)((int)this + 0x48) + 0xc))(*(int **)((int)this + 0x48),0,0,0);
        return 0;
      }
      break;
    case 4:
      if ((*(int *)((int)this + 0x20) != 0) && (*(int *)((int)this + 0x14) != 0)) {
        *(undefined4 *)((int)this + 0x14) = 0;
        if (*(int *)((int)this + 0x1c) == 0) {
          (**(code **)(*piVar1 + 0xc))(piVar1,4,0,0);
        }
        SetEvent(*(HANDLE *)((int)this + 0x18));
        return 0;
      }
      (**(code **)(*piVar1 + 0xc))(piVar1,0x13,0,0);
      return 0;
    case 7:
      (**(code **)(*piVar1 + 0xc))(piVar1,6,0,0);
      return 0;
    case 8:
      (**(code **)(*piVar1 + 0xc))(piVar1,1,0,0);
      return 0;
    case 9:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
      (**(code **)(*piVar1 + 0xc))(piVar1,0xf,0,0);
      break;
    case 10:
      (**(code **)(*piVar1 + 0xc))(piVar1,0xe,0,0);
      piVar1 = *(int **)((int)this + 0x4c);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)((int)this + 0x1c) = 1;
        (**(code **)(*piVar1 + 0x2c))(piVar1);
        return 0;
      }
      break;
    case 0xb:
      if (*(int *)((int)this + 0x1c) == 0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,3,0,0);
      }
      *(undefined4 *)((int)this + 0x14) = 1;
      return 0;
    case 0xc:
      if (*(int *)((int)this + 0x14) != 0) {
        *(undefined4 *)((int)this + 0x14) = 0;
        if (*(int *)((int)this + 0x1c) == 0) {
          (**(code **)(*piVar1 + 0xc))(piVar1,4,0,0);
        }
        SetEvent(*(HANDLE *)((int)this + 0x18));
        return 0;
      }
      break;
    case 0x14:
      (**(code **)(*piVar1 + 0xc))(piVar1,8,0,0);
      return 0;
    case 0x16:
      (**(code **)(*piVar1 + 0xc))(piVar1,0x12,0,0);
      (**(code **)(*(int *)this + 0x1c))(this,0,0,0,0,0);
      return 0;
    }
  }
  return 0;
}


