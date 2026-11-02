/* Module: vidcap30.exe
   Function: FUN_0044a060
   Address: 0044a060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044a060(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  int *local_cc;
  undefined1 local_c8 [200];
  
  uVar3 = DAT_005bb838;
  local_d0 = DAT_005bb838;
  local_e8 = 0;
  local_e4 = 0;
  if (param_2 == 0) {
    local_dc = FUN_004487a0(*(undefined4 *)(param_1 + 0x88),&local_e0);
  }
  else {
    local_dc = FUN_004487f0(*(undefined4 *)(param_1 + 0x88),&local_e0);
  }
  if (local_e0 != 0) {
    local_d4 = 0;
    if (0 < local_dc) {
      do {
        iVar5 = *(int *)(*(int *)(local_e0 + 8) + local_d4 * 4);
        if (iVar5 != 0) {
          uVar2 = *(undefined4 *)(iVar5 + 0x20c);
          uVar1 = FUN_0044cae0(uVar2);
          switch(uVar1) {
          case 1:
          case 2:
            local_cc = (int *)FUN_0042e4f0(uVar3);
            if (local_cc != (int *)0x0) {
              local_d8 = *local_cc;
              iVar5 = 0;
              if (0 < local_d8) {
                do {
                  uVar3 = *(undefined4 *)(local_cc[2] + iVar5 * 4);
                  iVar4 = FUN_00443780(uVar3);
                  FUN_004434f0(uVar3,param_3,&local_e4);
                  local_e8 = local_e8 + (iVar4 - local_e4);
                  iVar5 = iVar5 + 1;
                  uVar3 = local_d0;
                } while (iVar5 < local_d8);
              }
            }
            break;
          case 3:
            uVar2 = FUN_0044c6a0(uVar2);
            local_e4 = FUN_0045f2b0(uVar3,uVar2,param_3,1);
            iVar5 = FUN_0045f4c0(uVar3,uVar2,1);
            local_e8 = local_e8 + (iVar5 - local_e4);
            break;
          case 4:
            uVar2 = FUN_0044c6c0(uVar2);
            iVar5 = FUN_00443780(uVar2);
            FUN_004434f0(uVar2,param_3,&local_e4);
            local_e8 = local_e8 + (iVar5 - local_e4);
            break;
          case 5:
            iVar5 = FUN_0044c6e0(uVar2);
            if ((param_3 == 0) || ((*(byte *)(iVar5 + 0x38) & 0x20) == 0)) {
              uVar2 = 0;
            }
            else {
              uVar2 = 4;
            }
            FUN_00443b20(iVar5,uVar2,4);
            if ((param_3 != 0) && ((*(byte *)(iVar5 + 0x38) & 0x20) == 0)) {
              local_e8 = local_e8 + 1;
            }
            break;
          case 7:
            local_d8 = FUN_0044c620(uVar2);
            iVar5 = 0;
            uVar3 = local_d0;
            if (0 < local_d8) {
              do {
                uVar3 = FUN_0044c5c0(uVar2,iVar5);
                iVar4 = FUN_0044c6e0(uVar3);
                if ((param_3 == 0) || ((*(byte *)(iVar4 + 0x38) & 0x20) == 0)) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = 4;
                }
                FUN_00443b20(iVar4,uVar3,4);
                if ((param_3 != 0) && ((*(byte *)(iVar4 + 0x38) & 0x20) == 0)) {
                  local_e8 = local_e8 + 1;
                }
                iVar5 = iVar5 + 1;
                uVar3 = local_d0;
              } while (iVar5 < local_d8);
            }
          }
        }
        local_d4 = local_d4 + 1;
      } while (local_d4 < local_dc);
    }
    FUN_00417990(local_e0);
  }
  if ((param_3 != 0) && (0 < local_e8)) {
    _SfLoadString_16(DAT_005ba2a0,0xc538,local_c8,200);
    SfMsgBox(*(undefined4 *)(param_1 + 8),0x40,
             "One or more clips could not be marked for capture.\n\n%s",local_c8);
  }
  return;
}


