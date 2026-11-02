/* Module: sfcdi.dll
   Function: FUN_5bf0c240
   Address: 5bf0c240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0c240(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_3c;
  undefined4 uStack_34;
  CHAR aCStack_22 [34];
  
  puVar2 = &local_3c;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_3c._0_1_ = 0;
  local_3c._2_1_ = *(undefined1 *)(param_1 + 8);
  local_3c._1_1_ = 0;
  iVar1 = (*DAT_5bf631d0)(&local_3c);
  if (iVar1 != 1) {
    return 0x80004005;
  }
  lstrcpynA((LPSTR)(param_2 + 1),(LPCSTR)((int)&uStack_34 + 2),0x10);
  *(undefined1 *)((int)param_2 + 0x13) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  FUN_5bf0c090((uchar *)(param_2 + 1));
  lstrcpynA((LPSTR)(param_2 + 0x11),aCStack_22,0x10);
  *(undefined1 *)((int)param_2 + 0x53) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  FUN_5bf0c090((uchar *)(param_2 + 0x11));
  *param_2 = uStack_34 & 0xff;
  return 0;
}


