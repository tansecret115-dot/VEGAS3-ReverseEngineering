/* Module: vegas30k.dll
   Function: Transport_Start
   Address: 0117f0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_Start(unsigned long,__int64,__int64,__int64,__int64,int,double) */

long Transport_Start(ulong param_1,__int64 param_2,__int64 param_3,__int64 param_4,__int64 param_5,
                    int param_6,double param_7)

{
  int iVar1;
  uint uVar2;
  uint in_stack_00000008;
  uint local_38;
  int local_34;
  uint local_28;
  int local_24;
  uint uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
                    /* 0x17f0f0  572  ?Transport_Start@@YGJK_J000HN@Z */
  iVar1 = Transport_IsRecording();
  if (iVar1 != 0) {
    return 0x4e001;
  }
  local_14 = param_5._4_4_;
  local_10 = param_5._4_4_;
  local_38 = param_3._4_4_;
  local_34 = (int)param_4;
  local_28 = param_4._4_4_;
  local_24 = (int)param_5;
  local_18 = 0xffffffff;
  local_c = 0;
  if ((-1 < (int)param_4) && (-1 < (int)param_5)) {
    iVar1 = (int)param_4 + (int)param_5 + (uint)CARRY4(param_3._4_4_,param_4._4_4_);
    if ((iVar1 <= (int)param_2) &&
       ((iVar1 < (int)param_2 || (param_3._4_4_ + param_4._4_4_ < in_stack_00000008)))) {
      local_14 = 0;
    }
  }
  local_8 = 0;
  (**(code **)(*DAT_012b0b2c + 0xdc))(DAT_012b0b2c,&local_38);
  (**(code **)(*DAT_012b0b2c + 0x88))(DAT_012b0b2c,param_5,0);
  (**(code **)(*DAT_012b0b2c + 0xd4))(DAT_012b0b2c,local_8,uStack_4);
  iVar1 = Transport_IsRecMonitoring();
  uVar2 = uStack_20;
  if (iVar1 != 0) {
    Transport_StopRecMonitor();
    FUN_01183340(1);
    uVar2 = uStack_20 | 0x10800000;
  }
  iVar1 = FUN_011832b0(in_stack_00000008,(int)param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_011832f0(in_stack_00000008,(int)param_2);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*DAT_012b0b2c + 0x6c))(DAT_012b0b2c,uVar2,in_stack_00000008,(int)param_2)
      ;
      if (iVar1 != 0) {
        FUN_01183330();
        FUN_011832e0();
        if ((uVar2 & 0x800000) != 0) {
          FUN_01183360();
        }
      }
    }
    else {
      FUN_011832e0();
      if ((uVar2 & 0x800000) != 0) {
        FUN_01183360();
        return iVar1;
      }
    }
  }
  else if ((uVar2 & 0x800000) != 0) {
    FUN_01183360();
    return iVar1;
  }
  return iVar1;
}


