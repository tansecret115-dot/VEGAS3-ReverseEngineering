/* Module: mp3rw.dll
   Function: FUN_00417e30
   Address: 00417e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00417e30(char *param_1,undefined4 *param_2)

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
    uVar3 = FUN_00418e20(*param_1);
    if ((char)uVar3 != -1) {
      FUN_00417ce0(uVar3 & 0xff,uVar4,5,(int)param_2);
      uVar4 = uVar4 + 5;
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}


