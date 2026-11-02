/* Module: vegas30.exe
   Function: FUN_005522b0
   Address: 005522b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005523cb) */
/* WARNING: Removing unreachable block (ram,0x005523e2) */
/* WARNING: Removing unreachable block (ram,0x005523f2) */
/* WARNING: Removing unreachable block (ram,0x005523f8) */
/* WARNING: Removing unreachable block (ram,0x0055241a) */
/* WARNING: Removing unreachable block (ram,0x0055240b) */
/* WARNING: Removing unreachable block (ram,0x005524de) */
/* WARNING: Removing unreachable block (ram,0x005524f8) */
/* WARNING: Removing unreachable block (ram,0x00552521) */
/* WARNING: Removing unreachable block (ram,0x00552531) */
/* WARNING: Removing unreachable block (ram,0x00552537) */
/* WARNING: Removing unreachable block (ram,0x00552559) */
/* WARNING: Removing unreachable block (ram,0x0055254a) */
/* WARNING: Removing unreachable block (ram,0x00552616) */
/* WARNING: Removing unreachable block (ram,0x00552630) */
/* WARNING: Removing unreachable block (ram,0x00552658) */
/* WARNING: Removing unreachable block (ram,0x0055266a) */
/* WARNING: Removing unreachable block (ram,0x0055267c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005522b0(HWND param_1,int *param_2)

{
  HWND pHVar1;
  UINT UVar2;
  WPARAM WVar3;
  WPARAM wParam;
  LPARAM LVar4;
  IMixerDriverModel *pIStack_48;
  int *local_44;
  
  LVar4 = 0;
  WVar3 = 0;
  UVar2 = 0x188;
  pHVar1 = GetDlgItem(param_1,0x46e);
  WVar3 = SendMessageA(pHVar1,UVar2,WVar3,LVar4);
  if (WVar3 != 0xffffffff) {
    LVar4 = 0;
    UVar2 = 0x199;
    pHVar1 = GetDlgItem(param_1,0x46e);
    SendMessageA(pHVar1,UVar2,WVar3,LVar4);
  }
  LVar4 = 0;
  WVar3 = 0;
  UVar2 = 0x18b;
  pHVar1 = GetDlgItem(param_1,0x46e);
  WVar3 = SendMessageA(pHVar1,UVar2,WVar3,LVar4);
  while (WVar3 != 0) {
    WVar3 = WVar3 - 1;
    LVar4 = 0;
    UVar2 = 0x199;
    wParam = WVar3;
    pHVar1 = GetDlgItem(param_1,0x46e);
    local_44 = (int *)SendMessageA(pHVar1,UVar2,wParam,LVar4);
    if (local_44 != (int *)0x0) {
      if ((int *)*local_44 != (int *)0x0) {
        (**(code **)(*(int *)*local_44 + 8))();
      }
      free(local_44);
    }
  }
  LVar4 = 0;
  WVar3 = 0;
  UVar2 = 0x184;
  pHVar1 = GetDlgItem(param_1,0x46e);
  SendMessageA(pHVar1,UVar2,WVar3,LVar4);
  pIStack_48 = (IMixerDriverModel *)0x0;
  Mixer_GetDriverModel
            (*(AUDIODRVMODEL *)(*param_2 + 0x2eec),(char *)(*param_2 + 0x2ef0),&pIStack_48);
  if ((pIStack_48 != (IMixerDriverModel *)0x0) &&
     ((**(code **)(*(int *)pIStack_48 + 0xc))(pIStack_48,&DAT_0060ea28),
     pIStack_48 != (IMixerDriverModel *)0x0)) {
    (**(code **)(*(int *)pIStack_48 + 8))();
  }
  pIStack_48 = (IMixerDriverModel *)0x0;
  LVar4 = 0;
  WVar3 = 0;
  UVar2 = 0x186;
  pHVar1 = GetDlgItem(param_1,0x46e);
  SendMessageA(pHVar1,UVar2,WVar3,LVar4);
  FUN_00552170(param_1);
  return;
}


