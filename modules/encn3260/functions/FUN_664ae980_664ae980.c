/* Module: encn3260.dll
   Function: FUN_664ae980
   Address: 664ae980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ae980(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664df2b8;
  param_1[1] = &PTR_LAB_664df280;
  if ((HGDIOBJ)param_1[0x15] != (HGDIOBJ)0x0) {
    SelectObject((HDC)param_1[0x14],(HGDIOBJ)param_1[0x15]);
    param_1[0x15] = 0;
  }
  if ((HPALETTE)param_1[0x17] != (HPALETTE)0x0) {
    SelectPalette((HDC)param_1[0x12],(HPALETTE)param_1[0x17],0);
    param_1[0x17] = 0;
  }
  if ((HGDIOBJ)param_1[0x1e] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  if ((HGDIOBJ)param_1[0x1f] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  if ((HGDIOBJ)param_1[0x16] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x16]);
    param_1[0x16] = 0;
  }
  if ((HGDIOBJ)param_1[0x18] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x18]);
    param_1[0x18] = 0;
  }
  if ((HDC)param_1[0x14] != (HDC)0x0) {
    DeleteDC((HDC)param_1[0x14]);
    param_1[0x14] = 0;
  }
  if ((void *)param_1[0x1c] != (void *)0x0) {
    operator_delete((void *)param_1[0x1c]);
    param_1[0x1c] = 0;
  }
  if ((DAT_664f1d48 != (code *)0x0) && (param_1[0x1b] != 0)) {
    (*DAT_664f1d48)(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  FUN_664bb3e0(param_1 + 0x21);
  FUN_664b6e40(param_1);
  return;
}


