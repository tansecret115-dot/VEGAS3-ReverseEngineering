/* Module: vegas30k.dll
   Function: _SfVfxView_HidePropPage@4
   Address: 01026b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVfxView_HidePropPage_4(int param_1)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x26b80  1247  _SfVfxView_HidePropPage@4 */
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) {
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_10);
  }
  return;
}


