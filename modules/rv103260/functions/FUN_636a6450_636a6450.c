/* Module: rv103260.dll
   Function: FUN_636a6450
   Address: 636a6450
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_636a6450(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    FUN_636a63c0(this,0,(undefined4 *)0x0);
    return this;
  }
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_636a63c0(this,~uVar2 - 1,(undefined4 *)param_1);
  return this;
}


