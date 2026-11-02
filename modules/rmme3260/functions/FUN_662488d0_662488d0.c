/* Module: rmme3260.dll
   Function: FUN_662488d0
   Address: 662488d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662488d0(void *param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x10));
  iVar1 = -0x7fffbffb;
  if (*(int *)((int)param_1 + 0x28) == 0) {
    iVar1 = 0;
  }
  else if (*(int *)((int)param_1 + 0x28) == 1) {
    iVar1 = FUN_66248a00(param_1);
  }
  if (iVar1 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x10));
  }
  return iVar1;
}


