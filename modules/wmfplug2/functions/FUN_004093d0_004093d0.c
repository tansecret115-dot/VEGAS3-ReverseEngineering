/* Module: wmfplug2.dll
   Function: FUN_004093d0
   Address: 004093d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004093d0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  HGLOBAL pvVar4;
  int local_c;
  int local_8;
  int local_4;
  
  *param_1 = (int)&PTR_LAB_0047bf2c;
  FUN_00409a70(param_1);
  if (param_1[0x17] != 0) {
    FUN_00409e00((int)param_1,&local_4);
    local_c = 0;
    if (0 < local_4) {
      local_8 = 0;
      do {
        puVar1 = (undefined4 *)((int *)(local_8 + param_1[0x17]))[6];
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)(local_8 + param_1[0x17]);
          if (iVar2 == 1) {
            if (puVar1 != (undefined4 *)0x0) {
              FUN_0040a8d0(puVar1);
              goto LAB_00409451;
            }
          }
          else if (iVar2 == 2) {
            if (puVar1 != (undefined4 *)0x0) {
              FUN_0040a530(puVar1);
LAB_00409451:
              pvVar4 = GlobalHandle(puVar1);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(puVar1);
              GlobalFree(pvVar4);
            }
          }
          else if (puVar1 != (undefined4 *)0x0) goto LAB_00409451;
        }
        local_c = local_c + 1;
        local_8 = local_8 + 0x20;
      } while (local_c < local_4);
    }
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x17]);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x17]);
    GlobalFree(pvVar4);
  }
  if ((LPCVOID)param_1[9] != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle((LPCVOID)param_1[9]);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle((LPCVOID)param_1[9]);
    GlobalFree(pvVar4);
  }
  piVar3 = (int *)param_1[0x15];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)param_1[0x14];
  param_1[0x15] = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)param_1[0x13];
  param_1[0x14] = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)param_1[0x12];
  param_1[0x13] = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  param_1[0x12] = 0;
  if ((HANDLE)param_1[6] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[6]);
  }
  puVar1 = (undefined4 *)param_1[0x16];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0047bf78;
    if ((HANDLE)puVar1[6] != (HANDLE)0x0) {
      CloseHandle((HANDLE)puVar1[6]);
    }
    pvVar4 = GlobalHandle(puVar1);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(puVar1);
    GlobalFree(pvVar4);
  }
  return;
}


