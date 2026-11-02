/* Module: vegas30.exe
   Function: FUN_004e39f0
   Address: 004e39f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e39f0(LPCSTR param_1,int param_2)

{
  LPCSTR lpString2;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  lpString2 = param_1;
  uVar6 = DAT_0064b138;
  local_10 = DAT_0064b138;
  local_14 = 0;
  if (DAT_0064762c == 0) {
    return 1;
  }
  iVar4 = *(int *)(DAT_0064762c + 0x70);
  if (iVar4 == 0) {
    FUN_004e46f0(DAT_00647624,0);
    iVar4 = *(int *)(DAT_0064762c + 0x70);
    if (iVar4 == 0) {
      return 1;
    }
  }
  if (param_1 == (LPCSTR)0x0) {
    return 1;
  }
  FUN_004e3c20(iVar4);
  local_4 = -0x7ff8fff2;
  iVar1 = FUN_005ec620();
  if (iVar1 != 0) {
    FUN_005b83b0(uVar6,1);
    iVar1 = FUN_005ec8a0(param_1,&local_14,0,0);
    local_4 = iVar1;
    FUN_005b84d0(uVar6,1);
    if (-1 < iVar1) {
      iVar1 = 0;
      local_c = 0;
      local_8 = 0;
      if (local_14 != 0) {
        piVar2 = (int *)FUN_005b8760(uVar6);
        iVar5 = 0;
        if (piVar2 == (int *)0x0) {
          param_1 = (LPCSTR)0x0;
        }
        else {
          param_1 = (LPCSTR)*piVar2;
        }
        if (0 < (int)param_1) {
          do {
            iVar1 = *(int *)(piVar2[2] + iVar5 * 4);
            iVar3 = lstrcmpiA(*(LPCSTR *)(iVar1 + 0xa4),lpString2);
            if (iVar3 == 0) {
              local_c = *(undefined4 *)(iVar1 + 0x30);
              local_8 = *(undefined4 *)(iVar1 + 0x34);
              uVar6 = local_10;
              goto LAB_004e3b22;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)param_1);
        }
        iVar1 = 0;
        uVar6 = local_10;
      }
LAB_004e3b22:
      FUN_004de320(iVar4,local_14,local_8,local_c,iVar1,0);
      FUN_005eed00(uVar6,local_14);
      if ((lpString2[0x218] & 8U) != 0) {
        *(undefined4 *)(iVar4 + 0xc08) = *(undefined4 *)(lpString2 + 0x220);
        *(undefined4 *)(iVar4 + 0xc0c) = *(undefined4 *)(lpString2 + 0x224);
        *(undefined4 *)(iVar4 + 0xc10) = *(undefined4 *)(lpString2 + 0x228);
        *(undefined4 *)(iVar4 + 0xc14) = *(undefined4 *)(lpString2 + 0x22c);
        FUN_00458370(iVar4 + 0x80,*(undefined4 *)(lpString2 + 0x220),
                     *(undefined4 *)(lpString2 + 0x224),*(undefined4 *)(lpString2 + 0x228),
                     *(undefined4 *)(lpString2 + 0x22c));
      }
      if (((byte)*(undefined4 *)(iVar4 + 0xc) & 3) == 3) {
        FUN_00416020(*(undefined4 *)(DAT_0064762c + 0x34),*(undefined4 *)(iVar4 + 0x14));
      }
      if (param_2 == 0) {
        return local_4;
      }
      SetFocus(*(HWND *)(iVar4 + 8));
      return local_4;
    }
  }
  _SfErrorHandler_MsgBox_24(0,0x40,4,0x8004e007,param_1,0);
  return local_4;
}


