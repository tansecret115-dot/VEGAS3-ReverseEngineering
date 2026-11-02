/* Module: mcplugrw.dll
   Function: FUN_00402d60
   Address: 00402d60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00402d60(uint *param_1)

{
  LPCSTR lpString1;
  char *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint unaff_EBX;
  code *pcVar8;
  int iVar9;
  char *pcVar10;
  uint local_10;
  
  pcVar8 = lstrlenA_exref;
  iVar5 = lstrlenA((LPCSTR)param_1);
  local_10 = (uint)(iVar5 == 0);
  iVar5 = lstrlenA((LPCSTR)(param_1 + 0x20));
  if (iVar5 == 0) {
    local_10 = local_10 | 2;
  }
  iVar5 = lstrlenA((LPCSTR)(param_1 + 0x60));
  if (iVar5 == 0) {
    local_10 = local_10 | 8;
  }
  iVar5 = lstrlenA((LPCSTR)(param_1 + 0xa0));
  if (iVar5 == 0) {
    local_10 = local_10 | 0x20;
  }
  lpString1 = (LPCSTR)((int)param_1 + 0x31a);
  iVar5 = lstrcmpA(lpString1,"US");
  if (((iVar5 == 0) || (iVar5 = lstrcmpA(lpString1,"CA"), iVar5 == 0)) &&
     (uVar6 = lstrlenA((LPCSTR)(param_1 + 0xc0)), uVar6 < 2)) {
    local_10 = local_10 | 0x40;
  }
  uVar6 = lstrlenA(lpString1);
  if (uVar6 < 2) {
    local_10 = local_10 | 0x100;
  }
  else {
    iVar5 = lstrlenA(lpString1);
    if (iVar5 == 2) {
      iVar5 = lstrcmpA(lpString1,"US");
      if (iVar5 == 0) {
        iVar5 = lstrlenA((LPCSTR)((int)param_1 + 0x305));
        if ((iVar5 == 5) || (iVar5 == 10)) {
          iVar9 = 0;
          pcVar8 = lstrlenA_exref;
          if (0 < iVar5) {
            do {
              if (iVar9 == 5) {
                if (*(char *)((int)param_1 + 0x30a) != '-') goto LAB_00402e7e;
              }
              else {
                iVar7 = _ismbcdigit((int)((LPCSTR)((int)param_1 + 0x305))[iVar9]);
                if (iVar7 == 0) goto LAB_00402e7e;
              }
              iVar9 = iVar9 + 1;
              pcVar8 = lstrlenA_exref;
            } while (iVar9 < iVar5);
          }
        }
        else {
LAB_00402e7e:
          local_10 = local_10 | 0x80;
          pcVar8 = lstrlenA_exref;
        }
      }
      else {
        iVar5 = lstrcmpA(lpString1,"CA");
        if (iVar5 == 0) {
          iVar5 = lstrlenA((LPCSTR)((int)param_1 + 0x305));
          if (iVar5 == 7) {
            iVar5 = _ismbcalpha((int)*(LPCSTR)((int)param_1 + 0x305));
            if ((((iVar5 == 0) ||
                 (iVar5 = _ismbcalpha((int)*(char *)((int)param_1 + 0x307)), iVar5 == 0)) ||
                ((iVar5 = _ismbcalpha((int)*(char *)((int)param_1 + 0x30a)), iVar5 == 0 ||
                 ((iVar5 = _ismbcdigit((int)*(char *)((int)param_1 + 0x306)), iVar5 == 0 ||
                  (iVar5 = _ismbcdigit((int)*(char *)((int)param_1 + 0x309)), iVar5 == 0)))))) ||
               (iVar5 = _ismbcdigit((int)*(char *)((int)param_1 + 0x30b)), iVar5 == 0)) {
              local_10 = local_10 | 0x80;
            }
          }
          else {
            local_10 = local_10 | 0x80;
          }
        }
      }
    }
  }
  pcVar1 = (char *)((int)param_1 + 799);
  uVar6 = (*pcVar8)(pcVar1);
  if (4 < uVar6) {
    bVar3 = false;
    bVar4 = false;
    iVar5 = (*pcVar8)(pcVar1);
    if (-1 < iVar5) {
      pcVar10 = pcVar1;
      do {
        cVar2 = *pcVar10;
        if ((((cVar2 == ' ') || (cVar2 == '*')) || (cVar2 == '/')) || (cVar2 == '\\'))
        goto LAB_00403034;
        if (cVar2 == '@') {
          if (bVar3) goto LAB_00403034;
          bVar3 = true;
        }
        else if ((cVar2 == '.') && (!bVar4)) {
          bVar4 = true;
        }
        pcVar10 = pcVar10 + 1;
        iVar5 = (*pcVar8)(pcVar1);
      } while ((int)(pcVar10 + (-799 - (int)param_1)) <= iVar5);
      if (bVar4) {
        *param_1 = unaff_EBX;
        return local_10;
      }
    }
  }
LAB_00403034:
  *param_1 = unaff_EBX | 0x200;
  return 0x80004005;
}


