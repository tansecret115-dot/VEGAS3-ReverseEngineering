/* Module: aviplug.dll
   Function: FUN_5f9424e0
   Address: 5f9424e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9424e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = param_4;
  puVar2 = param_3;
  puVar1 = param_2;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if ((param_1[5] == 2) && ((int)param_1[0x1d] < 2)) {
    uVar5 = 0;
    param_2 = (undefined4 *)0x0;
    iVar4 = (**(code **)(*(int *)*param_1 + 0x3c))
                      ((int *)*param_1,param_1[8],param_1[9],puVar1,&param_2,0,0,0,2,param_1 + 0x5e)
    ;
    if (iVar4 == 0) {
      *puVar2 = uVar5;
      *puVar3 = 1;
    }
  }
  return;
}


