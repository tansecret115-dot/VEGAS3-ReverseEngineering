/* Module: vegas30.exe
   Function: FUN_00552a20
   Address: 00552a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00552a20(IMixerDriverModel *param_1,int *param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  int *local_4;
  
  hWnd = GetDlgItem((HWND)param_1,0x48c);
  LVar1 = SendMessageA(hWnd,0xf0,0,0);
  param_1 = (IMixerDriverModel *)0x0;
  local_4 = (int *)0x0;
  Mixer_GetDriverModel(*(AUDIODRVMODEL *)(*param_2 + 0x2eec),(char *)(*param_2 + 0x2ef0),&param_1);
  if (param_1 != (IMixerDriverModel *)0x0) {
    (**(code **)(*(int *)param_1 + 0xc))(param_1,&DAT_0060ea28,&local_4);
    if (local_4 == (int *)0x0) goto LAB_00552ab5;
    (**(code **)(*local_4 + 0x18))(local_4,LVar1 == 1);
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
LAB_00552ab5:
  if (param_1 != (IMixerDriverModel *)0x0) {
    (**(code **)(*(int *)param_1 + 8))(param_1);
  }
  return 0;
}


