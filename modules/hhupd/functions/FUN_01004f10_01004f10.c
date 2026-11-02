/* Module: hhupd.exe
   Function: FUN_01004f10
   Address: 01004f10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01004f10(LPCSTR param_1,uint param_2,int param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  UINT UVar11;
  DWORD DVar12;
  CHAR *pCVar13;
  DWORD DVar14;
  va_list *ppcVar15;
  CHAR local_328;
  undefined4 local_327;
  CHAR local_128 [260];
  DWORD local_24 [2];
  byte local_1b;
  CHAR local_18 [8];
  DWORD local_10;
  DWORD local_c;
  DWORD local_8;
  
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  local_24[1] = 0;
  if (param_2 == 0) {
    return true;
  }
  GetCurrentDirectoryA(0x104,local_128);
  BVar1 = SetCurrentDirectoryA(param_1);
  if (BVar1 == 0) {
    FUN_01003c23((HWND)0x0,0x4bc,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010056b9();
  }
  else {
    BVar1 = GetDiskFreeSpaceA((LPCSTR)0x0,&local_8,&local_10,&local_c,local_24 + 1);
    if (BVar1 == 0) {
      local_328 = '\0';
      puVar8 = &local_327;
      for (iVar5 = 0x7f; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = 0;
      *(undefined1 *)((int)puVar8 + 2) = 0;
      DAT_0100b704 = FUN_010056b9();
      ppcVar15 = (va_list *)0x0;
      pCVar13 = &local_328;
      DVar14 = 0x200;
      DVar12 = 0;
      DVar2 = GetLastError();
      FormatMessageA(0x1000,(LPCVOID)0x0,DVar2,DVar12,pCVar13,DVar14,ppcVar15);
      UVar11 = 0x4b0;
    }
    else {
      BVar1 = GetVolumeInformationA
                        ((LPCSTR)0x0,(LPSTR)0x0,0,(LPDWORD)0x0,local_24,(LPDWORD)&stack0xffffffe4,
                         (LPSTR)0x0,0);
      if (BVar1 != 0) {
        SetCurrentDirectoryA(local_128);
        lstrcpynA(local_18,param_1,3);
        iVar5 = 0x200;
        uVar7 = local_10 * local_8 * local_c;
        uVar4 = 0;
        do {
          if (local_10 * local_8 - iVar5 == 0) break;
          iVar5 = iVar5 << 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 8);
        if (uVar4 == 8) {
          FUN_01003c23((HWND)0x0,0x4c5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
          return false;
        }
        if (((DAT_0100b6d4 & 8) == 0) || ((local_1b & 0x80) == 0)) {
          uVar3 = (&DAT_0100b6e0)[uVar4];
          uVar6 = DAT_0100b6d8;
        }
        else {
          uVar3 = (&DAT_0100b6e0)[uVar4] << 1;
          uVar6 = (DAT_0100b6d8 >> 2) + DAT_0100b6d8;
        }
        if (((param_2 & 1) == 0) || ((param_2 & 2) == 0)) {
          if ((param_2 & 1) == 0) {
            bVar9 = uVar6 < uVar7;
            bVar10 = uVar6 == uVar7;
          }
          else {
            bVar9 = uVar3 < uVar7;
            bVar10 = uVar3 == uVar7;
          }
        }
        else {
          bVar9 = uVar6 + uVar3 < uVar7;
          bVar10 = uVar6 + uVar3 == uVar7;
        }
        if (bVar9 || bVar10) {
          DAT_0100b704 = 0;
          return true;
        }
        bVar9 = FUN_010022a5(param_3,uVar3,uVar6,local_18);
        return bVar9;
      }
      local_328 = '\0';
      puVar8 = &local_327;
      for (iVar5 = 0x7f; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = 0;
      *(undefined1 *)((int)puVar8 + 2) = 0;
      DAT_0100b704 = FUN_010056b9();
      ppcVar15 = (va_list *)0x0;
      pCVar13 = &local_328;
      DVar14 = 0x200;
      DVar12 = 0;
      DVar2 = GetLastError();
      FormatMessageA(0x1000,(LPCVOID)0x0,DVar2,DVar12,pCVar13,DVar14,ppcVar15);
      UVar11 = 0x4f9;
    }
    FUN_01003c23((HWND)0x0,UVar11,param_1,&local_328,0x10,0);
    SetCurrentDirectoryA(local_128);
  }
  return false;
}


