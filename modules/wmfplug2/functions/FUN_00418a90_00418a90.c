/* Module: wmfplug2.dll
   Function: FUN_00418a90
   Address: 00418a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418a90(HANDLE param_1,char *param_2,LPDWORD param_3)

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


