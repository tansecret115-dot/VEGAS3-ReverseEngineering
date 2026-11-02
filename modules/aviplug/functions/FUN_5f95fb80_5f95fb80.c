/* Module: aviplug.dll
   Function: FUN_5f95fb80
   Address: 5f95fb80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f95fb80(int *param_1)

{
  int iVar1;
  LPSTR pCVar2;
  LPSTR pCVar3;
  UINT UVar4;
  
  if (param_1[9] == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x54))();
  FUN_5f95be20(param_1);
  iVar1 = FUN_5f95c930(param_1,param_1[0xd]);
  if (iVar1 != 0) {
    iVar1 = FUN_5f95c980(param_1[0xd]);
    if (iVar1 == 0) {
      UVar4 = 1;
      pCVar2 = FUN_5f9811c0(DAT_5f9f5978,10);
      pCVar3 = FUN_5f9811c0(DAT_5f9f5978,0x48);
      iVar1 = FUN_5f988960((HWND)param_1[4],pCVar3,pCVar2,UVar4);
      if (iVar1 != 1) {
        return -0x7ffb1ff4;
      }
      FUN_5f95d500(param_1,param_1[0xd]);
    }
  }
  iVar1 = (**(code **)(*(int *)param_1[0xb] + 100))((int *)param_1[0xb],param_1[0xd]);
  if (-1 < iVar1) {
    param_1[9] = 0;
  }
  return iVar1;
}


