/* Module: vidcap30.exe
   Function: FUN_0042bbb0
   Address: 0042bbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 * FUN_0042bbb0(UINT_PTR *param_1,int param_2)

{
  HMENU hMenu;
  int *piVar1;
  UINT_PTR *pUVar2;
  undefined1 *puVar3;
  int unaff_ESI;
  LPCSTR unaff_retaddr;
  undefined *puStack_14;
  undefined1 *puStack_10;
  HMENU local_c;
  int *local_8;
  UINT_PTR *local_4;
  
  puStack_10 = (undefined1 *)&local_c;
  puStack_14 = &DAT_005a5af8;
  local_c = (HMENU)0x0;
  local_8 = (int *)0x0;
  local_4 = (UINT_PTR *)0x0;
  puVar3 = (undefined1 *)(**(code **)*param_1)();
  if (puVar3 == (undefined1 *)0x0) {
    puStack_10 = (undefined1 *)(**(code **)(*param_1 + 0xc))(param_1);
    piVar1 = local_8;
    hMenu = local_c;
    if ((puStack_10 == (undefined1 *)0x0) && (unaff_ESI != 0)) {
      if (*local_8 == 0) {
        AppendMenuA(local_c,0x800,0,(LPCSTR)0x0);
        *piVar1 = 1;
      }
      pUVar2 = local_4;
      AppendMenuA(hMenu,(uint)(param_2 != 0),*local_4,unaff_retaddr);
      *param_1 = *pUVar2;
      *pUVar2 = *pUVar2 + 1;
      CoTaskMemFree(param_1);
    }
    puVar3 = puStack_10;
    (**(code **)(puStack_14 + 8))(&puStack_14);
  }
  return puVar3;
}


