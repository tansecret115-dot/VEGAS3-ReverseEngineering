/* Module: pncrt.dll
   Function: scanf
   Address: 78027880
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl scanf(char *_Format,...)

{
  int iVar1;
  
                    /* 0x27880  693  scanf */
  FUN_780094e0(0,0x7803f7f8);
  iVar1 = FUN_78029600((FILE *)&_iob,(byte *)_Format,(undefined4 *)&stack0x00000008);
  FUN_78009550(0,0x7803f7f8);
  return iVar1;
}


