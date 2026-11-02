/* Module: vegas30k.dll
   Function: GetIntersectStructure
   Address: 01065d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: class CScanlineIntersect * __thiscall A_Buffer::GetIntersectStructure(void) */

CScanlineIntersect * __thiscall A_Buffer::GetIntersectStructure(A_Buffer *this)

{
  int iVar1;
  
                    /* 0x65d10  95  ?GetIntersectStructure@A_Buffer@@AAEPAVCScanlineIntersect@@XZ */
  if (*(int *)(this + 0x126c0) <= *(int *)(this + 0x126c4)) {
    *(undefined4 *)(this + 0x126c4) = 0;
  }
  *(undefined4 *)(*(int *)(this + 0x126bc) + 0x58 + *(int *)(this + 0x126c4) * 0x6c) = 0;
  iVar1 = *(int *)(this + 0x126c4);
  *(int *)(this + 0x126c4) = iVar1 + 1;
  return (CScanlineIntersect *)(*(int *)(this + 0x126bc) + iVar1 * 0x6c);
}


