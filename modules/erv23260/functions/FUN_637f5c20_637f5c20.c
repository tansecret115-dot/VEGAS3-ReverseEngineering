/* Module: erv23260.dll
   Function: FUN_637f5c20
   Address: 637f5c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f5c20(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 0x3c);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    piVar2 = (int *)((int)this + 0x44);
    iVar3 = iVar1;
    do {
      iVar4 = iVar4 + piVar2[-1];
      iVar5 = iVar5 + *piVar2;
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + 2;
    } while (iVar3 != 0);
  }
  *param_1 = (iVar4 + -1 + iVar1) / iVar1;
  param_1[1] = (iVar5 + -1 + iVar1) / iVar1;
  return;
}


