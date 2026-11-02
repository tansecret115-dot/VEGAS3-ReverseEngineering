/* Module: mp3plug.dll
   Function: FUN_5f693120
   Address: 5f693120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f693120(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HANDLE pvVar3;
  HGLOBAL pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 8) == 0) {
    pvVar3 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 8) = pvVar3;
    if (pvVar3 == (HANDLE)0x0) {
      return 0x8007000e;
    }
  }
  if (*(LPCVOID *)(param_1 + 0xea4) != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0xea4));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0xea4));
    GlobalFree(pvVar4);
  }
  *(undefined4 *)(param_1 + 0xea4) = 0;
  if (*(LPCVOID *)(param_1 + 0xeac) != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0xeac));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0xeac));
    GlobalFree(pvVar4);
  }
  *(undefined4 *)(param_1 + 0xeac) = 0;
  if (*(LPCVOID *)(param_1 + 0xea8) != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0xea8));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0xea8));
    GlobalFree(pvVar4);
  }
  *(undefined4 *)(param_1 + 0xea8) = 0;
  *(int **)(param_1 + 0x40) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  puVar7 = (undefined4 *)(param_1 + 0x4c);
  for (iVar6 = 0x395; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *param_4;
    param_4 = param_4 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)param_4;
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0xe92);
  uVar5 = FUN_5f6932a0(param_1);
  *(int **)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0xed0) = 0;
  return uVar5;
}


