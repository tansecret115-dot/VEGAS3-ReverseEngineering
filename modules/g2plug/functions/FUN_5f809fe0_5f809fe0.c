/* Module: g2plug.dll
   Function: FUN_5f809fe0
   Address: 5f809fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f809fe0(HANDLE param_1,char *param_2,LPDWORD param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  WriteFile(param_1,param_2,~uVar2 - 1,param_3,(LPOVERLAPPED)0x0);
  return;
}


