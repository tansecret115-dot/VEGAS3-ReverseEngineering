/* Module: mcplugrw.dll
   Function: FUN_00404b40
   Address: 00404b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404b40(uchar *param_1)

{
  int iVar1;
  uchar *puVar2;
  uchar local_100 [255];
  undefined1 local_1;
  
  for (puVar2 = param_1; (*puVar2 == ' ' || (*puVar2 == '\t')); puVar2 = puVar2 + 1) {
  }
  lstrcpynA((LPSTR)local_100,(LPCSTR)puVar2,0x100);
  local_1 = 0;
  iVar1 = lstrlenA((LPCSTR)local_100);
  if (iVar1 != 0) {
    for (puVar2 = local_100 + iVar1 + -1; (*puVar2 == ' ' || (*puVar2 == '\t'));
        puVar2 = puVar2 + -1) {
    }
    puVar2[1] = '\0';
  }
  _mbscpy(param_1,local_100);
  lstrlenA((LPCSTR)local_100);
  return;
}


