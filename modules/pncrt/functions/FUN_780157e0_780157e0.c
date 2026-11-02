/* Module: pncrt.dll
   Function: FUN_780157e0
   Address: 780157e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780157e0(byte *param_1,int *param_2,byte *param_3,int *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  byte *_Str1;
  
  pbVar2 = param_3;
  bVar1 = *param_1;
  _Str1 = param_1;
  do {
    if ((bVar1 == 0) || (*param_4 == 0)) {
      return;
    }
    DAT_78042510 = 0;
    cVar7 = '\0';
    param_1._0_1_ = 0;
    uVar5 = 0;
    pbVar3 = _Str1 + 1;
    do {
      param_3 = pbVar3;
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
      pbVar3 = param_3 + 1;
    } while (*param_3 == *_Str1);
    switch(*_Str1) {
    case 0x27:
      if ((uVar5 & 1) == 0) {
        param_3 = _Str1 + uVar5;
      }
      else {
        param_3 = _Str1 + uVar5;
        bVar1 = *param_3;
        while( true ) {
          if ((bVar1 == 0) || (*param_4 == 0)) goto LAB_780158cc;
          if (bVar1 == 0x27) break;
          if ((_pctype[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            **(byte **)pbVar2 = bVar1;
            param_3 = param_3 + 1;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            *param_4 = *param_4 + -1;
          }
          **(byte **)pbVar2 = *param_3;
          param_3 = param_3 + 1;
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          *param_4 = *param_4 + -1;
          bVar1 = *param_3;
        }
        param_3 = param_3 + 1;
      }
      goto LAB_780158cc;
    case 0x41:
    case 0x61:
      iVar6 = _strcmpi((char *)_Str1,"am/pm");
      if (iVar6 == 0) {
        param_3 = _Str1 + 5;
        cVar7 = 'p';
        param_1._0_1_ = 0x70;
      }
      else {
        iVar6 = _strcmpi((char *)_Str1,"a/p");
        if (iVar6 == 0) {
          param_3 = _Str1 + 3;
        }
        cVar7 = 'p';
        param_1._0_1_ = 0x70;
      }
      break;
    case 0x48:
      if (uVar4 == 0) {
        DAT_78042510 = 1;
      }
      else if (uVar5 != 2) break;
      cVar7 = 'H';
      param_1._0_1_ = 0x48;
      break;
    case 0x4d:
      switch(uVar4) {
      case 0:
        DAT_78042510 = 1;
      case 1:
        cVar7 = 'm';
        param_1._0_1_ = 0x6d;
        break;
      case 2:
        cVar7 = 'b';
        param_1._0_1_ = 0x62;
        break;
      case 3:
        cVar7 = 'B';
        param_1._0_1_ = 0x42;
      }
      break;
    case 100:
      switch(uVar4) {
      case 0:
        DAT_78042510 = 1;
      case 1:
        cVar7 = 'd';
        param_1._0_1_ = 100;
        break;
      case 2:
        cVar7 = 'a';
        param_1._0_1_ = 0x61;
        break;
      case 3:
        cVar7 = 'A';
        param_1._0_1_ = 0x41;
      }
      break;
    case 0x68:
      if (uVar4 == 0) {
        DAT_78042510 = 1;
      }
      else if (uVar5 != 2) break;
      cVar7 = 'I';
      param_1._0_1_ = 0x49;
      break;
    case 0x6d:
      if (uVar4 == 0) {
        DAT_78042510 = 1;
      }
      else if (uVar5 != 2) break;
      cVar7 = 'M';
      param_1._0_1_ = 0x4d;
      break;
    case 0x73:
      if (uVar4 == 0) {
        DAT_78042510 = 1;
      }
      else if (uVar5 != 2) break;
      cVar7 = 'S';
      param_1._0_1_ = 0x53;
      break;
    case 0x79:
      if (uVar4 == 1) {
        cVar7 = 'y';
        param_1._0_1_ = 0x79;
      }
      else if (uVar5 == 4) {
        cVar7 = 'Y';
        param_1._0_1_ = 0x59;
      }
    }
    if (cVar7 == '\0') {
      if ((_pctype[(uint)*_Str1 * 2 + 1] & 0x80) != 0) {
        **(byte **)pbVar2 = *_Str1;
        *(int *)pbVar2 = *(int *)pbVar2 + 1;
        *param_4 = *param_4 + -1;
        _Str1 = _Str1 + 1;
      }
      **(byte **)pbVar2 = *_Str1;
      param_3 = _Str1 + 1;
      *(int *)pbVar2 = *(int *)pbVar2 + 1;
      *param_4 = *param_4 + -1;
    }
    else {
      FUN_78015100(param_1._0_1_,param_2,pbVar2,(uint *)param_4,param_5);
    }
LAB_780158cc:
    bVar1 = *param_3;
    _Str1 = param_3;
  } while( true );
}


