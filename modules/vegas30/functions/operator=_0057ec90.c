/* Module: vegas30.exe
   Function: operator=
   Address: 0057ec90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class A_Buffer & __thiscall A_Buffer::operator=(class A_Buffer const &) */

A_Buffer * __thiscall A_Buffer::operator=(A_Buffer *this,A_Buffer *param_1)

{
  int iVar1;
  A_Buffer *pAVar2;
  
                    /* 0x17ec90  4  ??4A_Buffer@@QAEAAV0@ABV0@@Z */
  pAVar2 = this;
  for (iVar1 = 0x4db4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pAVar2 = pAVar2 + 4;
  }
  return this;
}


