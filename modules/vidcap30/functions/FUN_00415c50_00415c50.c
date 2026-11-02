/* Module: vidcap30.exe
   Function: FUN_00415c50
   Address: 00415c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415c50(int param_1,undefined4 *param_2,int param_3,LPSTR param_4,int param_5)

{
  LPCSTR lpString2;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CHAR *pCVar6;
  undefined4 uVar7;
  int local_520;
  CHAR local_51c [259];
  undefined1 local_419;
  CHAR local_418 [1044];
  
  iVar2 = 0;
  local_418[0] = '\0';
  if (0 < param_3) {
    local_520 = param_3;
    do {
      local_51c[0] = '\0';
      switch(*param_2) {
      case 0:
        lpString2 = *(LPCSTR *)(param_1 + 0x10);
        break;
      case 1:
        lpString2 = *(LPCSTR *)(*(int *)(param_1 + 4) + 0xc);
        break;
      case 2:
        uVar5 = *(undefined4 *)(param_1 + 0x44);
        uVar4 = *(undefined4 *)(param_1 + 0x40);
        pCVar6 = local_51c;
        uVar7 = 0x104;
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        goto LAB_00415cef;
      default:
        goto switchD_00415c89_caseD_3;
      case 4:
        uVar5 = *(undefined4 *)(param_1 + 0x44);
        uVar4 = *(undefined4 *)(param_1 + 0x40);
        pCVar6 = local_51c;
        uVar7 = 0x104;
        uVar3 = FUN_004443a0(param_1);
LAB_00415cef:
        FUN_0045aec0(uVar3,uVar4,uVar5,pCVar6,uVar7);
        goto switchD_00415c89_caseD_3;
      }
      lstrcpynA(local_51c,lpString2,0x104);
      local_419 = 0;
switchD_00415c89_caseD_3:
      iVar1 = SfPrintF(local_418 + iVar2,&DAT_00587ac8,local_51c);
      iVar2 = iVar2 + iVar1;
      param_2 = param_2 + 4;
      local_520 = local_520 + -1;
    } while (local_520 != 0);
  }
  lstrcpynA(param_4,local_418,param_5);
  param_4[param_5 + -1] = '\0';
  lstrlenA(param_4);
  return;
}


