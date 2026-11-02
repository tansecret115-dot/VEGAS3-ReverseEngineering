/* Module: rmme3260.dll
   Function: FUN_66257130
   Address: 66257130
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_66257130(int param_1)

{
  uintptr_t uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = _beginthreadex((void *)0x0,0,FUN_662570e0,(void *)(param_1 + 4),
                           *(uint *)(param_1 + 0x18),(uint *)(param_1 + 0x14));
    *(uintptr_t *)(param_1 + 0x10) = uVar1;
  }
  return *(int *)(param_1 + 0x10) != 0;
}


