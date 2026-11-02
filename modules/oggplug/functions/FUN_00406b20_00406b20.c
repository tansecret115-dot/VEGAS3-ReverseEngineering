/* Module: oggplug.dll
   Function: FUN_00406b20
   Address: 00406b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00406b20(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      FUN_00406be0((WPARAM)this);
      return 1;
    }
    if (param_2 == 2) {
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if (param_2 == 0x53) {
      FUN_00409c20(0,param_1,0,*(int *)(param_4 + 8),(int *)&DAT_00450138,(uchar *)0x0);
      return 0;
    }
  }
  else if (param_2 == 0x111) {
    if (*(int *)((int)this + 0x28) != 0) {
      uVar1 = param_3 & 0xffff;
      if ((uVar1 == 0x7d4) || (uVar1 == 0x7d6)) {
        if (param_3 >> 0x10 == 1) {
          FUN_00406cf0(this);
        }
      }
      else {
        if (uVar1 != 0x7d7) {
          return 0;
        }
        if (param_3 >> 0x10 == 1) {
          FUN_00406d20((int)this);
          return 1;
        }
      }
    }
    return 1;
  }
  return 0;
}


