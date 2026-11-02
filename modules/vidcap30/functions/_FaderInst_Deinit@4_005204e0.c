/* Module: vidcap30.exe
   Function: _FaderInst_Deinit@4
   Address: 005204e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_Deinit_4(int param_1)

{
                    /* 0x1204e0  154  _FaderInst_Deinit@4 */
  if (*(HGDIOBJ *)(param_1 + 0x10c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x10c));
  }
  if (*(HGDIOBJ *)(param_1 + 0x110) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x110));
  }
  DAT_00662408 = DAT_00662408 + -1;
  if (DAT_00662408 == 0) {
    DeleteDC(DAT_0066243c);
  }
  return;
}


