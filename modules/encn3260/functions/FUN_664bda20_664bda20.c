/* Module: encn3260.dll
   Function: FUN_664bda20
   Address: 664bda20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664bda20(void *this,char *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_10 [3];
  
  (**(code **)(*(int *)this + 0xc))(local_10);
  uVar2 = 0xffffffff;
  do {
    pcVar4 = local_10[0];
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = local_10[0] + 1;
    cVar1 = *local_10[0];
    local_10[0] = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *param_2 = ~uVar2 - 1;
  FUN_664bb3e0((int *)local_10);
  return;
}


