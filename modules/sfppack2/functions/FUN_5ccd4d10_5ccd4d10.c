/* Module: sfppack2.dll
   Function: FUN_5ccd4d10
   Address: 5ccd4d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd4d10(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),0xffffffff);
  ResetEvent(*(HANDLE *)(param_1 + 0x38));
  ResetEvent(*(HANDLE *)(param_1 + 0x550));
  if (*(int *)(param_1 + 0x40) != 0) {
    return 0;
  }
  do {
    uVar3 = (uint)(*(int *)(param_1 + 0x30) == 0);
    iVar2 = uVar3 * 0x280 + param_1;
    piVar1 = (int *)(iVar2 + 0x68);
    piVar5 = (int *)(param_1 + 0x554);
    piVar6 = piVar1;
    for (iVar4 = 0x97; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    FUN_5ccd4dd0((undefined4 *)(iVar2 + 0x48),*(int *)(param_1 + 0x548),param_1,piVar1);
    *(uint *)(param_1 + 0x30) = uVar3;
    SetEvent(*(HANDLE *)(param_1 + 0x550));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),0xffffffff);
    ResetEvent(*(HANDLE *)(param_1 + 0x38));
    ResetEvent(*(HANDLE *)(param_1 + 0x550));
  } while (*(int *)(param_1 + 0x40) == 0);
  return 0;
}


