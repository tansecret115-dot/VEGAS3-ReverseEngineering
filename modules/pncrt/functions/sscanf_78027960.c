/* Module: pncrt.dll
   Function: sscanf
   Address: 78027960
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl sscanf(char *_Src,char *_Format,...)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  FILE local_20;
  
                    /* 0x27960  703  sscanf */
  uVar3 = 0xffffffff;
  local_20._base = _Src;
  local_20._ptr = _Src;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *_Src;
    _Src = _Src + 1;
  } while (cVar1 != '\0');
  local_20._cnt = ~uVar3 - 1;
  local_20._flag = 0x49;
  iVar2 = FUN_78029600(&local_20,(byte *)_Format,(undefined4 *)&stack0x0000000c);
  return iVar2;
}


