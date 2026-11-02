/* Module: rmbe3260.dll
   Function: FUN_66018be0
   Address: 66018be0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66018be0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *_Str;
  char *pcVar7;
  undefined4 *puVar8;
  
  pcVar4 = param_2;
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  param_2 = (char *)0x1;
  do {
    pcVar7 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar7 + -uVar5;
  pcVar7 = pcVar2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; _Str = pcVar2, uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
  }
  do {
    if ((_Str == (char *)0x0) || (*_Str == '\0')) {
      operator_delete(pcVar2);
      return -(uint)(param_2 != (char *)0x9) & 0x80004005;
    }
    iVar3 = isspace((int)*_Str);
    while (iVar3 != 0) {
      pcVar4 = _Str + 1;
      _Str = _Str + 1;
      iVar3 = isspace((int)*pcVar4);
    }
    pcVar4 = strchr(_Str,0x3b);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      pcVar4 = pcVar4 + 1;
    }
    switch(param_2) {
    case (char *)0x1:
      puVar8 = (undefined4 *)(param_1 + 4);
      break;
    case (char *)0x2:
      iVar3 = atoi(_Str);
      *(int *)(param_1 + 0xc) = iVar3;
      goto switchD_66018c85_default;
    case (char *)0x3:
      puVar8 = (undefined4 *)(param_1 + 0x18);
      break;
    case (char *)0x4:
      puVar8 = (undefined4 *)(param_1 + 0x20);
      break;
    case (char *)0x5:
      puVar8 = (undefined4 *)(param_1 + 0x28);
      break;
    case (char *)0x6:
      puVar8 = (undefined4 *)(param_1 + 0x30);
      break;
    case (char *)0x7:
      puVar8 = (undefined4 *)(param_1 + 0x38);
      break;
    case (char *)0x8:
      puVar8 = (undefined4 *)(param_1 + 0x40);
      break;
    default:
      goto switchD_66018c85_default;
    }
    FUN_660143a0(puVar8,(undefined4 *)_Str);
switchD_66018c85_default:
    param_2 = param_2 + 1;
    _Str = pcVar4;
  } while( true );
}


