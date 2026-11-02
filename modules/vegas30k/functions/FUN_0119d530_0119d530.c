/* Module: vegas30k.dll
   Function: FUN_0119d530
   Address: 0119d530
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119d530(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  param_1[0x138] = param_1[0x152];
  param_1[0x1aa] = param_1[0x14c];
  param_1[0x139] = 0;
  param_1[0x1ab] = param_1[0x14d];
  (**(code **)(*(int *)param_1[0x12e] + 0x5c))((int *)param_1[0x12e],0);
  piVar5 = (int *)param_1[0x12e];
  iVar3 = (**(code **)(*piVar5 + 0x50))(piVar5);
  FUN_01199800();
  uVar4 = 0;
  (**(code **)(*(int *)param_1[0x12e] + 0x60))((int *)param_1[0x12e],param_1 + 0x13e,0);
  (**(code **)(*(int *)param_1[0x12e] + 0x4c))((int *)param_1[0x12e]);
  (**(code **)(*(int *)param_1[0x12e] + 0x54))((int *)param_1[0x12e]);
  iVar1 = param_1[0x186];
  param_1[0x186] = iVar1 + 1;
  if (iVar1 + 1 != param_1[0x185]) {
    return iVar3;
  }
  for (puVar2 = (undefined4 *)param_1[0x18e]; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[0x19]) {
    if ((puVar2[9] != 0) || (param_1[9] != 1)) {
      puVar2[0x14] = param_1[0x152];
      puVar2[0x15] = param_1[0x153];
      puVar2[0x16] = param_1[0x152];
      iVar1 = param_1[0x153];
      puVar2[0xe] = 0;
      puVar2[0x17] = iVar1;
      puVar2[0x10] = 0;
      puVar2[0x12] = 0;
      puVar2[0xf] = 0;
      puVar2[0x11] = 0;
      puVar2[0x13] = 0;
      iVar3 = (**(code **)(*(int *)*puVar2 + 0x138))(param_1,uVar4,piVar5);
      if (iVar3 < 0) break;
    }
  }
  (**(code **)(*param_1 + 0xb0))(param_1,1);
  return iVar3;
}


