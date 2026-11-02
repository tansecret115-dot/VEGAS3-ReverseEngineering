/* Module: extmondrv.dll
   Function: FUN_0040b620
   Address: 0040b620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0040b620(void *this,HWND param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  HWND pHVar3;
  
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      *(undefined4 *)((int)this + 0x28) = 1;
      (**(code **)(*(int *)this + 0x44))();
      FUN_0040b920(this);
      *(undefined4 *)((int)this + 0x24) = 0;
      *(undefined4 *)((int)this + 0x28) = 0;
      return 1;
    }
    if (param_2 == 2) {
      iVar1 = *(int *)this;
      pHVar3 = GetDlgItem(param_1,0x3eb);
      (**(code **)(iVar1 + 0x48))(param_1,0x200,0x3eb,pHVar3);
      iVar1 = *(int *)this;
      pHVar3 = GetDlgItem(param_1,0x3ed);
      (**(code **)(iVar1 + 0x48))(param_1,0x200,0x3ed,pHVar3);
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if (param_2 == 0x53) {
      uVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,param_4);
      return uVar2;
    }
  }
  else if (param_2 == 0x111) {
    if (*(int *)((int)this + 0x30) == 0) {
      return 1;
    }
    uVar2 = (**(code **)(*(int *)this + 0x48))(param_1,param_3 >> 0x10,param_3 & 0xffff,param_4);
    return uVar2;
  }
  return 0;
}


