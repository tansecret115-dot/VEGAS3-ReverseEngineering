/* Module: erv13260.dll
   Function: FUN_63602fb0
   Address: 63602fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63602fb0(char *param_1,undefined4 param_2,char *param_3,uint *param_4,undefined4 param_5,
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
  uVar2 = sprintf(param_3,s__s32_d_d_dll_63606c80,param_1,param_5,param_6);
  *param_4 = uVar2;
  return;
}


