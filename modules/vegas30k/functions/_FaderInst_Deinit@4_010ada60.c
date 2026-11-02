/* Module: vegas30k.dll
   Function: _FaderInst_Deinit@4
   Address: 010ada60
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_Deinit_4(int param_1)

{
                    /* 0xada60  651  _FaderInst_Deinit@4 */
  if (*(HGDIOBJ *)(param_1 + 0x10c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x10c));
  }
  if (*(HGDIOBJ *)(param_1 + 0x110) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x110));
  }
  DAT_0128e8f8 = DAT_0128e8f8 + -1;
  if (DAT_0128e8f8 == 0) {
    DeleteDC(DAT_0128e92c);
  }
  return;
}


