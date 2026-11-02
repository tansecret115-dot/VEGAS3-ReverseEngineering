/* Module: aviplug.dll
   Function: FUN_5f9455b0
   Address: 5f9455b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9455b0(int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  uVar3 = param_2;
  piVar2 = param_1;
  local_4 = 0;
  iVar5 = (int)param_2 >> 0x1f;
  if ((param_1[-0x3b] <= iVar5) && ((param_1[-0x3b] < iVar5 || ((uint)param_1[-0x3c] <= param_2))))
  {
    return 0;
  }
  if ((param_1[0x50] == 0) &&
     (iVar4 = (**(code **)(*param_1 + 0x10))(param_1,0,param_1[-0x3c],1), iVar4 < 0)) {
    return 0;
  }
  piVar1 = piVar2 + 1;
  iVar5 = (**(code **)(piVar2[1] + 0x3c))(piVar1,uVar3,iVar5,&param_1,0,0,0,0,0,0);
  if (-1 < iVar5) {
    local_4 = piVar2[0x4b];
    (**(code **)(*piVar1 + 0x40))(piVar1,piVar2[0x4e]);
  }
  return local_4;
}


