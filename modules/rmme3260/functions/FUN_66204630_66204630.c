/* Module: rmme3260.dll
   Function: FUN_66204630
   Address: 66204630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66204630(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_66203460(param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)param_1[0xf] + 0xc))
                      ((int *)param_1[0xf],s_SeekGreaterOnSwitch_6626f200,1);
    if (-1 < iVar1) {
      (**(code **)(*(int *)param_1[0xf] + 0xc))
                ((int *)param_1[0xf],s_MinimumSwitchOverlap_6626f1e8,0);
    }
  }
  return;
}


