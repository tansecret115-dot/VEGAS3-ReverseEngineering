/* Module: InstMsi-x86a.exe
   Function: FUN_01001e91
   Address: 01001e91
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01001e91(void)

{
  LSTATUS LVar1;
  UINT UVar2;
  int iVar3;
  undefined4 *puVar4;
  BYTE local_348 [568];
  CHAR local_110;
  undefined4 local_10f;
  DWORD local_c;
  HKEY local_8;
  
  if (DAT_0100a300 != '\0') {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Microsoft_Windows_Curre_0100a0d8,0,0x2001f,
                          &local_8);
    if (LVar1 == 0) {
      local_c = 0x238;
      LVar1 = RegQueryValueExA(local_8,&DAT_0100a300,(LPDWORD)0x0,(LPDWORD)0x0,local_348,&local_c);
      if (LVar1 == 0) {
        local_110 = DAT_010012c4;
        puVar4 = &local_10f;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined2 *)puVar4 = 0;
        *(undefined1 *)((int)puVar4 + 2) = 0;
        UVar2 = GetSystemDirectoryA(&local_110,0x104);
        if (UVar2 != 0) {
          FUN_01005a4d(&local_110,"");
        }
        wsprintfA((LPSTR)local_348,s_rundll32_exe__sadvpack_dll_DelNo_0100a1d8,&local_110,
                  &DAT_0100ae84);
        iVar3 = lstrlenA((LPCSTR)local_348);
        RegSetValueExA(local_8,&DAT_0100a300,0,1,local_348,iVar3 + 1);
      }
      RegCloseKey(local_8);
    }
  }
  return;
}


