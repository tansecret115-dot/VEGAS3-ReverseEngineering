/* Module: vegas30k.dll
   Function: Init
   Address: 010666e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall A_Buffer::Init(void) */

void __thiscall A_Buffer::Init(A_Buffer *this)

{
  int iVar1;
  
                    /* 0x666e0  116  ?Init@A_Buffer@@QAEXXZ */
  BuildSubPixelMaskTable(this);
  PreAllocateListItems(this);
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = 0;
    this = this + 4;
  }
  return;
}


