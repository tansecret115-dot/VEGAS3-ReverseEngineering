/* Module: pngu3266.dll
   Function: operator_struct_tagRECT
   Address: 605f15bf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNxRect::operator struct tagRECT(void) */

tagRECT * __thiscall
CPNxRect::operator_struct_tagRECT(CPNxRect *this,tagRECT *__return_storage_ptr__)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  
                    /* 0x15bf  598  ??BCPNxRect@@QAE?AUtagRECT@@XZ
                       0x15bf  599  ??BCPNxRect@@QBE?AUtagRECT@@XZ */
  LVar1 = *(LONG *)(this + 4);
  LVar2 = *(LONG *)(this + 8);
  LVar3 = *(LONG *)(this + 0xc);
  __return_storage_ptr__->left = *(LONG *)this;
  __return_storage_ptr__->top = LVar1;
  __return_storage_ptr__->right = LVar2;
  __return_storage_ptr__->bottom = LVar3;
  return __return_storage_ptr__;
}


