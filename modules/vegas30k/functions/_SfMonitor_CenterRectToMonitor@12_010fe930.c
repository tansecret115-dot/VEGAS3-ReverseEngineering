/* Module: vegas30k.dll
   Function: _SfMonitor_CenterRectToMonitor@12
   Address: 010fe930
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_CenterRectToMonitor_12(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0xfe930  1123  _SfMonitor_CenterRectToMonitor@12 */
  iVar1 = param_2[3];
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = *param_2;
  _SfMonitor_GetMonitorRect_12(param_1,&local_10,param_3);
  local_10 = local_10 + ((local_8 - local_10) - (iVar3 - iVar4)) / 2;
  *param_2 = local_10;
  param_2[2] = local_10 + (iVar3 - iVar4);
  local_c = ((local_4 - local_c) - (iVar1 - iVar2)) / 2 + local_c;
  param_2[1] = local_c;
  param_2[3] = local_c + (iVar1 - iVar2);
  return;
}


