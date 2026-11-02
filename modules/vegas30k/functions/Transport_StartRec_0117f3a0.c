/* Module: vegas30k.dll
   Function: Transport_StartRec
   Address: 0117f3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_StartRec(unsigned long,__int64,__int64,__int64,__int64,int,int) */

long Transport_StartRec(ulong param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                       __int64 param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int iStack_4;
  
                    /* 0x17f3a0  574  ?Transport_StartRec@@YGJK_J000HH@Z */
  if (DAT_012b0b2c == (int *)0x0) {
    return -0x7fff0001;
  }
  local_38 = param_3._4_4_;
  local_34 = (undefined4)param_4;
  local_28 = param_4._4_4_;
  local_24 = (undefined4)param_5;
  local_18 = 0xffffffff;
  local_14 = param_5._4_4_;
  local_10 = param_5._4_4_;
  local_c = 0;
  local_8 = 0;
  (**(code **)(*DAT_012b0b2c + 0xdc))(DAT_012b0b2c,&local_38);
  (**(code **)(*DAT_012b0b2c + 0x88))(DAT_012b0b2c,0,0x3ff00000,0);
  if ((iStack_4 < 1) && (iStack_4 < 0)) {
    (**(code **)(*DAT_012b0b2c + 0xd4))(DAT_012b0b2c,0xffffffff,0xfffffff);
  }
  else {
    (**(code **)(*DAT_012b0b2c + 0xd4))(DAT_012b0b2c,local_8,iStack_4);
  }
  Transport_StopRecMonitor();
  uVar1 = local_18;
  iVar3 = in_stack_00000008;
  if (in_stack_00000008 != 0) {
    iVar2 = FUN_011832b0(uStack_1c,local_18);
    if (-1 < iVar2) {
      iVar2 = FUN_011832f0(uStack_1c,uVar1);
      if (-1 < iVar2) goto LAB_0117f49c;
      FUN_011832e0();
    }
    iVar3 = 0;
    uStack_20 = uStack_20 & 0xdfffffff;
  }
LAB_0117f49c:
  iVar2 = (**(code **)(*DAT_012b0b2c + 0x80))(DAT_012b0b2c,uStack_20,uStack_1c,uVar1);
  if ((iVar2 < 0) && (FUN_01183360(), iVar3 != 0)) {
    FUN_01183330();
    FUN_011832e0();
  }
  return iVar2;
}


