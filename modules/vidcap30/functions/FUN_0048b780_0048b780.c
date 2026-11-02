/* Module: vidcap30.exe
   Function: FUN_0048b780
   Address: 0048b780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048b780(int param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  size_t sVar2;
  int *piVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puStack_434;
  undefined4 uStack_430;
  int iStack_42c;
  int *local_414;
  wchar_t local_410 [260];
  undefined1 local_208 [492];
  undefined4 *puStack_1c;
  int *piStack_18;
  
  wVar1 = *param_2;
  if (wVar1 != L'\\') {
    uVar6 = 0;
    if (wVar1 != L'\0') {
      pwVar5 = local_410;
      do {
        if (wVar1 == L':') break;
        *pwVar5 = wVar1;
        uVar6 = uVar6 + 1;
        pwVar5 = pwVar5 + 1;
        if (0x103 < uVar6) {
          return 0;
        }
        wVar1 = param_2[1];
        param_2 = param_2 + 1;
      } while (wVar1 != L'\0');
    }
    local_410[uVar6] = L'\0';
    iStack_42c = 0x48b7e2;
    sVar2 = wcslen(local_410);
    if (2 < sVar2) {
      iStack_42c = 0x48b7fb;
      _wcsupr(local_410);
      piVar3 = *(int **)(param_1 + 0x48);
      iVar7 = 0;
      if (0 < *piVar3) {
        do {
          iStack_42c = *(int *)(piVar3[2] + iVar7 * 4);
          if (iStack_42c != 0) {
            uStack_430 = 0x48b825;
            iVar4 = FUN_00489040();
            if (-1 < iVar4) {
              iStack_42c = 0;
              puStack_434 = local_208;
              uStack_430 = 0x104;
              iVar4 = (**(code **)(*local_414 + 0x18))(local_414,0,0,0);
              if (-1 < iVar4) {
                _wcsupr(local_410 + 0xf2);
                pwVar5 = wcsstr(local_410 + 0xf2,(wchar_t *)&puStack_434);
                if (pwVar5 != (wchar_t *)0x0) {
                  if (puStack_1c == (undefined4 *)0x0) {
                    (**(code **)(iRam00000000 + 8))(0);
                  }
                  else {
                    *puStack_1c = 0;
                  }
                  if (piStack_18 != (int *)0x0) {
                    *piStack_18 = iVar7;
                  }
                  return 1;
                }
              }
              (**(code **)(iRam00000000 + 8))(0);
            }
          }
          piVar3 = *(int **)(param_1 + 0x48);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *piVar3);
      }
    }
  }
  return 0;
}


