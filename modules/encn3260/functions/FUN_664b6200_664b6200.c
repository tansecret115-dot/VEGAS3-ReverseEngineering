/* Module: encn3260.dll
   Function: FUN_664b6200
   Address: 664b6200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b6200(uint *param_1,uint *param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_70 [4];
  uint local_60;
  uint local_4c;
  
  if (((((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) || ((int)param_2[1] < param_3)) ||
      ((param_4 == (uint *)0x0 || (param_5 == (uint *)0x0)))) ||
     ((param_1[1] == 0 || (((*param_1 & 0x100) == 0 || ((*param_2 & 0x100) == 0)))))) {
    return 0x80070057;
  }
  if ((*param_2 & 1) != 0) {
    puVar2 = local_70;
    for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_70[0] = 0x6c;
    local_70[1] = 8;
    iVar1 = (**(code **)(*(int *)param_2[0x10e] + 100))((int *)param_2[0x10e],0,local_70,1,0);
    if (iVar1 != 0) {
      (**(code **)(*(int *)param_2[0x10e] + 0x6c))((int *)param_2[0x10e]);
      iVar1 = (**(code **)(*(int *)param_2[0x10e] + 100))((int *)param_2[0x10e],0,local_70,1,0);
      if (iVar1 != 0) {
        return 0x80004005;
      }
    }
    *param_5 = local_60;
    *param_4 = local_4c;
    param_2[0x110] = local_4c;
    return 0;
  }
  if (param_2[param_3 + 0x10e] == 0) {
    return 0x80004005;
  }
  *param_4 = *(uint *)(param_2[param_3 + 0x10e] + 0x5c);
  *param_5 = param_2[0x10d];
  return 0;
}


