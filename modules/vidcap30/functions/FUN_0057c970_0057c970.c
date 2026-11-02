/* Module: vidcap30.exe
   Function: FUN_0057c970
   Address: 0057c970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057c970(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584578;
  pvStack_c = ExceptionList;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  *(undefined4 **)(param_1 + 0x34) = param_2;
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_005a1b78,(undefined4 *)(param_1 + 0x38));
    if (-1 < iVar2) {
      piVar1 = *(int **)(param_1 + 0x38);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00404b20(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    iVar2 = FUN_00582c10(param_3);
    uVar5 = (iVar2 + 1U) * 2;
    puVar3 = (undefined4 *)FUN_00404b00(uVar5);
    *(undefined4 **)(param_1 + 0x30) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      for (uVar4 = (iVar2 + 1U & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return 0;
}


