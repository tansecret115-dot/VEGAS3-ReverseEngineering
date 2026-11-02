/* Module: Setup.exe
   Function: _SfFixWindowPlacement@4
   Address: 0041b6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfFixWindowPlacement_4(int param_1)

{
  int iVar1;
  
                    /* 0x1b6d0  129  _SfFixWindowPlacement@4 */
  if (*(int *)(param_1 + 8) == 2) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  iVar1 = _SfIsWindowCaptionVisible_4((undefined4 *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    _SfForceRectOntoDesktop_12((LPRECT)(param_1 + 0x1c),0,0);
  }
  return;
}


