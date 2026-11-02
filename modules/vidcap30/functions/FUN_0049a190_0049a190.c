/* Module: vidcap30.exe
   Function: FUN_0049a190
   Address: 0049a190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_0049a190(int param_1)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  undefined *cbMultiByte;
  undefined **ppuStack_1c;
  int *piStack_18;
  undefined *puStack_14;
  int *piStack_10;
  int local_4;
  
  local_4 = 0;
  piStack_18 = *(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x20) + 8);
  piStack_10 = &local_4;
  puStack_14 = &DAT_005a5b38;
  ppuStack_1c = (undefined **)0x49a1b4;
  iVar2 = (**(code **)*piStack_18)();
  if (-1 < iVar2) {
    ppuStack_1c = &puStack_14;
    (**(code **)(*piStack_10 + 0x78))(piStack_10);
    iVar2 = (**(code **)(*piStack_18 + 0x74))(piStack_18);
    if (-1 < iVar2) {
      sVar3 = wcslen((wchar_t *)&ppuStack_1c);
      piVar1 = piStack_18;
      cbMultiByte = puStack_14;
      if ((int)(sVar3 + 1) <= (int)puStack_14) {
        cbMultiByte = (undefined *)(sVar3 + 1);
      }
      if ((&ppuStack_1c == (undefined ***)0x0) || ((short)ppuStack_1c != 0)) {
        WideCharToMultiByte(0,0,(LPCWSTR)&ppuStack_1c,-1,(LPSTR)piStack_18,(int)cbMultiByte,
                            (LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (piStack_18 != (int *)0x0) {
        *(undefined1 *)piStack_18 = 0;
      }
      (cbMultiByte + -1)[(int)piVar1] = 0;
      Ordinal_6(&ppuStack_1c);
      if (&ppuStack_1c != (undefined ***)0x0) {
        (*(code *)ppuStack_1c[2])(&ppuStack_1c);
      }
    }
  }
  return iVar2;
}


