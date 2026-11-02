/* Module: vegas30k.dll
   Function: FUN_01136a00
   Address: 01136a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01136a00(int param_1,wchar_t *param_2)

{
  int *piVar1;
  bool bVar2;
  size_t sVar3;
  LPCSTR lpString2;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  CHAR local_500 [255];
  undefined1 local_401;
  undefined1 local_400 [512];
  wchar_t awStack_200 [256];
  
  if ((param_2 == (wchar_t *)0x0) || (sVar3 = wcslen(param_2), sVar3 == 0)) {
    return 1;
  }
  if (*param_2 == L'\0') {
    if (&stack0x00000000 != (undefined1 *)0x500) {
      local_500[0] = '\0';
    }
  }
  else {
    WideCharToMultiByte(0,0,param_2,-1,local_500,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  local_401 = 0;
  lpString2 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8);
  iVar4 = lstrcmpA(local_500,lpString2);
  if (iVar4 != 0) {
    piVar1 = *(int **)(param_1 + 0x2c);
    if (piVar1 != (int *)0x0) {
      iVar7 = 0;
      iVar4 = (**(code **)(*piVar1 + 0x10))(piVar1,0,local_400);
      if (iVar4 == 0) {
        do {
          iVar7 = iVar7 + 1;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
                            (*(int **)(param_1 + 0x2c),iVar7,local_400);
        } while (iVar4 == 0);
        if (iVar7 != 0) {
          bVar2 = false;
          iVar4 = 0;
          if (0 < iVar7) {
            do {
              if (bVar2) {
                return 0x80070005;
              }
              iVar5 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
                                (*(int **)(param_1 + 0x2c),iVar4,awStack_200);
              if ((iVar5 == 0) && (iVar5 = wcscmp(param_2,awStack_200), iVar5 == 0)) {
                bVar2 = true;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar7);
            if (bVar2) {
              return 0x80070005;
            }
          }
        }
      }
    }
    uVar6 = _SfDSFilter_DeletePreset_12(*(undefined4 *)(param_1 + 0x30),local_500);
    return uVar6;
  }
  return 0x80070005;
}


