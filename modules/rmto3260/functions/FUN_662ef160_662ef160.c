/* Module: rmto3260.dll
   Function: FUN_662ef160
   Address: 662ef160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662ef160(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
  }
  if (uVar3 == 0) {
    FUN_662eef50(this);
    return this;
  }
  FUN_662ef040(this,uVar3);
  pcVar4 = *(char **)this;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = *param_1;
    param_1 = param_1 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return this;
}


