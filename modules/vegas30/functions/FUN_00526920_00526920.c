/* Module: vegas30.exe
   Function: FUN_00526920
   Address: 00526920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00526920(int param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPCVOID unaff_ESI;
  
  iVar1 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 300) + 0x34))(*(int **)(param_1 + 300),&param_1);
  if (-1 < iVar2) {
    iVar2 = FUN_0052b220(unaff_ESI,iVar1 + 0x84,1);
    pvVar3 = GlobalHandle(unaff_ESI);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(unaff_ESI);
    GlobalFree(pvVar3);
    FUN_005249d0(iVar1);
    FUN_00524880(iVar1);
  }
  return iVar2;
}


