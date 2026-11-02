/* Module: vidcap30.exe
   Function: FUN_0044d710
   Address: 0044d710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044d710(LPCSTR param_1,uint *param_2,LPSTR param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  LPCSTR pCVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  CHAR *pCVar11;
  undefined4 uVar12;
  CHAR local_118 [259];
  undefined1 local_15;
  uint local_14;
  LPCSTR local_10;
  int local_c;
  uint local_8;
  
  FUN_0044d700(param_1,*(undefined4 *)(param_1 + 0x428));
  FUN_00579db0();
  local_c = 0;
  local_10 = &stack0xfffffedc;
  iVar3 = FUN_0044c6c0(param_1);
  iVar4 = FUN_0044c6e0(param_1);
  if (param_2 == (uint *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_2;
  }
  uVar2 = local_8;
  local_14 = 0;
  *local_10 = '\0';
  if (uVar2 != 0) {
    do {
      local_118[0] = '\0';
      switch(**(undefined4 **)(param_2[2] + local_14 * 4)) {
      case 0:
        pCVar8 = param_1;
LAB_0044d7b1:
        lstrcpynA(local_118,pCVar8,0x104);
        local_15 = 0;
        break;
      case 1:
        if (iVar4 != 0) {
          pCVar8 = *(LPCSTR *)(*(int *)(iVar4 + 4) + 0xc);
          goto LAB_0044d7b1;
        }
        if (iVar3 != 0) {
          lstrcpynA(local_118,*(LPCSTR *)(iVar3 + 0xc),0x104);
          local_15 = 0;
        }
        break;
      case 2:
        if (iVar4 != 0) {
          FUN_0045aec0(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24),
                       *(undefined4 *)(iVar4 + 0x40),*(undefined4 *)(iVar4 + 0x44),local_118,0x104);
        }
        break;
      case 3:
        if (iVar4 != 0) {
          FUN_0045aec0(*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c),
                       *(undefined4 *)(iVar4 + 0x40),*(undefined4 *)(iVar4 + 0x44),local_118,0x104);
        }
        break;
      case 4:
        if (iVar4 != 0) {
          uVar5 = *(undefined4 *)(iVar4 + 0x44);
          uVar7 = *(undefined4 *)(iVar4 + 0x40);
          pCVar11 = local_118;
          uVar12 = 0x104;
          uVar9 = FUN_004443a0(iVar4);
          FUN_0045aec0(uVar9,uVar7,uVar5,pCVar11,uVar12);
        }
        break;
      case 5:
        if (iVar4 != 0) {
          FUN_0045b130(*(undefined4 *)(iVar4 + 0x14),local_118,0x104);
        }
        break;
      case 6:
        if (((iVar4 != 0) && (pcVar1 = *(char **)(iVar4 + 0x14), pcVar1 != (char *)0x0)) &&
           (*pcVar1 != '\0')) {
          _SfGetPathNameFromFilePath_12(pcVar1,local_118,0x104);
        }
        break;
      case 7:
        if (iVar4 != 0) {
          lstrcpynA(local_118,*(LPCSTR *)(iVar4 + 0x18),0x104);
          local_15 = 0;
        }
        break;
      case 8:
        if (iVar4 == 0) {
          if (iVar3 == 0) break;
          pCVar8 = *(LPCSTR *)(iVar3 + 0x14);
        }
        else {
          pCVar8 = *(LPCSTR *)(iVar4 + 0x3c);
        }
        goto LAB_0044d8ff;
      case 9:
        if (iVar4 != 0) {
          FUN_0044e350(iVar4,local_118,0x104);
        }
        break;
      case 10:
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x38) & 1) != 0)) {
          uVar5 = *(undefined4 *)(iVar4 + 100);
          uVar7 = *(undefined4 *)(iVar4 + 0x60);
          ppuVar10 = &PTR_DAT_0058badc;
LAB_0044daac:
          SfPrintF(local_118,ppuVar10,uVar7,uVar5);
        }
        break;
      case 0xb:
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x38) & 1) != 0)) {
          uVar5 = *(undefined4 *)(iVar4 + 0x6c);
          uVar7 = *(undefined4 *)(iVar4 + 0x68);
          ppuVar10 = &PTR_DAT_0058badc;
          goto LAB_0044daac;
        }
        break;
      case 0xc:
        if (iVar4 != 0) {
          FUN_0044e4b0(iVar4,local_118,0x104);
        }
        break;
      case 0xd:
        lstrcpynA(local_118,param_1 + 0x10a,0x104);
        local_15 = 0;
        break;
      case 0xe:
        pCVar8 = param_1 + 0x20e;
LAB_0044d8ff:
        lstrcpynA(local_118,pCVar8,0x104);
        local_15 = 0;
        break;
      case 0xf:
        if (iVar3 != 0) {
          uVar5 = FUN_00443780(iVar3);
          SfPrintF(local_118,&DAT_00589f30,uVar5);
        }
        break;
      case 0x10:
        if (iVar3 != 0) {
          uVar5 = FUN_004437a0(iVar3);
          SfPrintF(local_118,&DAT_00589f30,uVar5);
        }
        break;
      case 0x11:
        FUN_0045b3a0(param_1 + 0x314,local_118,0x104);
        break;
      case 0x12:
        if (iVar4 != 0) {
          FUN_0045b3a0(iVar4 + 0x7c,local_118,0x104);
        }
        break;
      case 0x13:
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x38) & 1) != 0)) {
          uVar5 = *(undefined4 *)(iVar4 + 0x74);
          uVar7 = *(undefined4 *)(iVar4 + 0x70);
LAB_0044da9f:
          ppuVar10 = (undefined **)&DAT_0058bad4;
          goto LAB_0044daac;
        }
        break;
      case 0x14:
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x38) & 1) != 0)) {
          uVar5 = *(undefined4 *)(iVar4 + 0x44);
          uVar7 = *(undefined4 *)(iVar4 + 0x40);
          goto LAB_0044da9f;
        }
      }
      iVar6 = SfPrintF(local_10 + local_c,&DAT_0058bc0c,local_118);
      local_c = local_c + iVar6;
      local_14 = local_14 + 1;
    } while (local_14 < local_8);
  }
  lstrcpynA(param_3,local_10,param_4);
  param_3[param_4 + -1] = '\0';
  lstrlenA(param_3);
  return;
}


