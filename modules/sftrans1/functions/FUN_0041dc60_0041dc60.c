/* Module: sftrans1.dll
   Function: FUN_0041dc60
   Address: 0041dc60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0041dc60(int *param_1)

{
  LPCVOID pMem;
  int iVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  
  pMem = (LPCVOID)param_1[0x34e];
  if (pMem != (LPCVOID)0x0) {
    FUN_0053afe0();
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  iVar1 = param_1[0x37];
  while (iVar1 != 0) {
    iVar1 = *(int *)(param_1[0x37] + 4);
    (**(code **)(*param_1 + 0x50))(param_1[0x37]);
    param_1[0x37] = iVar1;
  }
  piVar2 = (int *)param_1[0x34c];
  if (piVar2 != (int *)0x0) {
    param_1[0x34c] = 0;
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return;
}


