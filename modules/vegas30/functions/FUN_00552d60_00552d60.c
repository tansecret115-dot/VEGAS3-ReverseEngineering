/* Module: vegas30.exe
   Function: FUN_00552d60
   Address: 00552d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00552d60(IMixerDriverModel *param_1,int *param_2)

{
  int *piVar1;
  IMixerDriverModel *hDlg;
  HWND pHVar2;
  int *_Memory;
  UINT UVar3;
  WPARAM wParam;
  WPARAM WVar4;
  LPARAM LVar5;
  int *local_4;
  
  hDlg = param_1;
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x18b;
  pHVar2 = GetDlgItem((HWND)param_1,0x46e);
  WVar4 = SendMessageA(pHVar2,UVar3,WVar4,LVar5);
  while (WVar4 != 0) {
    WVar4 = WVar4 - 1;
    LVar5 = 0;
    UVar3 = 0x199;
    wParam = WVar4;
    pHVar2 = GetDlgItem((HWND)hDlg,0x46e);
    _Memory = (int *)SendMessageA(pHVar2,UVar3,wParam,LVar5);
    piVar1 = (int *)*_Memory;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *_Memory = 0;
    free(_Memory);
  }
  param_1 = (IMixerDriverModel *)0x0;
  local_4 = (int *)0x0;
  Mixer_GetDriverModel(*(AUDIODRVMODEL *)(*param_2 + 0x2eec),(char *)(*param_2 + 0x2ef0),&param_1);
  if (param_1 != (IMixerDriverModel *)0x0) {
    (**(code **)(*(int *)param_1 + 0xc))(param_1,&DAT_0060ea28,&local_4);
    if (local_4 == (int *)0x0) goto LAB_00552e2c;
    (**(code **)(*local_4 + 0x24))(local_4);
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
LAB_00552e2c:
  local_4 = (int *)0x0;
  if (param_1 != (IMixerDriverModel *)0x0) {
    (**(code **)(*(int *)param_1 + 8))(param_1);
  }
  return;
}


