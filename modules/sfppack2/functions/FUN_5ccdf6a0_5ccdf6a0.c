/* Module: sfppack2.dll
   Function: FUN_5ccdf6a0
   Address: 5ccdf6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccdf6a0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  WaitForSingleObject((HANDLE)param_1[7],0xffffffff);
  ResetEvent((HANDLE)param_1[7]);
  ResetEvent((HANDLE)param_1[0x27]);
  if (param_1[6] != 0) {
    return 0;
  }
  do {
    uVar1 = (uint)(param_1[10] == 0);
    puVar3 = param_1 + 0x2a;
    puVar4 = param_1 + uVar1 * 0xb + 0x16;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_5ccdf760(param_1 + uVar1 * 0xb + 0x11,param_1[0x28],param_1,param_1 + uVar1 * 0xb + 0x16);
    param_1[10] = uVar1;
    SetEvent((HANDLE)param_1[0x27]);
    WaitForSingleObject((HANDLE)param_1[7],0xffffffff);
    ResetEvent((HANDLE)param_1[7]);
    ResetEvent((HANDLE)param_1[0x27]);
  } while (param_1[6] == 0);
  return 0;
}


