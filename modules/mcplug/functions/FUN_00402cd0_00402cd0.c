/* Module: mcplug.dll
   Function: FUN_00402cd0
   Address: 00402cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402cd0(undefined4 *param_1)

{
  int *pMem;
  int iVar1;
  undefined4 *pMem_00;
  HGLOBAL pvVar2;
  int local_c;
  int local_8;
  int local_4;
  
  *param_1 = &PTR_LAB_00476678;
  FUN_00402fd0((int)param_1);
  if (param_1[0x90] != 0) {
    FUN_004035b0((int)param_1,&local_4);
    local_c = 0;
    if (0 < local_4) {
      local_8 = 0;
      do {
        pMem = (int *)((int *)(local_8 + param_1[0x90]))[2];
        if (pMem != (int *)0x0) {
          iVar1 = *(int *)(local_8 + param_1[0x90]);
          if (iVar1 == 1) {
            if (pMem != (int *)0x0) {
              FUN_00403aa0(pMem);
LAB_00402d5b:
              pvVar2 = GlobalHandle(pMem);
              GlobalUnlock(pvVar2);
              pvVar2 = GlobalHandle(pMem);
              GlobalFree(pvVar2);
            }
          }
          else if (iVar1 == 2) {
            if (pMem != (int *)0x0) {
              (**(code **)(*pMem + 0x58))(1);
            }
          }
          else if (pMem != (int *)0x0) goto LAB_00402d5b;
        }
        local_c = local_c + 1;
        local_8 = local_8 + 0xc;
      } while (local_c < local_4);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x90]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x90]);
    GlobalFree(pvVar2);
  }
  pMem_00 = (undefined4 *)param_1[0x91];
  if (pMem_00 != (undefined4 *)0x0) {
    FUN_00404aa0(pMem_00);
    pvVar2 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem_00);
    GlobalFree(pvVar2);
  }
  return;
}


