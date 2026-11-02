/* Module: vegas30.exe
   Function: FUN_005ea650
   Address: 005ea650
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005ea650(undefined4 param_1,undefined4 param_2,ulong param_3,ulong param_4,
                 undefined4 param_5,int param_6,undefined4 param_7)

{
  long lVar1;
  int *unaff_ESI;
  int *piVar2;
  int *local_c;
  int *local_8;
  ISFGraphBuilder *local_4;
  
  local_4 = (ISFGraphBuilder *)0x0;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  lVar1 = Mixer_GetDeviceGraph(&local_4,param_3,param_4);
  if (-1 < lVar1) {
    lVar1 = (**(code **)(*(int *)local_4 + 0xb8))(local_4,&local_c);
    if (-1 < lVar1) {
      (**(code **)(*local_c + 0x10))(local_c,param_5);
      piVar2 = (int *)&stack0xfffffff0;
      (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,piVar2,0);
      (**(code **)(*piVar2 + 8))(piVar2);
      if (local_8 == (int *)0x0) {
        lVar1 = -0x7fff0001;
        goto LAB_005ea70e;
      }
      lVar1 = FUN_005bb1d0(7,param_2,local_8,param_4,param_1,param_6 == 0,param_7);
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
LAB_005ea70e:
  if (local_4 != (ISFGraphBuilder *)0x0) {
    (**(code **)(*(int *)local_4 + 8))(local_4);
  }
  return lVar1;
}


