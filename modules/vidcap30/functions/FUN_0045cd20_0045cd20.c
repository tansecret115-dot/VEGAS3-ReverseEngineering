/* Module: vidcap30.exe
   Function: FUN_0045cd20
   Address: 0045cd20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045cd20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar2 = **(int **)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = iVar2 + -1;
  }
  iVar1 = _SfDoesMetricExist_12(DAT_005bba88,iVar2,3);
  iVar3 = iVar2;
  while (iVar1 == 0) {
    _SfDeleteMetric_12(DAT_005bba88,iVar3,3);
    _SfDeleteMetric_12(DAT_005bba88,iVar3,1);
    iVar3 = iVar3 + 1;
    iVar1 = _SfDoesMetricExist_12(DAT_005bba88,iVar3,3);
  }
  for (uVar4 = (uint)(*(int *)(param_1 + 0x24) != 0); (int)uVar4 < iVar2; uVar4 = uVar4 + 1) {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + uVar4 * 4);
    _SfSetMetricString_12(DAT_005bba88,uVar4,iVar3 + 4);
    _SfSetMetricBinary_16(DAT_005bba88,uVar4,iVar3,4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}


