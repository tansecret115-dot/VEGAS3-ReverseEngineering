/* Module: rmto3260.dll
   Function: FUN_662f3080
   Address: 662f3080
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_662f3080(char *param_1,undefined4 param_2,char *param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  *param_3 = '\0';
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (*param_4 < ~uVar2 + 0x1f) {
    *param_4 = 0;
    return;
  }
  uVar2 = sprintf(param_3,s__s32_d_d_dll_6630b50c,param_1,param_5,param_6);
  *param_4 = uVar2;
  return;
}


