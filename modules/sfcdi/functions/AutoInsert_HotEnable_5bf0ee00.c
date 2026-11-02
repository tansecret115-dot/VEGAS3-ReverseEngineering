/* Module: sfcdi.dll
   Function: AutoInsert_HotEnable
   Address: 5bf0ee00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall AutoInsert_HotEnable(int) */

int AutoInsert_HotEnable(int param_1)

{
  int iVar1;
  
                    /* 0xee00  4  ?AutoInsert_HotEnable@@YGHH@Z */
  iVar1 = AutoInsert_IsHotAvailable();
  if (iVar1 == 0) {
    return param_1;
  }
  if (param_1 != 0) {
    iVar1 = (*DAT_5bf65fd4)();
    return iVar1;
  }
  iVar1 = (*DAT_5bf65fd0)();
  return iVar1;
}


