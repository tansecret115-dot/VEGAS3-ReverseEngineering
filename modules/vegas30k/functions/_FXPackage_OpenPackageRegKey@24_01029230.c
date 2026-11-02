/* Module: vegas30k.dll
   Function: _FXPackage_OpenPackageRegKey@24
   Address: 01029230
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _FXPackage_OpenPackageRegKey_24(void)

{
  LSTATUS LVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined4 *puVar5;
  PHKEY in_stack_00000014;
  int in_stack_00000018;
  uchar local_700 [255];
  undefined1 local_601;
  OLECHAR local_600 [256];
  uchar local_400 [41];
  undefined4 local_3d7;
  
  puVar3 = (uchar *)"Software\\DirectShow\\Presets\\FX Packages\\";
  puVar4 = local_400;
                    /* 0x29230  644  _FXPackage_OpenPackageRegKey@24 */
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    puVar3 = puVar3 + 4;
    puVar4 = puVar4 + 4;
  }
  *puVar4 = *puVar3;
  puVar5 = &local_3d7;
  for (iVar2 = 0xf5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  StringFromGUID2((GUID *)&stack0x00000004,local_600,0x200);
  if ((&stack0x00000000 == (undefined1 *)0x600) || (local_600[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_600,-1,(LPSTR)local_700,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x700) {
    local_700[0] = '\0';
  }
  local_601 = 0;
  _mbscat(local_400,local_700);
  if (in_stack_00000018 != 0) {
    LVar1 = RegCreateKeyA((HKEY)&DAT_80000001,(LPCSTR)local_400,in_stack_00000014);
    return LVar1 != 0;
  }
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000001,(LPCSTR)local_400,0,0x2001f,in_stack_00000014);
  return LVar1 != 0;
}


