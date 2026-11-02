/* Module: pncrt.dll
   Function: puts
   Address: 78027750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl puts(char *_Str)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
                    /* 0x27750  683  puts */
  iVar5 = -1;
  FUN_780094e0(1,0x7803f818);
  iVar2 = FUN_7800e8c0(&DAT_7803f818);
  uVar4 = 0xffffffff;
  pcVar6 = _Str;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_780274d0(_Str,1,~uVar4 - 1,(FILE *)&DAT_7803f818);
  if (uVar3 == ~uVar4 - 1) {
    DAT_7803f81c = DAT_7803f81c + -1;
    if (DAT_7803f81c < 0) {
      _flsbuf(10,(FILE *)&DAT_7803f818);
    }
    else {
      *DAT_7803f818 = 10;
      DAT_7803f818 = DAT_7803f818 + 1;
    }
    iVar5 = 0;
  }
  FUN_7800e970(iVar2,(int *)&DAT_7803f818);
  FUN_78009550(1,0x7803f818);
  return iVar5;
}


