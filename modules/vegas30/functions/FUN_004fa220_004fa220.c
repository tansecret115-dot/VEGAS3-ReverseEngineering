/* Module: vegas30.exe
   Function: FUN_004fa220
   Address: 004fa220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fa220(int param_1,tagBITMAPINFOHEADER *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int *local_54;
  int local_50;
  undefined8 local_4c;
  uint local_44;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00619ca0;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff80;
  local_8 = 0;
  if (*(int *)(param_1 + 0x74) == 5) {
    ExceptionList = &local_14;
    local_1c = &stack0xffffff80;
    _SfVideoPlugin_ApplyTransition_120
              (param_2,0,0,0,0,0,0,param_3,0,0,0,0,0,0,param_4,0,0,0,0,0,0,param_1,DAT_0064b50c,
               param_5,param_6,0,0,0xffffffff,0xffffffff,3);
  }
  else {
    uVar2 = (uint)(*(int *)(param_1 + 0x74) == 1);
    ExceptionList = &local_14;
    local_44 = uVar2;
    puVar1 = &stack0xffffff80;
    if (uVar2 != 0) {
      ExceptionList = &local_14;
      _SfDibCopy_36(param_2,0,0,0,param_3,0,0,0,3);
      puVar1 = local_1c;
    }
    local_1c = puVar1;
    uVar3 = ftol();
    local_4c = uVar3;
    if (*(int *)(param_1 + 0x74) == 0xb) {
      local_50 = (**(code **)**(undefined4 **)(param_1 + 0x10))
                           (*(undefined4 **)(param_1 + 0x10),&DAT_0062c9e0,&local_54);
      if (-1 < local_50) {
        local_50 = (**(code **)(*local_54 + 0xc))(local_54,100,0x3c,1);
        (**(code **)(*local_54 + 8))(local_54);
      }
    }
    _SfVideoPlugin_ApplyFilterAuto_96
              (param_2,0,0,0,0,uVar3,~-(uint)(uVar2 != 0) & param_3,0,0,0,0,uVar3,param_1,
               DAT_0064b50c,param_5,param_6,0,0,0,0xffffffff,0xffffffff,3);
  }
  local_8 = 0xffffffff;
  local_2c = (float)(DAT_0064aa64 & 0xff) * _DAT_00610f1c;
  local_28 = (float)(DAT_0064aa64 >> 8 & 0xff) * _DAT_00610f1c;
  local_24 = (float)(DAT_0064aa64 >> 0x10 & 0xff) * _DAT_00610f1c;
  local_20 = 0x3f800000;
  local_3c = (float)(DAT_0064aa68 & 0xff) * _DAT_00610f1c;
  local_38 = (float)(DAT_0064aa68 >> 8 & 0xff) * _DAT_00610f1c;
  local_34 = (float)(DAT_0064aa68 >> 0x10 & 0xff) * _DAT_00610f1c;
  local_30 = 0x3f800000;
  SfDibAlphaToCheckers
            (param_2,(void *)0x0,(tagRECT *)0x0,0,(tagBITMAPINFOHEADER *)0x0,(void *)0x0,0,8,8,
             (tSFDIBPIXEL *)&local_2c,(tSFDIBPIXEL *)&local_3c);
  ExceptionList = local_14;
  return;
}


