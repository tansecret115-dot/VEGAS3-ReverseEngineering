/* Module: pncrt.dll
   Function: fputs
   Address: 78026cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fputs(char *_Str,FILE *_File)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
                    /* 0x26cb0  612  fputs */
  uVar4 = 0xffffffff;
  pcVar5 = _Str;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_780094a0((uint)_File);
  iVar2 = FUN_7800e8c0(&_File->_ptr);
  uVar3 = FUN_780274d0(_Str,1,~uVar4 - 1,_File);
  FUN_7800e970(iVar2,(int *)_File);
  FUN_78009510((uint)_File);
  return -(uint)(uVar3 != ~uVar4 - 1);
}


