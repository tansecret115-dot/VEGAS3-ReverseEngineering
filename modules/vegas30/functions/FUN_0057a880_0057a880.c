/* Module: vegas30.exe
   Function: FUN_0057a880
   Address: 0057a880
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0057a880(LPVOID param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  int iVar4;
  
  iVar4 = -0x7ffb1fe5;
  if (*(int *)((int)param_1 + 8) != 0) {
    if (*(HANDLE *)((int)param_1 + 0x10) != (HANDLE)0x0) {
      DVar2 = WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x10),0);
      if (DVar2 == 0) {
        CloseHandle(*(HANDLE *)((int)param_1 + 0x10));
        *(undefined4 *)((int)param_1 + 0x10) = 0;
      }
      else {
        iVar4 = -0x7ffb1f54;
      }
    }
    if (*(int *)((int)param_1 + 0x10) == 0) {
      puVar1 = (undefined4 *)((int)param_1 + 0xc);
      iVar4 = (**(code **)**(undefined4 **)((int)param_1 + 8))
                        (*(undefined4 **)((int)param_1 + 8),&DAT_0061bea8,puVar1);
      if (-1 < iVar4) {
        FUN_00579c40();
        pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0057a7b0,param_1,0,
                              (LPDWORD)&stack0xfffffff0);
        *(HANDLE *)((int)param_1 + 0x10) = pvVar3;
        if (pvVar3 == (HANDLE)0x0) {
          FUN_00579c50();
          (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
          *puVar1 = 0;
          return -0x7ff8fff2;
        }
      }
      return iVar4;
    }
  }
  return iVar4;
}


