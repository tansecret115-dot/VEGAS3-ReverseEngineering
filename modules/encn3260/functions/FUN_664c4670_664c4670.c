/* Module: encn3260.dll
   Function: FUN_664c4670
   Address: 664c4670
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664c4670(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[3] != 0) {
    iVar2 = param_1[4];
    param_1[3] = 0;
    param_1[4] = -1;
    return iVar2;
  }
  uVar3 = param_1[2];
  if ((uVar3 < (uint)param_1[1]) && (cVar1 = *(char *)(*param_1 + uVar3), cVar1 != -1)) {
    param_1[2] = uVar3 + 1;
    return (int)cVar1;
  }
  return -1;
}


