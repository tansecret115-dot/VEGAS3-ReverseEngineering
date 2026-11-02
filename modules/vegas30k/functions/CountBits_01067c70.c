/* Module: vegas30k.dll
   Function: CountBits
   Address: 01067c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: int __thiscall A_Buffer::CountBits(struct SUBPIXELMASK *) */

int __thiscall A_Buffer::CountBits(A_Buffer *this,SUBPIXELMASK *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x67c70  26  ?CountBits@A_Buffer@@AAEHPAUSUBPIXELMASK@@@Z */
  iVar2 = 0;
  iVar3 = 0x20;
  do {
    uVar1 = *(uint *)param_1;
    param_1 = param_1 + 4;
    iVar3 = iVar3 + -1;
    iVar2 = (uint)(byte)this[(uVar1 & 0xffff) + 0x26bc] + iVar2 +
            (uint)(byte)this[(uVar1 >> 0x10) + 0x26bc];
  } while (iVar3 != 0);
  return iVar2;
}


