/* Module: mp3plug.dll
   Function: FUN_5f691fd0
   Address: 5f691fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f691fd0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  int local_c;
  int local_8;
  int local_4;
  
  *param_1 = (int)&PTR_LAB_5f72ce80;
  FUN_5f692420(param_1);
  if (param_1[0x420] != 0) {
    FUN_5f692900((int)param_1,&local_4);
    local_8 = 0;
    if (0 < local_4) {
      local_c = 0;
      do {
        puVar1 = *(undefined4 **)(param_1[0x420] + 0x20 + local_c);
        if (puVar1 != (undefined4 *)0x0) {
          if (*(int *)(param_1[0x420] + local_c) == 1) {
            if (puVar1 == (undefined4 *)0x0) goto LAB_5f692051;
            FUN_5f692fd0(puVar1);
          }
          pvVar3 = GlobalHandle(puVar1);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(puVar1);
          GlobalFree(pvVar3);
        }
LAB_5f692051:
        local_8 = local_8 + 1;
        local_c = local_c + 0x28;
      } while (local_8 < local_4);
    }
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x420]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x420]);
    GlobalFree(pvVar3);
  }
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (param_1[0x421] != 0) {
    FUN_5f693940(param_1[0x421]);
    puVar1 = (undefined4 *)param_1[0x421];
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5f693890(puVar1);
      pvVar3 = GlobalHandle(puVar1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(puVar1);
      GlobalFree(pvVar3);
    }
  }
  return;
}


