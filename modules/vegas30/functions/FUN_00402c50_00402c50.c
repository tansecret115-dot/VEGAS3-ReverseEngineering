/* Module: vegas30.exe
   Function: FUN_00402c50
   Address: 00402c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402c50(void)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  LPSTR pCVar4;
  LPCVOID pMem;
  int iVar5;
  int iVar6;
  HWND hWnd;
  BOOL BVar7;
  HGLOBAL pvVar8;
  uint *puVar9;
  int *local_1c;
  uint local_18;
  char *local_14;
  ushort local_10;
  undefined2 uStack_e;
  ushort local_c;
  undefined2 uStack_a;
  int local_8;
  LPCVOID local_4;
  
  puVar9 = &local_18;
  pCVar4 = GetCommandLineA();
  pMem = (LPCVOID)FUN_00401f70(pCVar4,puVar9);
  if (pMem != (LPCVOID)0x0) {
    local_4 = pMem;
    if (1 < local_18) {
      local_1c = (int *)0x0;
      iVar5 = FUN_004021d0(&local_1c,pMem,1,local_18 - 1);
      if ((-1 < iVar5) && (local_1c != (int *)0x0)) {
        local_8 = *local_1c;
        iVar5 = 0;
        if (0 < local_8) {
          do {
            uVar2 = *(uint *)(local_1c[1] * iVar5 + local_1c[2]);
            iVar6 = local_1c[1] * iVar5 + local_1c[2];
            if (uVar2 < 0x12) {
              if (uVar2 == 0x11) {
                cVar1 = **(char **)(iVar6 + 8);
                if (('/' < cVar1) && (cVar1 < ':')) {
                  DAT_0064b524 = _SfTextToDWordToken_8(*(char **)(iVar6 + 8),0);
                }
              }
              else {
                switch(uVar2) {
                case 1:
                  DAT_0064761c = DAT_0064761c | 0x10;
                  break;
                case 2:
                  DAT_0064761c = DAT_0064761c & 0xffffffbf | 0x80;
                  break;
                case 3:
                  DAT_0064761c = DAT_0064761c | 0xc0;
                  break;
                case 4:
                  DAT_0064b4f0 = 1;
                  uVar3 = _SfHexToDWordToken_8(*(undefined4 *)(iVar6 + 8),0);
                  _local_10 = CONCAT22(uStack_e,uVar3);
                  DAT_0064b4dc = (uint)uVar3;
                  DAT_0064b4e0 = uVar3 & 0xff;
                  DAT_0064b4e4 = (uint)(uVar3 >> 8);
                  break;
                case 7:
                  hWnd = (HWND)_SfHexToDWordToken_8(*(undefined4 *)(iVar6 + 8),&local_14);
                  BVar7 = IsWindow(hWnd);
                  if (BVar7 != 0) {
                    DAT_0064b514 = hWnd;
                  }
                  if (*local_14 == ';') {
                    if (('/' < local_14[1]) && (local_14[1] < ':')) {
                      DAT_0064b518 = _SfTextToDWordToken_8(local_14 + 1,0);
                      break;
                    }
                  }
                  if (DAT_0064b518 == 0) {
                    DAT_0064b518 = 60000;
                  }
                  break;
                case 8:
                  DAT_0064b4f0 = 0;
                  uVar3 = _SfHexToDWordToken_8(*(undefined4 *)(iVar6 + 8),0);
                  _local_c = CONCAT22(uStack_a,uVar3);
                  DAT_0064b4e8 = uVar3 & 0xff;
                  DAT_0064b4ec = (uint)(uVar3 >> 8);
                }
              }
            }
            else if (uVar2 == 0x9cb1) {
              DAT_0064761c = DAT_0064761c | 0x20;
            }
            iVar5 = iVar5 + 1;
            pMem = local_4;
          } while (iVar5 < local_8);
        }
        _SfList_Destroy_4(local_1c);
      }
    }
    pvVar8 = GlobalHandle(pMem);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pMem);
    GlobalFree(pvVar8);
  }
  return;
}


