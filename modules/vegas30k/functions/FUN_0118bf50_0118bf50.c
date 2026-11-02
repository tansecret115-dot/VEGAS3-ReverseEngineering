/* Module: vegas30k.dll
   Function: FUN_0118bf50
   Address: 0118bf50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118bf50(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  HANDLE hEvent;
  
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x3c) == DVar3) goto LAB_0118bf9a;
  DVar4 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),0);
  if (DVar4 == 0) {
    hEvent = *(HANDLE *)(param_1 + 0x38);
  }
  else {
    if (DVar4 != 0x102) goto LAB_0118bf9a;
    DVar4 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),0xffffffff);
    if (DVar4 != 0) goto LAB_0118bf9a;
    hEvent = *(HANDLE *)(param_1 + 0x38);
  }
  ResetEvent(hEvent);
  *(DWORD *)(param_1 + 0x3c) = DVar3;
LAB_0118bf9a:
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar5 = 0x8000ffff;
  if ((((uVar1 & 1) != 0) && (uVar5 = 1, (uVar1 & 0x800) == 0)) &&
     (uVar5 = 0x4e001, (uVar1 & 0x400) != 0)) {
    *(uint *)(param_1 + 0x50) = uVar1 | 0x800;
    uVar5 = FUN_0118c050(param_2,param_3);
  }
  if ((*(uint *)(param_1 + 0x50) & 0x400) == 0) {
    piVar2 = *(int **)(param_1 + 0x1f8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffff7ff;
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),0);
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  SetEvent(*(HANDLE *)(param_1 + 0x38));
  return uVar5;
}


