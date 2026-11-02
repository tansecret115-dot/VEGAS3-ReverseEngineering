/* Module: vidcap30.exe
   Function: FUN_00458840
   Address: 00458840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00458840(int param_1,undefined4 *param_2,int param_3,LPSTR param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_530;
  int local_52c;
  CHAR local_51c [259];
  undefined1 local_419;
  CHAR local_418 [1044];
  
  local_530 = 0;
  fVar3 = (float10)FUN_0042ed90(DAT_005bb838);
  local_418[0] = '\0';
  if (0 < param_3) {
    local_52c = param_3;
    do {
      local_51c[0] = '\0';
      switch(*param_2) {
      case 0:
        lstrcpynA(local_51c,(LPCSTR)(param_1 + 0x30),0x104);
        local_419 = 0;
        break;
      case 2:
        FUN_0045aec0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),(double)fVar3,
                     local_51c,0x104);
        break;
      case 4:
        FUN_0045aec0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),(double)fVar3,
                     local_51c,0x104);
        break;
      case 10:
        SfPrintF(local_51c,&DAT_00589f30,*(undefined4 *)(param_1 + 8));
        break;
      case 0xb:
        SfPrintF(local_51c,&DAT_00589f30,*(undefined4 *)(param_1 + 0xc));
        break;
      case 0x13:
        uVar5 = *(undefined4 *)(param_1 + 0x2c);
        uVar4 = *(undefined4 *)(param_1 + 0x28);
        uVar1 = _SfGetString_8(DAT_005ba2a0,0xc531);
        goto LAB_00458977;
      case 0x14:
        uVar5 = *(undefined4 *)(param_1 + 0x24);
        uVar4 = *(undefined4 *)(param_1 + 0x20);
        uVar1 = _SfGetString_8(DAT_005ba2a0,0xc530);
LAB_00458977:
        SfPrintF(local_51c,uVar1,uVar4,uVar5);
      }
      iVar2 = SfPrintF(local_418 + local_530,&DAT_00587ac8,local_51c);
      local_530 = local_530 + iVar2;
      param_2 = param_2 + 4;
      local_52c = local_52c + -1;
    } while (local_52c != 0);
  }
  lstrcpynA(param_4,local_418,param_5);
  param_4[param_5 + -1] = '\0';
  lstrlenA(param_4);
  return;
}


