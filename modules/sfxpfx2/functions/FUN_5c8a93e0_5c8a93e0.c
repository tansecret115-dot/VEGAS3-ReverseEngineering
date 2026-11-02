/* Module: sfxpfx2.dll
   Function: FUN_5c8a93e0
   Address: 5c8a93e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_5c8a93e0(undefined4 *param_1,LPCSTR param_2)

{
  HGLOBAL pvVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  pvVar1 = FUN_5c8a69e0(param_1,param_2,(LPCSTR)0x2,(DWORD *)&param_2);
  if (pvVar1 != (HGLOBAL)0x0) {
    piVar2 = LockResource(pvVar1);
    if (((piVar2 != (int *)0x0) && (*piVar2 == 0x28)) && (param_2 != (LPCSTR)0x0)) {
      pvVar1 = GlobalAlloc(2,(SIZE_T)param_2);
      piVar3 = GlobalLock(pvVar1);
      if (piVar3 != (int *)0x0) {
        piVar5 = piVar3;
        for (uVar4 = (uint)param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *piVar5 = *piVar2;
          piVar2 = piVar2 + 1;
          piVar5 = piVar5 + 1;
        }
        for (uVar4 = (uint)param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)piVar5 = (char)*piVar2;
          piVar2 = (int *)((int)piVar2 + 1);
          piVar5 = (int *)((int)piVar5 + 1);
        }
        return piVar3;
      }
    }
  }
  return (int *)0x0;
}


