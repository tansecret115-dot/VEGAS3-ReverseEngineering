/* Module: sfcdi.dll
   Function: FUN_5bf0da50
   Address: 5bf0da50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0da50(LPCSTR param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  HANDLE hObject;
  uint *puVar2;
  
  hObject = CreateFileA(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return 0x8004e006;
  }
  while (puVar1 = param_2, 0x164 < param_3) {
    puVar2 = puVar1 + 0x59;
    param_2 = (uint *)((int)puVar2 + puVar1[0x58]);
    param_3 = param_3 + (-0x164 - puVar1[0x58]);
    if (*puVar1 == 0) {
      FUN_5bf0d940(hObject,(int)puVar2);
    }
    else if (*puVar1 < 4) {
      FUN_5bf0d9a0(hObject,(int *)puVar1,(undefined1 *)puVar2);
    }
  }
  CloseHandle(hObject);
  return 0;
}


