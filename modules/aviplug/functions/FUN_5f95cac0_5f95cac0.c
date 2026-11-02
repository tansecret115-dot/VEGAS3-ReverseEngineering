/* Module: aviplug.dll
   Function: FUN_5f95cac0
   Address: 5f95cac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f95cac0(void *this,HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  undefined4 uVar1;
  int iVar2;
  HWND pHVar3;
  char *pcVar4;
  
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      (**(code **)(*(int *)this + 0x44))();
      (**(code **)(*(int *)this + 0x48))();
      *(undefined4 *)((int)this + 0x24) = 0;
      return 1;
    }
    if (param_2 == 2) {
      FUN_5f95ddb0((int)this);
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if (param_2 == 0x53) {
      uVar1 = (**(code **)(*(int *)this + 0x50))(param_1,param_4);
      return uVar1;
    }
  }
  else {
    if (param_2 == 0x111) {
      if (*(int *)((int)this + 0x2c) == 0) {
        return 1;
      }
      uVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,param_3 >> 0x10,param_3 & 0xffff,param_4);
      return uVar1;
    }
    if ((param_2 == 0x114) && (iVar2 = GetDlgCtrlID(param_4), iVar2 == 0x3eb)) {
      FUN_5f99e4b0(0x114,param_3,param_4,10,1000);
      pcVar4 = "%.1z %%";
      pHVar3 = GetDlgItem(param_1,0x7e9);
      FUN_5f989f30(pHVar3,(uchar *)pcVar4);
      *(undefined4 *)((int)this + 0x24) = 1;
    }
  }
  return 0;
}


