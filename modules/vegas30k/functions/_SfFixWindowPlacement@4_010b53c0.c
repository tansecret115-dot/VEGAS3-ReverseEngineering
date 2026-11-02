/* Module: vegas30k.dll
   Function: _SfFixWindowPlacement@4
   Address: 010b53c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfFixWindowPlacement_4(int param_1)

{
  int iVar1;
  
                    /* 0xb53c0  932  _SfFixWindowPlacement@4 */
  if (*(int *)(param_1 + 8) == 2) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  iVar1 = _SfIsWindowCaptionVisible_4(param_1 + 0x1c);
  if (iVar1 == 0) {
    _SfForceRectOntoDesktop_12(param_1 + 0x1c,0,0);
  }
  return;
}


