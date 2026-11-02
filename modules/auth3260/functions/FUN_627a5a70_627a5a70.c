/* Module: auth3260.dll
   Function: FUN_627a5a70
   Address: 627a5a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_627a5a70(char *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    *param_2 = 0;
    return 0x80004005;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = FUN_627a5ab0((int)param_1,~uVar3,param_2);
  return uVar2;
}


