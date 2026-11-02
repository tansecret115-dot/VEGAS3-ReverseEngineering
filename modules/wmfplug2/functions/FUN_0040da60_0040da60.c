/* Module: wmfplug2.dll
   Function: FUN_0040da60
   Address: 0040da60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040da60(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  iVar1 = **(int **)((int)this + 0x22c);
  if (0 < iVar1) {
    piVar3 = (int *)(*(int **)((int)this + 0x22c))[2];
    do {
      if (param_1 == *piVar3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return -1;
}


