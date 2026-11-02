/* Module: vegas30.exe
   Function: FUN_0058ed50
   Address: 0058ed50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058ed50(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  HANDLE local_24;
  undefined4 local_20;
  undefined4 local_1c [7];
  
  if (*(int *)(param_1 + 0x8b4) != 0) {
    puVar2 = local_1c;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (param_2 != 0) {
      local_1c[3] = 0xffffffff;
    }
    ResetEvent(*(HANDLE *)(param_1 + 0x8c4));
    *(undefined4 *)(param_1 + 0x8c0) = 1;
    _SfQueueInsert_8(param_1 + 0x890,local_1c);
    local_24 = *(HANDLE *)(param_1 + 0x8b4);
    local_20 = *(undefined4 *)(param_1 + 0x8c4);
    WaitForMultipleObjects(2,&local_24,param_2,0xffffffff);
    *(undefined4 *)(param_1 + 0x8c0) = 0;
  }
  piVar3 = (int *)(param_1 + 0x9c);
  iVar1 = 0x40;
  do {
    if (*piVar3 != 0) {
      FUN_0058e0a0(*piVar3);
      *piVar3 = 0;
    }
    ResetEvent((HANDLE)piVar3[-1]);
    piVar3 = piVar3 + 7;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (param_2 != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x8c4));
    *(undefined4 *)(param_1 + 0x8c4) = 0;
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x8b4),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 0x8b4));
    *(undefined4 *)(param_1 + 0x8b4) = 0;
  }
  return;
}


