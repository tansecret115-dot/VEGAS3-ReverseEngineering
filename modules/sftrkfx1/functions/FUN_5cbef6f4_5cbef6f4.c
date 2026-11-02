/* Module: sftrkfx1.dll
   Function: FUN_5cbef6f4
   Address: 5cbef6f4
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cbef6f4(void)

{
  uint uVar1;
  int iVar2;
  uint in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  OLECHAR local_160 [40];
  BYTE local_110 [260];
  HKEY local_c;
  HKEY local_8;
  
  StringFromGUID2((GUID *)&stack0x00000004,local_160,0x27);
  wsprintfA((LPSTR)local_110,"CLSID\\%ls",local_160);
  uVar1 = RegCreateKeyA((HKEY)0x80000000,(LPCSTR)local_110,&local_8);
  if (uVar1 == 0) {
    wsprintfA((LPSTR)local_110,"%ls",in_stack_00000014);
    in_stack_00000014 = RegSetValueA(local_8,(LPCSTR)0x0,1,(LPCSTR)local_110,0x104);
    if (in_stack_00000014 == 0) {
      wsprintfA((LPSTR)local_110,"%ls",in_stack_00000020);
      uVar1 = RegCreateKeyA(local_8,(LPCSTR)local_110,&local_c);
      if (uVar1 == 0) {
        wsprintfA((LPSTR)local_110,"%ls",in_stack_00000018);
        iVar2 = lstrlenA((LPCSTR)local_110);
        in_stack_00000014 = RegSetValueA(local_c,(LPCSTR)0x0,1,(LPCSTR)local_110,iVar2 + 1);
        if (in_stack_00000014 == 0) {
          wsprintfA((LPSTR)local_110,"%ls",in_stack_0000001c);
          iVar2 = lstrlenA((LPCSTR)local_110);
          uVar1 = RegSetValueExA(local_c,"ThreadingModel",0,1,local_110,iVar2 + 1);
          RegCloseKey(local_8);
          RegCloseKey(local_c);
          return -(uint)(uVar1 != 0) & (uVar1 & 0xffff | 0x80070000);
        }
        RegCloseKey(local_8);
        RegCloseKey(local_c);
        uVar1 = in_stack_00000014;
      }
      else {
        RegCloseKey(local_8);
      }
    }
    else {
      RegCloseKey(local_8);
      uVar1 = in_stack_00000014;
    }
  }
  return uVar1 & 0xffff | 0x80070000;
}


