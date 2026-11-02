/* Module: sftrans1.dll
   Function: FUN_0041e260
   Address: 0041e260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0041e260(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  wchar_t local_80 [32];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar3 = param_1;
  for (iVar1 = 0xb2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = 1;
  param_1[1] = 0x2c8;
  param_1[6] = 0x9999999a;
  param_1[7] = 0x3fb99999;
  param_1[8] = 0xcccccccd;
  param_1[9] = 0x3feccccc;
  param_1[10] = 0x33333333;
  param_1[0xb] = 0x3fd33333;
  param_1[4] = 0;
  param_1[5] = 0x3fe00000;
  param_1[0x1a] = 0x9999999a;
  param_1[0x1b] = 0x3fa99999;
  switch(param_2) {
  case 0:
    param_1[0x17] = 0;
    pwVar2 = local_80;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x18] = 0x3f800000;
    wcscpy(local_80,L"Arial");
    local_40 = 0x14;
    local_28 = 2;
    local_18 = 0x9999999a;
    local_14 = 0x3fa99999;
    local_10 = 0;
    local_c = 0x3ff00000;
    local_30 = 0x3f800000;
    local_34 = 0x3f800000;
    local_38 = 0x3f800000;
    local_2c = 0x3f800000;
    pwVar2 = local_80;
    puVar3 = param_1 + 0x1c;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)pwVar2;
      pwVar2 = pwVar2 + 2;
      puVar3 = puVar3 + 1;
    }
    pwVar2 = local_80;
    puVar3 = param_1 + 0x3a;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)pwVar2;
      pwVar2 = pwVar2 + 2;
      puVar3 = puVar3 + 1;
    }
    pwVar2 = local_80;
    puVar3 = param_1 + 0x58;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)pwVar2;
      pwVar2 = pwVar2 + 2;
      puVar3 = puVar3 + 1;
    }
    pwVar2 = local_80;
    puVar3 = param_1 + 0x76;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)pwVar2;
      pwVar2 = pwVar2 + 2;
      puVar3 = puVar3 + 1;
    }
    pwVar2 = local_80;
    puVar3 = param_1 + 0x94;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)pwVar2;
      pwVar2 = pwVar2 + 2;
      puVar3 = puVar3 + 1;
    }
    param_1[0x2d] = 1;
    break;
  case 1:
    wcscpy((wchar_t *)(param_1 + 0xf),L".");
    pwVar2 = (wchar_t *)(param_1 + 0x1c);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x1c),L"Arial");
    param_1[0x38] = 0;
    param_1[0x2c] = 0x24;
    param_1[0x39] = 0x3ff00000;
    param_1[0x36] = 0x9999999a;
    param_1[0x2d] = 1;
    param_1[0x30] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x37] = 0x3fb99999;
    param_1[0x32] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x3a);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x3a),L"Verdana");
    param_1[0x56] = 0;
    param_1[0x54] = 0x9999999a;
    param_1[0x4a] = 0x18;
    param_1[0x57] = 0x3ff00000;
    param_1[0x4e] = 0x3f800000;
    param_1[0x4d] = 0x3f800000;
    param_1[0x4c] = 0x3f800000;
    param_1[0x4f] = 0x3f800000;
    param_1[0x55] = 0x3fa99999;
    param_1[0x50] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x58);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x58),L"Verdana");
    param_1[0x74] = 0;
    param_1[0x72] = 0x47ae147b;
    param_1[0x68] = 0x14;
    param_1[0x75] = 0x3ff00000;
    param_1[0x6c] = 0x3f800000;
    param_1[0x6b] = 0x3f800000;
    param_1[0x6a] = 0x3f800000;
    param_1[0x6d] = 0x3f800000;
    param_1[0x73] = 0x3f847ae1;
    goto LAB_0041ef74;
  case 2:
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[2] = 1;
    param_1[0xc] = 1;
    param_1[0xd] = 1;
    param_1[0xe] = 2;
    param_1[0x18] = 0x3f800000;
    wcscpy((wchar_t *)(param_1 + 0xf),L". ");
    pwVar2 = (wchar_t *)(param_1 + 0x1c);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x1c),L"Arial");
    param_1[0x38] = 0;
    param_1[0x2c] = 0x24;
    param_1[0x39] = 0x3ff00000;
    param_1[0x36] = 0x9999999a;
    param_1[0x2d] = 1;
    param_1[0x30] = 0x3f800000;
    param_1[0x2f] = 0x3f800000;
    param_1[0x2e] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x37] = 0x3fb99999;
    param_1[0x32] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x3a);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x3a),L"Arial");
    param_1[0x4e] = 0x3f4ccccd;
    param_1[0x4d] = 0x3f4ccccd;
    param_1[0x4c] = 0x3f4ccccd;
    param_1[0x56] = 0;
    param_1[0x54] = 0x9999999a;
    param_1[0x4a] = 0x18;
    param_1[0x57] = 0x3ff00000;
    param_1[0x4b] = 1;
    param_1[0x4f] = 0x3f800000;
    param_1[0x55] = 0x3fa99999;
    param_1[0x50] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x58);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x58),L"Arial");
    param_1[0x6d] = 0x3f800000;
    param_1[0x74] = 0;
    param_1[0x72] = 0x47ae147b;
    param_1[0x68] = 0x18;
    param_1[0x75] = 0x3ff00000;
    param_1[0x6c] = 0x3f333333;
    param_1[0x6b] = 0x3f333333;
    param_1[0x6a] = 0x3f333333;
    param_1[0x73] = 0x3f847ae1;
    param_1[0x6e] = 2;
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x76;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x94;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1[0xaa] = 2;
    break;
  case 3:
    param_1[0x17] = 0;
    param_1[0xc] = 0xb;
    param_1[0xd] = 0xb;
    param_1[0xe] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0x3f800000;
    param_1[2] = 1;
    param_1[0x18] = 0x3f000000;
    wcscpy((wchar_t *)(param_1 + 0xf),L".");
    pwVar2 = (wchar_t *)(param_1 + 0x1c);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x1c),L"Arial");
    param_1[0x38] = 0;
    param_1[0x30] = 0x3f4ccccd;
    param_1[0x2f] = 0x3f4ccccd;
    param_1[0x2c] = 0x24;
    param_1[0x39] = 0x3ff00000;
    param_1[0x36] = 0x9999999a;
    param_1[0x2d] = 1;
    param_1[0x2e] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x37] = 0x3fb99999;
    param_1[0x32] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x3a);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x3a),L"Verdana");
    param_1[0x56] = 0;
    param_1[0x54] = 0x9999999a;
    param_1[0x4a] = 0x18;
    param_1[0x57] = 0x3ff00000;
    param_1[0x4b] = 1;
    param_1[0x4e] = 0x3f800000;
    param_1[0x4d] = 0x3f800000;
    param_1[0x4c] = 0x3f800000;
    param_1[0x4f] = 0x3f800000;
    param_1[0x55] = 0x3fa99999;
    param_1[0x50] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x58);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x58),L"Times New Roman");
    param_1[0x6c] = 0x3f800000;
    param_1[0x6b] = 0x3f800000;
    param_1[0x6a] = 0x3f800000;
    param_1[0x6d] = 0x3f800000;
    param_1[0x74] = 0;
    param_1[0x72] = 0x47ae147b;
    param_1[0x68] = 0x18;
    param_1[0x75] = 0x3ff00000;
    param_1[0x73] = 0x3f847ae1;
    param_1[0x6e] = 1;
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x76;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x94;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1[0xaa] = 0;
    break;
  case 4:
    wcscpy((wchar_t *)(param_1 + 0xf),L".");
    param_1[6] = 0x9999999a;
    param_1[7] = 0x3fa99999;
    param_1[8] = 0xcccccccd;
    param_1[9] = 0x3fe4cccc;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x18] = 0x3f000000;
    pwVar2 = (wchar_t *)(param_1 + 0x1c);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x1c),L"Verdana");
    param_1[0x38] = 0;
    param_1[0x30] = 0x3f4ccccd;
    param_1[0x2e] = 0x3f4ccccd;
    param_1[0x2c] = 0x24;
    param_1[0x39] = 0x3ff00000;
    param_1[0x36] = 0x9999999a;
    param_1[0x2d] = 1;
    param_1[0x2f] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x37] = 0x3fb99999;
    param_1[0x32] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x3a);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x3a),L"Arial");
    param_1[0x56] = 0;
    param_1[0x54] = 0x9999999a;
    param_1[0x4a] = 0x14;
    param_1[0x57] = 0x3ff00000;
    param_1[0x4e] = 0x3f800000;
    param_1[0x4d] = 0x3f800000;
    param_1[0x4c] = 0x3f800000;
    param_1[0x4f] = 0x3f800000;
    param_1[0x55] = 0x3fa99999;
    param_1[0x50] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x58);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x58),L"Arial");
    param_1[0x6c] = 0x3f800000;
    param_1[0x6b] = 0x3f800000;
    param_1[0x6a] = 0x3f800000;
    param_1[0x6d] = 0x3f800000;
    param_1[0x74] = 0;
    param_1[0x72] = 0x47ae147b;
    param_1[0x68] = 0x10;
    param_1[0x75] = 0x3ff00000;
    param_1[0x73] = 0x3f847ae1;
    param_1[0x6e] = 1;
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x76;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x94;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1[0xaa] = 0;
    break;
  case 5:
    param_1[4] = 0;
    param_1[5] = 0x3fe80000;
    param_1[6] = 0x9999999a;
    param_1[7] = 0x3fa99999;
    param_1[8] = 0x66666666;
    param_1[9] = 0x3fee6666;
    param_1[0x17] = 0x3f800000;
    param_1[0x16] = 0x3f800000;
    param_1[0x15] = 0x3f800000;
    param_1[2] = 1;
    param_1[0xc] = 3;
    param_1[0xd] = 4;
    param_1[0xe] = 3;
    param_1[0x18] = 0x3f59999a;
    wcscpy((wchar_t *)(param_1 + 0xf),L"-");
    pwVar2 = (wchar_t *)(param_1 + 0x1c);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x1c),L"Verdana");
    param_1[0x38] = 0;
    param_1[0x2c] = 0x30;
    param_1[0x39] = 0x3ff00000;
    param_1[0x36] = 0x9999999a;
    param_1[0x2d] = 3;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0x3f800000;
    param_1[0x31] = 0x3f59999a;
    param_1[0x37] = 0x3fb99999;
    param_1[0x32] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x3a);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x3a),L"Arial");
    param_1[0x4b] = 2;
    param_1[0x50] = 2;
    param_1[0x56] = 0;
    param_1[0x54] = 0x9999999a;
    param_1[0x4a] = 0x18;
    param_1[0x57] = 0x3ff00000;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4f] = 0x3f59999a;
    param_1[0x55] = 0x3fa99999;
    pwVar2 = (wchar_t *)(param_1 + 0x58);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x58),L"Arial");
    param_1[0x74] = 0;
    param_1[0x72] = 0x47ae147b;
    param_1[0x68] = 0x18;
    param_1[0x75] = 0x3ff00000;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x6d] = 0x3f59999a;
    param_1[0x73] = 0x3f847ae1;
    param_1[0x6e] = 1;
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x76;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x94;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1[0xaa] = 0;
    break;
  case 6:
    param_1[10] = 0x9999999a;
    param_1[0xb] = 0x3fb99999;
    param_1[0xc] = 0xd;
    param_1[0xd] = 0xd;
    param_1[0xe] = 0;
    param_1[4] = 0;
    param_1[5] = 0x3fe80000;
    param_1[2] = 1;
    param_1[0x18] = 0x3f800000;
    wcscpy((wchar_t *)(param_1 + 0xf),L".");
    pwVar2 = (wchar_t *)(param_1 + 0x1c);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x1c),L"Arial");
    param_1[0x38] = 0;
    param_1[0x2c] = 0x2a;
    param_1[0x39] = 0x3ff00000;
    param_1[0x36] = 0x9999999a;
    param_1[0x2d] = 3;
    param_1[0x30] = 0x3f800000;
    param_1[0x2f] = 0x3f800000;
    param_1[0x2e] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x37] = 0x3fb99999;
    param_1[0x32] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x3a);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x3a),L"Verdana");
    param_1[0x4b] = 2;
    param_1[0x50] = 2;
    param_1[0x56] = 0;
    param_1[0x54] = 0x9999999a;
    param_1[0x4a] = 0x18;
    param_1[0x57] = 0x3ff00000;
    param_1[0x4e] = 0x3f800000;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4f] = 0x3f800000;
    param_1[0x55] = 0x3fa99999;
    pwVar2 = (wchar_t *)(param_1 + 0x58);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x58),L"Verdana");
    param_1[0x74] = 0;
    param_1[0x72] = 0x47ae147b;
    param_1[0x68] = 0x14;
    param_1[0x75] = 0x3ff00000;
    param_1[0x6c] = 0x3f4ccccd;
    param_1[0x6b] = 0x3f4ccccd;
    param_1[0x6a] = 0x3f4ccccd;
    param_1[0x6d] = 0x3f800000;
    param_1[0x73] = 0x3f847ae1;
    param_1[0x6e] = 0;
    goto LAB_0041ef7a;
  case 7:
    wcscpy((wchar_t *)(param_1 + 0xf),L".");
    param_1[0x19] = 1;
    pwVar2 = (wchar_t *)(param_1 + 0x1c);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x1c),L"Verdana");
    param_1[0x38] = 0;
    param_1[0x2c] = 0x24;
    param_1[0x39] = 0x3ff00000;
    param_1[0x36] = 0x9999999a;
    param_1[0x2d] = 1;
    param_1[0x2e] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x37] = 0x3fb99999;
    param_1[0x32] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x3a);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x3a),L"Verdana");
    param_1[0x56] = 0;
    param_1[0x54] = 0x47ae147b;
    param_1[0x57] = 0x3ff00000;
    param_1[0x4a] = 0x18;
    param_1[0x4d] = 0x3f800000;
    param_1[0x4f] = 0x3f800000;
    param_1[0x55] = 0x3f847ae1;
    param_1[0x50] = 2;
    pwVar2 = (wchar_t *)(param_1 + 0x58);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      pwVar2[0] = L'\0';
      pwVar2[1] = L'\0';
      pwVar2 = pwVar2 + 2;
    }
    wcscpy((wchar_t *)(param_1 + 0x58),L"Verdana");
    param_1[0x74] = 0;
    param_1[0x72] = 0xeb851eb8;
    param_1[0x68] = 0x14;
    param_1[0x75] = 0x3ff00000;
    param_1[0x6c] = 0x3f800000;
    param_1[0x6d] = 0x3f800000;
    param_1[0x73] = 0x3f9eb851;
LAB_0041ef74:
    param_1[0x6e] = 0;
LAB_0041ef7a:
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x76;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_1 + 0x58;
    puVar4 = param_1 + 0x94;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1[0xaa] = 1;
  }
  param_1[0x8c] = 2;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  return param_1;
}


