/* Module: encn3260.dll
   Function: FUN_66498100
   Address: 66498100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66498100(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  HMODULE pHVar2;
  
  if (((*(byte *)(param_1 + 8) & 8) == 0) &&
     (iVar1 = (**(code **)(*param_1 + 0x14))(param_1,0,0), iVar1 != 0)) {
    return;
  }
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  *(short *)(param_1 + 7) = (short)param_3;
  iVar1 = (**(code **)(*(int *)param_1[5] + 0x24))(param_2,param_3,0,pHVar2);
  FUN_66497130(iVar1);
  return;
}


