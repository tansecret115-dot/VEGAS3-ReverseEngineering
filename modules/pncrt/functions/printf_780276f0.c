/* Module: pncrt.dll
   Function: printf
   Address: 780276f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl printf(char *_Format,...)

{
  int iVar1;
  int iVar2;
  
                    /* 0x276f0  680  printf */
  FUN_780094e0(1,0x7803f818);
  iVar1 = FUN_7800e8c0(&DAT_7803f818);
  iVar2 = FUN_7800e9b0((FILE *)&DAT_7803f818,_Format,(undefined4 *)&stack0x00000008);
  FUN_7800e970(iVar1,&DAT_7803f818);
  FUN_78009550(1,0x7803f818);
  return iVar2;
}


