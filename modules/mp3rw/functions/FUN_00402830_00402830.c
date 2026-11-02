/* Module: mp3rw.dll
   Function: FUN_00402830
   Address: 00402830
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00402830(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)((int)this + 0x144);
  if (((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != 0)) && (iVar4 = 0, 0 < iVar1)) {
    piVar3 = (int *)piVar3[2];
    do {
      iVar2 = *piVar3;
      if ((param_1 == *(int *)(iVar2 + 0x20c)) && (param_2 == *(int *)(iVar2 + 0x210))) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}


