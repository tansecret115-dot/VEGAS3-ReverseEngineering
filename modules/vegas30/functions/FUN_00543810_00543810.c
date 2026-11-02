/* Module: vegas30.exe
   Function: FUN_00543810
   Address: 00543810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00543810(DWORD *param_1,LONG *param_2)

{
  int iVar1;
  DWORD DVar2;
  LONG LVar3;
  
  DVar2 = GetCurrentThreadId();
  if (DVar2 != *param_1) {
    *param_1 = DVar2;
  }
  LVar3 = InterlockedExchange(param_2,1);
  if (LVar3 != 0) {
    iVar1 = *param_2;
    while (LVar3 == iVar1) {
      Sleep(10);
      iVar1 = *param_2;
    }
    *param_2 = 1;
  }
  FUN_00543330(param_1);
  FUN_00543630(param_1);
  _SfList_Destroy_4(param_1[2]);
  _SfList_Destroy_4(param_1[1]);
  _SfList_Destroy_4(param_1[3]);
  free(param_1);
  return;
}


