/* Module: wmfplug2.dll
   Function: FUN_0040ddf0
   Address: 0040ddf0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0040ddf0(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *unaff_ESI;
  int **ppiStack_18;
  int *piStack_4;
  
  piVar1 = param_1;
  bVar3 = false;
  if (param_1 == (int *)0x0) {
    return false;
  }
  ppiStack_18 = &param_1;
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if ((-1 < iVar2) && (piStack_4 != (int *)0x0)) {
    ppiStack_18 = (int **)0x0;
    iVar2 = (**(code **)(*piStack_4 + 0xc))(piStack_4,&stack0xffffffec,0xc,&ppiStack_18);
    bVar3 = -1 < iVar2 && 0 < (int)piVar1;
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return bVar3;
}


