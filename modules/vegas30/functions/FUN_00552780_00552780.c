/* Module: vegas30.exe
   Function: FUN_00552780
   Address: 00552780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00552780(undefined4 param_1,int *param_2)

{
  int iVar1;
  IMixerDriverModel *local_8;
  int *local_4;
  
  local_8 = (IMixerDriverModel *)0x0;
  local_4 = (int *)0x0;
  Mixer_GetDriverModel(*(AUDIODRVMODEL *)(*param_2 + 0x2eec),(char *)(*param_2 + 0x2ef0),&local_8);
  if (local_8 != (IMixerDriverModel *)0x0) {
    (**(code **)(*(int *)local_8 + 0xc))(local_8,&DAT_0060ea28,&local_4);
    if (local_4 == (int *)0x0) goto LAB_005527fd;
    iVar1 = (**(code **)(*local_4 + 0x20))(local_4);
    if (-1 < iVar1) {
      FUN_005522b0(param_1,param_2);
    }
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
LAB_005527fd:
  local_4 = (int *)0x0;
  if (local_8 != (IMixerDriverModel *)0x0) {
    (**(code **)(*(int *)local_8 + 8))(local_8);
  }
  return;
}


