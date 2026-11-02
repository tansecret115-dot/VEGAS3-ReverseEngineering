/* Module: Setup.exe
   Function: _SfMonitor_ClipRectToMonitor@12
   Address: 004136a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_ClipRectToMonitor_12(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
                    /* 0x136a0  282  _SfMonitor_ClipRectToMonitor@12 */
  iVar1 = param_2[2];
  iVar2 = *param_2;
  iVar3 = param_2[3];
  iVar4 = param_2[1];
  if (param_1 == 0) {
    local_28 = 0x28;
    uVar6 = (*DAT_00449088)(param_2,2,&local_28);
    (*DAT_00449080)(uVar6);
    if (param_3 == 0) {
      local_34 = iStack_20;
      local_2c = iStack_18;
      local_30 = iStack_1c;
      local_38 = iStack_24;
    }
    else {
      local_34 = iStack_10;
      local_2c = iStack_8;
      local_30 = iStack_c;
      local_38 = iStack_14;
    }
  }
  else {
    _SfMonitor_GetMonitorRect_12(param_1);
  }
  iVar5 = *param_2;
  iVar7 = local_30 - (iVar1 - iVar2);
  iVar8 = iVar7;
  if (iVar5 <= iVar7) {
    iVar8 = iVar5;
  }
  if ((local_38 <= iVar8) && (local_38 = iVar7, iVar5 <= iVar7)) {
    local_38 = iVar5;
  }
  iVar5 = param_2[1];
  iVar7 = local_2c - (iVar3 - iVar4);
  *param_2 = local_38;
  iVar8 = iVar7;
  if (iVar5 <= iVar7) {
    iVar8 = iVar5;
  }
  if ((local_34 <= iVar8) && (local_34 = iVar7, iVar5 <= iVar7)) {
    local_34 = iVar5;
  }
  param_2[1] = local_34;
  param_2[2] = local_38 + (iVar1 - iVar2);
  param_2[3] = local_34 + (iVar3 - iVar4);
  return;
}


