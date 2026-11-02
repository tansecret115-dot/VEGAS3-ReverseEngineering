/* Module: vidcap30.exe
   Function: FUN_0046e490
   Address: 0046e490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0046e490(char *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = 0;
  bVar3 = false;
  bVar2 = false;
  if (*param_1 == '\0') goto LAB_0046e4e6;
  iVar6 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar6 + 0x18) & 2) != 2) {
    bVar1 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
    iVar4 = *(int *)(iVar6 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
      iVar6 = iVar4;
      iVar4 = *(int *)(iVar4 + 0x10);
    }
  }
  do {
    while( true ) {
      do {
        if (*param_1 == '\0') {
LAB_0046e4e6:
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0xc);
        }
        if (iVar6 == iVar4) {
          uVar7 = 0;
          if (*(int *)(param_1 + 0x1c) != 0) {
            DAT_005ba50c = DAT_005ba50c | 0x100;
          }
          if (bVar2) {
            uVar7 = 0x4e002;
          }
          if (bVar3) {
            _SfErrorHandler_MsgBox_24(DAT_005ba4bc,0x30,4,0x4e008,0,1);
          }
          return uVar7;
        }
        iVar4 = *(int *)(iVar6 + 4);
        if (((*(byte *)(iVar4 + 0x124) & 0x20) != 0) && (0 < *(int *)(iVar4 + 0x128))) {
          iVar5 = FUN_00470ec0(0);
          if (iVar5 < 0) {
            if ((iVar5 != -0x7ffb1f56) && ((*(byte *)(iVar4 + 0x124) & 2) == 0)) {
              bVar2 = true;
            }
          }
          else if (iVar5 == 0x4e008) {
            bVar3 = true;
          }
        }
      } while ((iVar6 == 0) || ((*(byte *)(iVar6 + 0x18) & 2) == 2));
      iVar4 = *(int *)(iVar6 + 0x14);
      iVar5 = iVar6;
      if ((*(byte *)(iVar4 + 0x18) & 2) == 2) break;
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
      iVar6 = iVar4;
      iVar4 = *(int *)(iVar4 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
        iVar6 = iVar4;
        iVar4 = *(int *)(iVar4 + 0x10);
      }
    }
    do {
      iVar6 = *(int *)(iVar5 + 0xc);
      if (*(int *)(iVar6 + 0x10) == iVar5) break;
      iVar5 = iVar6;
    } while ((*(byte *)(iVar6 + 0x18) & 2) != 2);
  } while( true );
}


