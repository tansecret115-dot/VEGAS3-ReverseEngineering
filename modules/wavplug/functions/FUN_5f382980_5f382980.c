/* Module: wavplug.dll
   Function: FUN_5f382980
   Address: 5f382980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f382980(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      FUN_5f382a70(this);
      return 1;
    }
    if (param_2 == 2) {
      FUN_5f383ed0((int)this);
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if (param_2 == 0x53) {
      FUN_5f396510(0,param_1,0,*(int *)(param_4 + 8),(int *)&DAT_5f3d5050,(uchar *)0x0);
      return 0;
    }
  }
  else if (param_2 == 0x111) {
    if (*(int *)((int)this + 0x28) != 0) {
      uVar1 = param_3 >> 0x10;
      switch(param_3 & 0xffff) {
      case 0x7d2:
        if (uVar1 == 1) {
          FUN_5f382d40(this);
          return 1;
        }
        break;
      case 0x7d3:
        if (uVar1 == 1) {
          FUN_5f383120((int)this);
          return 1;
        }
        break;
      case 0x7d4:
      case 0x7d5:
      case 0x7d6:
        if (uVar1 == 1) {
          FUN_5f382d10(this);
        }
        break;
      default:
        goto switchD_5f382a16_default;
      }
    }
    return 1;
  }
switchD_5f382a16_default:
  return 0;
}


