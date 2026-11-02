/* Module: vegas30.exe
   Function: FUN_004a29f0
   Address: 004a29f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004a29f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            LPCSTR param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  LPCSTR pCVar7;
  LPCSTR lpString;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [32];
  
  pCVar7 = param_6;
  iVar4 = param_2;
  if (param_5 != 1) {
    return 0;
  }
  *param_6 = '\0';
  uVar1 = *(undefined4 *)(param_1 + 0xcf0);
  uVar2 = *(undefined4 *)(param_1 + 0xce8);
  iVar3 = FUN_005be610(1,local_20);
  if (((*(uint *)(iVar4 + 0x10) & 0x80000) == 0) ||
     (param_5 = 1, (*(uint *)(iVar4 + 0x10) & 0x10000) != 0)) {
    param_5 = 0;
  }
  FUN_005bec40(uVar1,uVar2,local_20,0,&local_30,0,0,0);
  uVar6 = param_7;
  if (param_5 == 0) {
    param_6 = (LPCSTR)0x0;
    param_5 = 0;
    if (0 < iVar3) {
      do {
        param_7 = FUN_005be910(param_5,local_20);
        if ((param_7 != 0) && (iVar4 = 0, 0 < (int)param_7)) {
          do {
            FUN_005bec40(param_5,iVar4,local_20,0,&local_28,0,0,0);
            if ((local_30 == local_28) && (local_2c == local_24)) {
              uVar5 = uVar6;
              lpString = pCVar7;
              if ((param_6 != (LPCSTR)0x0) && (uVar6 != 0)) {
                *pCVar7 = ',';
                lpString = pCVar7 + 1;
                uVar5 = 0;
                if (uVar6 != 1) {
                  *lpString = ' ';
                  lpString = pCVar7 + 2;
                  uVar5 = uVar6 - 2;
                }
              }
              FUN_005bea00(param_5,local_20,lpString,uVar5,&param_2);
              iVar4 = lstrlenA(lpString);
              pCVar7 = lpString + iVar4;
              uVar6 = uVar5 - iVar4;
              param_6 = (LPCSTR)0x1;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)param_7);
        }
        param_5 = param_5 + 1;
      } while (param_5 < iVar3);
    }
  }
  else {
    FUN_005bea00(uVar1,local_20,pCVar7,param_7,&param_7);
    iVar4 = lstrlenA(pCVar7);
    pCVar7 = pCVar7 + iVar4;
    uVar6 = uVar6 - iVar4;
  }
  if (0x1e < uVar6) {
    *pCVar7 = ' ';
    pCVar7 = pCVar7 + 1;
    iVar4 = _SfLoadString_16(DAT_00647204,0x47,pCVar7,uVar6 - 1);
    pCVar7[iVar4] = ' ';
    _SfNanoTimeToText_20(pCVar7 + iVar4 + 1,DAT_00647630 + 0x20,local_30,local_2c,0);
  }
  return 1;
}


