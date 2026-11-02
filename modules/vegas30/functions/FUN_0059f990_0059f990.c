/* Module: vegas30.exe
   Function: FUN_0059f990
   Address: 0059f990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0059f990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *local_4;
  
  local_4 = (int *)0x0;
  iVar1 = FUN_004fa060(&DAT_00629ad8,0xb,param_4,&param_4);
  if (iVar1 == 0) {
    iVar2 = -0x7ff8fff2;
  }
  else {
    iVar2 = (**(code **)**(undefined4 **)(iVar1 + 0x10))
                      (*(undefined4 **)(iVar1 + 0x10),&DAT_0062c9e0,&local_4);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*local_4 + 0xc))
                        (local_4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
      if (-1 < iVar2) {
        iVar2 = _SfVideoPlugin_ApplyFilterAuto_96
                          (param_1,param_2,0,param_3,0,0xffffffff,0x7fffffff,0,0,0,0,0,0xffffffff,
                           0x7fffffff,iVar1,DAT_0064b50c,0,0,0,0,0,0xffffffff,0xffffffff,3);
        if (-1 < iVar2) goto LAB_0059fa58;
      }
    }
  }
  _SfDibSet_36(param_1,param_2,0,param_3,0,0,0,0x3f800000,3);
LAB_0059fa58:
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  if (iVar1 != 0) {
    FUN_004fa200(iVar1);
  }
  return iVar2;
}


