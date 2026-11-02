/* Module: vegas30.exe
   Function: FUN_005cb460
   Address: 005cb460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cb460(undefined4 param_1,void *param_2)

{
  DWORD DVar1;
  
  FUN_005b83b0(param_1,1);
  if ((code *)**(undefined4 **)((int)param_2 + 0x69c) != (code *)0x0) {
    (*(code *)**(undefined4 **)((int)param_2 + 0x69c))(param_2);
  }
  FUN_005caca0(param_1,param_2);
  _SfList_Destroy_4(*(undefined4 *)((int)param_2 + 0x24));
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  FUN_0047c430((int)param_2 + 0x638);
  if (*(int *)((int)param_2 + 0x28) != 0) {
    _SfList_Destroy_4(*(int *)((int)param_2 + 0x28));
    *(undefined4 *)((int)param_2 + 0x28) = 0;
  }
  if (*(int *)((int)param_2 + 4) == 2) {
    if (*(int *)((int)param_2 + 0x234) != 0) {
      FUN_005d13b0((int)param_2 + 0x38);
    }
    if (*(int *)((int)param_2 + 0x5d0) != 0) {
      DVar1 = GetCurrentThreadId();
      _SfList_SetThreadOwner_8(*(undefined4 *)((int)param_2 + 0x5d0),DVar1);
      _SfList_Destroy_4(*(undefined4 *)((int)param_2 + 0x5d0));
      *(undefined4 *)((int)param_2 + 0x5d0) = 0;
    }
    FUN_0058a740((int)param_2 + 0x248);
    DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_2 + 0x3e4));
  }
  else if (*(int *)((int)param_2 + 4) == 3) {
    if (*(int *)((int)param_2 + 0x7c) != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*(int *)((int)param_2 + 0x7c));
      *(undefined4 *)((int)param_2 + 0x7c) = 0;
    }
    if (*(int *)((int)param_2 + 0x78) != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*(int *)((int)param_2 + 0x78));
      *(undefined4 *)((int)param_2 + 0x78) = 0;
    }
    FUN_00522050((int)param_2 + 0x80,0);
  }
  FUN_005cb690(param_1,param_2,0);
  free(param_2);
  FUN_005b84d0(param_1,1);
  return 0;
}


