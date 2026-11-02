/* Module: rmme3260.dll
   Function: FUN_662665e0
   Address: 662665e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 __cdecl
FUN_662665e0(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            char *param_6,char *param_7)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char local_14 [16];
  
  FUN_662664b0(param_1,param_2,param_3,param_4,param_5,param_6,(int)local_14);
  iVar3 = 0x10;
  pcVar4 = local_14;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    cVar2 = *param_7;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_7 = param_7 + 1;
  } while (cVar1 == cVar2);
  return 0;
}


