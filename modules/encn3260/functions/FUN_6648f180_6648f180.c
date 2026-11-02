/* Module: encn3260.dll
   Function: FUN_6648f180
   Address: 6648f180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648f180(int *param_1)

{
  char cVar1;
  void *this;
  int *piVar2;
  DWORD DVar3;
  int _Value;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int _Radix;
  char local_18 [16];
  char *local_8;
  
  this = operator_new(0xc);
  if (this == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_6648ffe0(this,param_1);
  }
  param_1[0x1e] = (int)piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  pcVar6 = local_18;
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  _Radix = 10;
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = 0;
  DVar3 = GetTickCount();
  _Value = FUN_664d1bc0(DVar3);
  _itoa(_Value,pcVar6,_Radix);
  uVar4 = 0xffffffff;
  pcVar6 = local_18;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_8 = operator_new(~uVar4);
  uVar4 = 0xffffffff;
  pcVar6 = local_18;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = local_8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  param_1[0x22] = (int)local_8;
  return;
}


