/* Module: sfppack2.dll
   Function: FUN_5cd498f0
   Address: 5cd498f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd498f0(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  *param_2 = 0;
  uVar4 = 6;
  param_2[1] = 0;
  param_2[2] = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    uVar3 = FUN_5cd4a8e0(*param_1);
    if ((char)uVar3 != -1) {
      FUN_5cd497a0(uVar3 & 0xff,uVar4,5,(int)param_2);
      uVar4 = uVar4 + 5;
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}


