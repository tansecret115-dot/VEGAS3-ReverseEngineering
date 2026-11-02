/* Module: vegas30.exe
   Function: FUN_00449ac0
   Address: 00449ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00449ac0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *unaff_retaddr;
  int local_8;
  int local_4;
  
  local_4 = 0;
  iVar1 = _SfDSFilter_GetPresetCount_12(param_2,&local_4,1);
  if (iVar1 < 0) {
    return 0;
  }
  param_2 = (int *)0x0;
  local_8 = 0;
  iVar1 = _SfVideoPlugin_GetInterface_12(&DAT_0060f778,&param_2,param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_2 + 0xc))(param_2,&local_8);
    (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
    if (-1 < iVar1) {
      return local_4 + local_8;
    }
  }
  return local_4;
}


