/* Module: rv103260.dll
   Function: FUN_636a5a50
   Address: 636a5a50
   Source: Ghidra pseudocode (Stage 10 batch) */


FARPROC __thiscall FUN_636a5a50(void *this,char *param_1)

{
  char cVar1;
  LPCSTR lpProcName;
  FARPROC pFVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*(int *)((int)this + 0xc) == 0) {
    *(undefined4 *)((int)this + 4) = 2;
    FUN_636a5b10(this,s_DLL_not_loaded_636a8318);
    return (FARPROC)0x0;
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  lpProcName = operator_new(~uVar3 + 1);
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = lpProcName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  pFVar2 = GetProcAddress(*(HMODULE *)this,lpProcName);
  if (pFVar2 == (FARPROC)0x0) {
    *(undefined4 *)((int)this + 4) = 2;
    FUN_636a5b10(this,s_Symbol_not_found_636a83ac);
    operator_delete(lpProcName);
    return (FARPROC)0x0;
  }
  operator_delete(lpProcName);
  return pFVar2;
}


