/* Module: vegas30.exe
   Function: FUN_005ebc10
   Address: 005ebc10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005ebc10(char *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = 0;
  bVar3 = false;
  bVar2 = false;
  if (*param_1 == '\0') goto LAB_005ebc66;
  iVar7 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar7 + 0x18) & 2) != 2) {
    bVar1 = *(byte *)(*(int *)(iVar7 + 0x10) + 0x18);
    iVar4 = *(int *)(iVar7 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
      iVar7 = iVar4;
      iVar4 = *(int *)(iVar4 + 0x10);
    }
  }
  do {
    while( true ) {
      do {
        if (*param_1 == '\0') {
LAB_005ebc66:
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0xc);
        }
        if (iVar7 == iVar4) {
          uVar6 = 0;
          if (*(int *)(param_1 + 0x1c) != 0) {
            DAT_0064767c = DAT_0064767c | 0x100;
          }
          if (bVar2) {
            uVar6 = 0x4e002;
          }
          if (bVar3) {
            _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,4,0x4e008,0,1);
          }
          return uVar6;
        }
        iVar4 = *(int *)(iVar7 + 4);
        if (((*(byte *)(iVar4 + 0x134) & 0x20) != 0) && (0 < *(int *)(iVar4 + 0x140))) {
          iVar5 = FUN_005effc0(0);
          if (iVar5 < 0) {
            if ((iVar5 != -0x7ffb1f56) && ((*(byte *)(iVar4 + 0x134) & 2) == 0)) {
              bVar2 = true;
            }
          }
          else if (iVar5 == 0x4e008) {
            bVar3 = true;
          }
          uVar6 = FUN_005f1460(2,0);
          FUN_00589e10(uVar6);
        }
      } while ((iVar7 == 0) || ((*(byte *)(iVar7 + 0x18) & 2) == 2));
      iVar4 = *(int *)(iVar7 + 0x14);
      iVar5 = iVar7;
      if ((*(byte *)(iVar4 + 0x18) & 2) == 2) break;
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
      iVar7 = iVar4;
      iVar4 = *(int *)(iVar4 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
        iVar7 = iVar4;
        iVar4 = *(int *)(iVar4 + 0x10);
      }
    }
    do {
      iVar7 = *(int *)(iVar5 + 0xc);
      if (*(int *)(iVar7 + 0x10) == iVar5) break;
      iVar5 = iVar7;
    } while ((*(byte *)(iVar7 + 0x18) & 2) != 2);
  } while( true );
}


