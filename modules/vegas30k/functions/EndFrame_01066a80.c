/* Module: vegas30k.dll
   Function: EndFrame
   Address: 01066a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall A_Buffer::EndFrame(void) */

void __thiscall A_Buffer::EndFrame(A_Buffer *this)

{
  HGLOBAL pvVar1;
  A_Buffer *pAVar2;
  int iVar3;
  
                    /* 0x66a80  68  ?EndFrame@A_Buffer@@QAEXXZ */
  iVar3 = 0;
  pAVar2 = this;
  do {
    if (((-1 < iVar3) && (iVar3 < *(int *)(this + 0x2240))) && (*(int *)pAVar2 != 0)) {
      DrawScanLine(this,iVar3);
    }
    iVar3 = iVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (iVar3 < 0x800);
  if (*(LPCVOID *)(this + 0x25d8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(this + 0x25d8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(this + 0x25d8));
    GlobalFree(pvVar1);
    *(undefined4 *)(this + 0x25d8) = 0;
  }
  return;
}


