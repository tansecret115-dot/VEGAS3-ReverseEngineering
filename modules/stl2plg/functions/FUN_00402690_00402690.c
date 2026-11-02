/* Module: stl2plg.dll
   Function: FUN_00402690
   Address: 00402690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00402690(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL hMem;
  int *piVar3;
  uint uVar4;
  
  FUN_00402650((int)this);
  if (param_1[4] == 3) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = param_1[8] << 2;
  }
  hMem = GlobalAlloc(0x42,*param_1 + iVar2);
  piVar3 = GlobalLock(hMem);
  *(int **)((int)this + 8) = piVar3;
  if (piVar3 != (int *)0x0) {
    if (param_1[4] == 3) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = param_1[8] << 2;
    }
    iVar1 = *param_1;
    for (uVar4 = (uint)(iVar1 + iVar2) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar3 = *param_1;
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 1;
    }
    for (uVar4 = iVar1 + iVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)piVar3 = (char)*param_1;
      param_1 = (int *)((int)param_1 + 1);
      piVar3 = (int *)((int)piVar3 + 1);
    }
    return 0;
  }
  return 0x8007000e;
}


