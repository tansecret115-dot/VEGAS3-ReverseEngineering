/* Module: aviplug.dll
   Function: FUN_5f959ee0
   Address: 5f959ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f959ee0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_5f9d913c;
  if ((int *)param_1[2] != (int *)0x0) {
    iVar1 = *(int *)param_1[2];
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_5f95a110((int)param_1,
                   *(int *)(*(int *)(param_1[2] + 4) * iVar1 + *(int *)(param_1[2] + 8)));
    }
    FUN_5f9796e0((int *)param_1[2]);
    param_1[2] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


