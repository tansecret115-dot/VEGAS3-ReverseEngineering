/* Module: encn3260.dll
   Function: FUN_664d0910
   Address: 664d0910
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664d0910(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = operator_new(uVar4);
  pcVar6 = pcVar2;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *param_1;
    param_1 = param_1 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(undefined4 *)this = 1;
  puVar3 = FUN_664d0980(pcVar2,this);
  *(undefined4 **)((int)this + 4) = puVar3;
  operator_delete(pcVar2);
  return this;
}


