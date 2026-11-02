/* Module: vidcap30.exe
   Function: FUN_00402980
   Address: 00402980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402980(void)

{
  uint uVar1;
  LPCSTR lpString2;
  LPSTR pCVar2;
  LPCVOID pMem;
  int iVar3;
  int iVar4;
  HWND hWnd;
  BOOL BVar5;
  HGLOBAL pvVar6;
  uint *puVar7;
  int *local_14;
  uint local_10;
  char *local_c;
  int local_8;
  LPCVOID local_4;
  
  puVar7 = &local_10;
  pCVar2 = GetCommandLineA();
  pMem = (LPCVOID)FUN_00401b00(pCVar2,puVar7);
  if (pMem != (LPCVOID)0x0) {
    local_4 = pMem;
    if (1 < local_10) {
      local_14 = (int *)0x0;
      iVar3 = FUN_00401d60(&local_14,pMem,1,local_10);
      if ((-1 < iVar3) && (local_14 != (int *)0x0)) {
        local_8 = *local_14;
        iVar3 = 0;
        if (0 < local_8) {
          do {
            uVar1 = *(uint *)(local_14[1] * iVar3 + local_14[2]);
            iVar4 = local_14[1] * iVar3 + local_14[2];
            if (uVar1 < 0x15) {
              if (uVar1 == 0x14) {
                lpString2 = *(LPCSTR *)(iVar4 + 8);
                if (lpString2 != (LPCSTR)0x0) {
                  lstrcpynA(&DAT_005bba44,lpString2,0x19);
                  DAT_005bba5c = 0;
                }
              }
              else {
                switch(uVar1) {
                case 1:
                  DAT_005ba4b4 = DAT_005ba4b4 | 0x30;
                  break;
                case 2:
                  DAT_005ba4b4 = DAT_005ba4b4 & 0xffffffbf | 0x80;
                  break;
                case 3:
                  DAT_005ba4b4 = DAT_005ba4b4 | 0xc0;
                  break;
                case 8:
                  hWnd = (HWND)_SfHexToDWordToken_8(*(undefined4 *)(iVar4 + 8),&local_c);
                  BVar5 = IsWindow(hWnd);
                  _DAT_005bba74 = 0;
                  DAT_005bba70 = -(uint)(BVar5 != 0) & (uint)hWnd;
                  if (*local_c == ';') {
                    _DAT_005bba74 = _SfTextToDWordToken_8(local_c + 1,0);
                  }
                  break;
                case 0xc:
                  DAT_005ba4b4 = DAT_005ba4b4 & 0xfffeffff | 0x8000;
                  break;
                case 0xd:
                  DAT_005ba4b4 = DAT_005ba4b4 & 0xfffbffff | 0x20000;
                  break;
                case 0xe:
                  DAT_005ba4b4 = DAT_005ba4b4 | 0x60000;
                }
              }
            }
            else if (uVar1 == 0x414) {
              DAT_005ba4b4 = DAT_005ba4b4 | 0x20;
            }
            iVar3 = iVar3 + 1;
            pMem = local_4;
          } while (iVar3 < local_8);
        }
        _SfList_Destroy_4(local_14);
      }
    }
    pvVar6 = GlobalHandle(pMem);
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(pMem);
    GlobalFree(pvVar6);
  }
  return;
}


