/* Module: vidcap30.exe
   Function: FUN_0048b8f0
   Address: 0048b8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048b8f0(int param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  wchar_t awStack_434 [2];
  int *local_414;
  wchar_t local_410 [242];
  wchar_t awStack_22c [18];
  undefined1 local_208 [492];
  undefined4 *puStack_1c;
  int *piStack_18;
  
  pwVar1 = wcsrchr(param_2,L'.');
  if (pwVar1 != (wchar_t *)0x0) {
    wcscpy(local_410,pwVar1);
    awStack_434[0] = L'뤭';
    awStack_434[1] = L'H';
    _wcsupr(local_410);
    piVar2 = *(int **)(param_1 + 0x48);
    iVar4 = 0;
    if (0 < *piVar2) {
      do {
        if ((*(int *)(piVar2[2] + iVar4 * 4) != 0) && (iVar3 = FUN_00489040(), -1 < iVar3)) {
          awStack_434[0] = L'\0';
          awStack_434[1] = L'\0';
          iVar3 = (**(code **)(*local_414 + 0x18))(local_414,0,0,local_208);
          if (-1 < iVar3) {
            _wcsupr(awStack_22c);
            pwVar1 = wcsstr(awStack_22c,awStack_434);
            if (pwVar1 != (wchar_t *)0x0) {
              if (puStack_1c == (undefined4 *)0x0) {
                (**(code **)(iRam00000104 + 8))(0x104);
              }
              else {
                *puStack_1c = 0x104;
              }
              if (piStack_18 != (int *)0x0) {
                *piStack_18 = iVar4;
              }
              return 1;
            }
          }
          (**(code **)(iRam00000104 + 8))(0x104);
        }
        piVar2 = *(int **)(param_1 + 0x48);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *piVar2);
    }
  }
  return 0;
}


