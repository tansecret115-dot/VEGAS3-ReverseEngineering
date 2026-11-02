/* Module: vidcap30.exe
   Function: FUN_0049a0d0
   Address: 0049a0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_0049a0d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  int unaff_EBP;
  undefined *puStack_14;
  int *piStack_10;
  int local_4;
  
  local_4 = 0;
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x18) + 0x20) + 8);
  piStack_10 = &local_4;
  puStack_14 = &DAT_005a5b38;
  iVar3 = (**(code **)*puVar1)(puVar1);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*piStack_10 + 0x78))(piStack_10);
    if (-1 < iVar3) {
      sVar4 = wcslen((wchar_t *)&puStack_14);
      piVar2 = piStack_10;
      if ((int)(sVar4 + 1) <= unaff_EBP) {
        unaff_EBP = sVar4 + 1;
      }
      if ((&puStack_14 == (undefined **)0x0) || ((short)puStack_14 != 0)) {
        WideCharToMultiByte(0,0,(LPCWSTR)&puStack_14,-1,(LPSTR)piStack_10,unaff_EBP,(LPCSTR)0x0,
                            (LPBOOL)0x0);
      }
      else if (piStack_10 != (int *)0x0) {
        *(undefined1 *)piStack_10 = 0;
      }
      *(undefined1 *)(unaff_EBP + -1 + (int)piVar2) = 0;
      Ordinal_6(&puStack_14);
      if (&puStack_14 != (undefined **)0x0) {
        (**(code **)(puStack_14 + 8))(&puStack_14);
      }
    }
  }
  return iVar3;
}


