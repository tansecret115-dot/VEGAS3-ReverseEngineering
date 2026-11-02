/* Module: wmfplug2.dll
   Function: FUN_004026a0
   Address: 004026a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004026a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *pMem;
  HGLOBAL pvVar3;
  int local_c;
  int local_8;
  int local_4;
  
  *param_1 = (int)&PTR_LAB_0047ba00;
  param_1[1] = (int)&PTR_LAB_0047b9e0;
  FUN_00402b10(param_1);
  if (param_1[0x93] != 0) {
    FUN_004068f0(param_1[0x93]);
  }
  if (param_1[0x92] != 0) {
    FUN_00403120((int)param_1,&local_4);
    local_8 = 0;
    if (0 < local_4) {
      local_c = 0;
      do {
        piVar1 = *(int **)(param_1[0x92] + 0x30 + local_c);
        if (piVar1 != (int *)0x0) {
          iVar2 = *(int *)(param_1[0x92] + local_c);
          if (iVar2 == 1) {
            if (piVar1 != (int *)0x0) {
              FUN_00403c20(piVar1);
LAB_00402744:
              pvVar3 = GlobalHandle(piVar1);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle(piVar1);
              GlobalFree(pvVar3);
            }
          }
          else if (iVar2 == 2) {
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x58))(1);
            }
          }
          else if (piVar1 != (int *)0x0) goto LAB_00402744;
        }
        local_8 = local_8 + 1;
        local_c = local_c + 0x38;
      } while (local_8 < local_4);
    }
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x92]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x92]);
    GlobalFree(pvVar3);
  }
  pMem = (undefined4 *)param_1[0x93];
  if (pMem != (undefined4 *)0x0) {
    FUN_00406850(pMem);
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  piVar1 = (int *)param_1[0x91];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x90];
  param_1[0x91] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x90] = 0;
    return;
  }
  param_1[0x90] = 0;
  return;
}


