/* Module: pncrt.dll
   Function: FUN_78002440
   Address: 78002440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78002440(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *this;
  void *this_00;
  undefined4 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  DName *pDVar7;
  uint uVar8;
  DName local_84 [8];
  DName local_7c [8];
  undefined4 local_74 [2];
  undefined1 local_6c [8];
  char local_64;
  char local_63;
  char local_62;
  
  pcVar1 = DAT_78041aac + 1;
  switch(*DAT_78041aac) {
  case '\0':
    break;
  default:
switchD_78002466_caseD_1:
    DAT_78041aac = pcVar1;
    uVar8 = 1;
    goto LAB_78002575;
  case '0':
    DAT_78041aac = pcVar1;
    FUN_78001f30(param_1);
    return param_1;
  case '1':
    if (*pcVar1 == '@') {
      DAT_78041aac = pcVar1;
      FUN_780062b0(param_1,"NULL");
      return param_1;
    }
    DAT_78041aac = pcVar1;
    FUN_78001320(param_1);
    return param_1;
  case '2':
    DAT_78041aac = pcVar1;
    FUN_78001f30((undefined4 *)local_84);
    FUN_78001f30((undefined4 *)local_7c);
    iVar2 = DName::isValid(local_84);
    if ((iVar2 != 0) && (iVar2 = DName::isValid(local_7c), iVar2 != 0)) {
      puVar3 = FUN_78006530(local_84,&local_63,100);
      cVar5 = local_62;
      pcVar1 = DAT_78041aac;
      if (puVar3 != (undefined1 *)0x0) {
        local_64 = local_63;
        if (local_63 == '-') {
          local_62 = '.';
          local_63 = cVar5;
        }
        else {
          local_63 = '.';
        }
        pDVar7 = local_7c;
        puVar4 = local_74;
        cVar5 = 'e';
        puVar6 = param_1;
        this = FUN_780062b0(local_6c,&local_64);
        this_00 = (void *)FUN_780065f0(this,puVar4,cVar5);
        FUN_78006750(this_00,puVar6,pDVar7);
        return param_1;
      }
      goto switchD_78002466_caseD_1;
    }
  }
  uVar8 = 2;
LAB_78002575:
  FUN_78006450(param_1,uVar8);
  return param_1;
}


