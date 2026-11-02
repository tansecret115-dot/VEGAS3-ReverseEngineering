/* Module: vfplugs.dll
   Function: FUN_004125c0
   Address: 004125c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004125c0(void *this,undefined4 param_1,uint param_2,HWND param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = GetDlgCtrlID(param_3);
  if (uVar1 < 0x5e4) {
    if (uVar1 == 0x5e3) {
      iVar2 = FUN_004285a0(param_1,param_2,param_3,1,10);
      *(float *)((int)this + 0xe4) = (float)iVar2 * _DAT_00488128 - _DAT_00487ed4;
    }
    else {
      if (uVar1 == 0x518) {
        iVar2 = FUN_004285a0(param_1,param_2,param_3,1,0x14);
        *(float *)((int)this + 0xb0) = (float)iVar2 * (float)_DAT_00488130;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
      if (uVar1 == 0x519) {
        iVar2 = FUN_004285a0(param_1,param_2,param_3,1,0x14);
        *(float *)((int)this + 0xb4) = (float)iVar2 * (float)_DAT_00488130;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
      if (uVar1 != 0x5e1) {
        return 0;
      }
      iVar2 = FUN_004285a0(param_1,param_2,param_3,2,0x14);
      *(float *)((int)this + 0xfc) = (float)iVar2 * _DAT_00488138;
    }
  }
  else {
    if (uVar1 != 0x5e4) {
      if (uVar1 == 0x642) {
        iVar2 = FUN_004285a0(param_1,param_2,param_3,2,0x14);
        *(undefined4 *)((int)this + 0x10c) = 1;
        *(float *)((int)this + 0x128) = (float)iVar2 * _DAT_00488138;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
      if (uVar1 != 0x643) {
        return 0;
      }
      iVar2 = FUN_004285a0(param_1,param_2,param_3,2,0x14);
      *(undefined4 *)((int)this + 0x10c) = 1;
      *(float *)((int)this + 300) = (float)iVar2 * _DAT_00488138;
      (**(code **)(*(int *)this + 0x2c))(this);
      return 0;
    }
    iVar2 = FUN_004285a0(param_1,param_2,param_3,1,10);
    *(float *)((int)this + 0xe8) = (float)iVar2 * _DAT_00488128 - _DAT_00487ed4;
  }
  *(undefined4 *)((int)this + 0xb8) = 1;
  (**(code **)(*(int *)this + 0x2c))(this);
  return 0;
}


