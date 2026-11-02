/* Module: vegas30k.dll
   Function: _SfVfxView_ShowPropPage@4
   Address: 01026bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVfxView_ShowPropPage_4(int param_1)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x26bc0  1248  _SfVfxView_ShowPropPage@4 */
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) {
    local_4 = *(undefined4 *)(param_1 + 0x34);
    local_10 = 0;
    local_c = 0;
    local_8 = *(undefined4 *)(param_1 + 0x30);
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_10);
    *(undefined4 *)(param_1 + 0x24) = 1;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),1);
  }
  return;
}


