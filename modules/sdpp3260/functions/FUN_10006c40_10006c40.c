/* Module: sdpp3260.dll
   Function: FUN_10006c40
   Address: 10006c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10006c40(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  FUN_100067d0(this);
  if (param_1 == -1) {
    uVar2 = 0xffffffff;
    pcVar3 = *(char **)this;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    param_1 = ~uVar2 - 1;
  }
  *(int *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}


