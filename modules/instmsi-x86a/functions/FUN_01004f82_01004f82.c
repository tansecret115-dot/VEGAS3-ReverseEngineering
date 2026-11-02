/* Module: InstMsi-x86a.exe
   Function: FUN_01004f82
   Address: 01004f82
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01004f82(LPCSTR param_1,uint param_2,int param_3)

{
  ushort uVar1;
  BOOL BVar2;
  uint uVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  UINT UVar11;
  DWORD DVar12;
  CHAR *pCVar13;
  DWORD DVar14;
  va_list *ppcVar15;
  CHAR local_31c;
  undefined4 local_31b;
  CHAR local_11c [260];
  DWORD local_18;
  undefined4 local_14;
  CHAR local_10 [8];
  int local_8;
  
  local_8 = 0;
  if (param_2 == 0) {
    return true;
  }
  GetCurrentDirectoryA(0x104,local_11c);
  BVar2 = SetCurrentDirectoryA(param_1);
  if (BVar2 == 0) {
    FUN_01003cb8((HWND)0x0,0x4bc,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010056fe();
  }
  else {
    uVar3 = FUN_01005b39((LPCSTR)0x0,&local_8);
    if (uVar3 == 0) {
      local_31c = '\0';
      puVar8 = &local_31b;
      for (iVar6 = 0x7f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = 0;
      *(undefined1 *)((int)puVar8 + 2) = 0;
      DAT_0100b704 = FUN_010056fe();
      ppcVar15 = (va_list *)0x0;
      pCVar13 = &local_31c;
      DVar14 = 0x200;
      DVar12 = 0;
      DVar4 = GetLastError();
      FormatMessageA(0x1000,(LPCVOID)0x0,DVar4,DVar12,pCVar13,DVar14,ppcVar15);
      UVar11 = 0x4b0;
    }
    else {
      BVar2 = GetVolumeInformationA
                        ((LPCSTR)0x0,(LPSTR)0x0,0,(LPDWORD)0x0,&local_18,&local_14,(LPSTR)0x0,0);
      if (BVar2 != 0) {
        SetCurrentDirectoryA(local_11c);
        lstrcpynA(local_10,param_1,3);
        iVar6 = 0x200;
        uVar1 = 0;
        do {
          if (local_8 == iVar6) break;
          iVar6 = iVar6 << 1;
          uVar1 = uVar1 + 1;
        } while (uVar1 < 8);
        if (uVar1 == 8) {
          FUN_01003cb8((HWND)0x0,0x4c5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
          return false;
        }
        if (((DAT_0100b6d4 & 8) == 0) || ((local_14._1_1_ & 0x80) == 0)) {
          uVar5 = (&DAT_0100b6e0)[uVar1];
          uVar7 = DAT_0100b6d8;
        }
        else {
          uVar5 = (&DAT_0100b6e0)[uVar1] << 1;
          uVar7 = (DAT_0100b6d8 >> 2) + DAT_0100b6d8;
        }
        if (((param_2 & 1) == 0) || ((param_2 & 2) == 0)) {
          if ((param_2 & 1) == 0) {
            bVar9 = uVar7 < uVar3;
            bVar10 = uVar7 == uVar3;
          }
          else {
            bVar9 = uVar5 < uVar3;
            bVar10 = uVar5 == uVar3;
          }
        }
        else {
          bVar9 = uVar7 + uVar5 < uVar3;
          bVar10 = uVar7 + uVar5 == uVar3;
        }
        if (bVar9 || bVar10) {
          DAT_0100b704 = 0;
          return true;
        }
        bVar9 = FUN_010022cb(param_3,uVar5,uVar7,local_10);
        return bVar9;
      }
      local_31c = '\0';
      puVar8 = &local_31b;
      for (iVar6 = 0x7f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = 0;
      *(undefined1 *)((int)puVar8 + 2) = 0;
      DAT_0100b704 = FUN_010056fe();
      ppcVar15 = (va_list *)0x0;
      pCVar13 = &local_31c;
      DVar14 = 0x200;
      DVar12 = 0;
      DVar4 = GetLastError();
      FormatMessageA(0x1000,(LPCVOID)0x0,DVar4,DVar12,pCVar13,DVar14,ppcVar15);
      UVar11 = 0x4f9;
    }
    FUN_01003cb8((HWND)0x0,UVar11,param_1,&local_31c,0x10,0);
    SetCurrentDirectoryA(local_11c);
  }
  return false;
}


