/* Module: vegas30k.dll
   Function: _SfZipEnum_Create@8
   Address: 01018e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfZipEnum_Create_8(int param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  int *piVar1;
  
                    /* 0x18e50  1306  _SfZipEnum_Create@8 */
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 0;
    hMem = GlobalAlloc(0x42,0x10);
    piVar1 = GlobalLock(hMem);
    if (piVar1 != (int *)0x0) {
      FUN_01018da0(param_1);
      *piVar1 = param_1;
      piVar1[1] = -1;
      piVar1[2] = 0;
      piVar1[3] = *(int *)(param_1 + 0x24);
      *param_2 = piVar1;
      return (undefined1 *)0x0;
    }
    return (undefined1 *)0x8007000e;
  }
  return &DAT_80070057;
}


