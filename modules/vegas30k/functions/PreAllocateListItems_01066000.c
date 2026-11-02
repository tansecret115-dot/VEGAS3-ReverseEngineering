/* Module: vegas30k.dll
   Function: PreAllocateListItems
   Address: 01066000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall A_Buffer::PreAllocateListItems(void) */

void __thiscall A_Buffer::PreAllocateListItems(A_Buffer *this)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0x66000  258  ?PreAllocateListItems@A_Buffer@@AAEXXZ */
  hMem = GlobalAlloc(0x40,0x69780);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)0x0;
  }
  else {
    puVar2 = (undefined4 *)((int)pvVar1 + 0x58);
    iVar3 = 4000;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x1b;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(LPVOID *)(this + 0x126bc) = pvVar1;
  *(undefined4 *)(this + 0x126c0) = 4000;
  *(undefined4 *)(this + 0x126c4) = 0;
  return;
}


