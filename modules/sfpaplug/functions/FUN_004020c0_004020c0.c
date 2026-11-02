/* Module: sfpaplug.dll
   Function: FUN_004020c0
   Address: 004020c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004020c0(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      FUN_00402160((int)this);
      return 1;
    }
    if (param_2 == 2) {
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if (param_2 == 0x53) {
      FUN_00414f90(0,param_1,0,*(int *)(param_4 + 8),(int *)&DAT_00458040,(uchar *)0x0);
      return 0;
    }
  }
  else if (param_2 == 0x111) {
    if (*(int *)((int)this + 0x28) != 0) {
      if ((param_3 & 0xffff) < 0x7d4) {
        return 0;
      }
      if (0x7d6 < (param_3 & 0xffff)) {
        return 0;
      }
      if ((short)(param_3 >> 0x10) == 1) {
        FUN_00402330(this);
      }
    }
    return 1;
  }
  return 0;
}


