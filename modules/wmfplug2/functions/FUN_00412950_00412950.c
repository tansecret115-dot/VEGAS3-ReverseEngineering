/* Module: wmfplug2.dll
   Function: FUN_00412950
   Address: 00412950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00412950(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  if (*(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e) == 0) {
    return 0x80070057;
  }
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      FUN_0041e600(param_1,param_4,(int *)&DAT_0047c600);
      return 1;
    }
    if (param_2 == 2) {
      FUN_00414170();
      *(undefined4 *)((int)this + 0x10) = 0;
      return 1;
    }
    if ((param_2 == 0x18) && (param_3 != 0)) {
      FUN_00412710(this,param_1);
      return 0;
    }
  }
  else {
    if (param_2 == 0x110) {
      return 1;
    }
    if ((((param_2 == 0x111) && (0x78cb < (param_3 & 0xffff))) && ((param_3 & 0xffff) < 0x78d1)) &&
       ((short)(param_3 >> 0x10) == 0x300)) {
      *(undefined4 *)((int)this + 0x24) = 1;
    }
  }
  return 0;
}


