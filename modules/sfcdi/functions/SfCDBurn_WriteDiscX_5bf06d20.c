/* Module: sfcdi.dll
   Function: SfCDBurn_WriteDiscX
   Address: 5bf06d20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDBurn_WriteDiscX(struct HSFBURN__ *) */

long SfCDBurn_WriteDiscX(HSFBURN__ *param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  uint uVar3;
  DWORD local_4;
  
                    /* 0x6d20  31  ?SfCDBurn_WriteDiscX@@YGJPAUHSFBURN__@@@Z */
  local_4 = 0;
  if (param_1 == (HSFBURN__ *)0x0) {
    return -0x7ff8ffa9;
  }
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf06810,param_1,0
                        ,(LPDWORD)(param_1 + 0x60));
  *(HANDLE *)(param_1 + 0x5c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    return -0x7ff8fff2;
  }
  do {
    DVar2 = timeGetTime();
    uVar3 = DVar2 - *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x34) = uVar3;
    if (*(uint *)(param_1 + 0x30) < uVar3) {
      uVar3 = *(uint *)(param_1 + 0x30);
    }
    *(uint *)(param_1 + 0x34) = uVar3;
    DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x5c),500);
    if (DVar2 == 0) {
      GetExitCodeThread(*(HANDLE *)(param_1 + 0x5c),&local_4);
      CloseHandle(*(HANDLE *)(param_1 + 0x5c));
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  } while (*(int *)(param_1 + 0x5c) != 0);
  return local_4;
}


