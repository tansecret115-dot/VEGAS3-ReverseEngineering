/* Module: pngu3266.dll
   Function: FUN_6060c4d7
   Address: 6060c4d7
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6060c4d7(XPNTimer *param_1)

{
  int *piVar1;
  CPNColor *pCVar2;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  piVar1 = *(int **)(param_1 + 0x28);
  pCVar2 = (CPNColor *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x30) % 2 != 0) {
    pCVar2 = (CPNColor *)(param_1 + 0x53);
  }
  CPNColor::operator=((CPNColor *)(piVar1 + 0x34),pCVar2);
  (**(code **)(*piVar1 + 0x78))(0,1);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(0,1);
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x141) = 0;
    XPNTimer::SetPending(param_1,0);
  }
  return;
}


