/* Module: rmbe3260.dll
   Function: FUN_66056360
   Address: 66056360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66056360(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  int local_10;
  int local_c;
  int *local_8;
  
  *param_1 = &PTR_FUN_66068a58;
  local_c = -(uint)(param_1[4] != 0);
  if (param_1[4] != 0) {
    do {
      FUN_6605eeb0(param_1 + 1,&local_c,&local_10,(int *)&local_8);
      if (local_8 != (int *)0x0) {
        sVar1 = (**(code **)(*local_8 + 8))();
        while (sVar1 != 0) {
          sVar1 = (**(code **)(*local_8 + 8))();
        }
      }
    } while (param_1[4] != 0);
  }
  if (param_1[0xf] != 0) {
    do {
      piVar2 = (int *)FUN_6605c4d0(param_1 + 0xb);
      (**(code **)(*piVar2 + 0x10))();
      if (piVar2 != (int *)0x0) {
        FUN_66056070(piVar2);
        operator_delete(piVar2);
      }
      param_1[8] = param_1[8] + -1;
    } while (param_1[0xf] != 0);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x51));
  }
  if (*(HKEY *)((int)param_1 + 0x69) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)((int)param_1 + 0x69));
  }
  FUN_6605b770((int *)((int)param_1 + 0x45));
  FUN_6605c430(param_1 + 0xb);
  FUN_6605ec50(param_1 + 1);
  return;
}


