/* Module: sfppack3.dll
   Function: FUN_5cc427c0
   Address: 5cc427c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc427c0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (param_4 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(param_1 + 0x144);
      for (iVar1 = (*(uint *)(param_1 + 0x140) & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0x140);
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(param_1 + 0x40);
      for (iVar1 = (*(uint *)(param_1 + 0x3c) & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
  }
  *param_3 = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


