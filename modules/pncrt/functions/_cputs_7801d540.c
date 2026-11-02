/* Module: pncrt.dll
   Function: _cputs
   Address: 7801d540
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _cputs(char *_Str)

{
  char cVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  DWORD local_4;
  
                    /* 0x1d540  196  _cputs */
  iVar4 = 0;
  _lock(8);
  if (DAT_78040944 == (HANDLE)0xfffffffe) {
    FUN_7801f980();
  }
  if (DAT_78040944 != (HANDLE)0xffffffff) {
    uVar3 = 0xffffffff;
    pcVar5 = _Str;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    BVar2 = WriteConsoleA(DAT_78040944,_Str,~uVar3 - 1,&local_4,(LPVOID)0x0);
    if (BVar2 != 0) goto LAB_7801d592;
  }
  iVar4 = -1;
LAB_7801d592:
  _unlock(8);
  return iVar4;
}


