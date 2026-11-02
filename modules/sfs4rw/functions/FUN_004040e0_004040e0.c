/* Module: sfs4rw.dll
   Function: FUN_004040e0
   Address: 004040e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004040e0(LPSTR param_1)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 local_84;
  BYTE local_80 [128];
  
  pCVar2 = param_1;
  for (iVar1 = 0x112; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2[0] = '\0';
    pCVar2[1] = '\0';
    pCVar2[2] = '\0';
    pCVar2[3] = '\0';
    pCVar2 = pCVar2 + 4;
  }
  local_84 = 0;
  iVar1 = FUN_00403010(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1,(LPCSTR)local_80,0x33);
    param_1[0x32] = '\0';
  }
  iVar1 = FUN_00403280(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 0x80,(LPCSTR)local_80,0x33);
    param_1[0xb2] = '\0';
  }
  iVar1 = FUN_004035e0(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 0x100,(LPCSTR)local_80,0x33);
    param_1[0x132] = '\0';
  }
  iVar1 = FUN_00403790(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 0x180,(LPCSTR)local_80,0x80);
    param_1[0x1ff] = '\0';
  }
  iVar1 = FUN_004038a0(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 0x200,(LPCSTR)local_80,0x80);
    param_1[0x27f] = '\0';
  }
  iVar1 = FUN_004039b0(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 0x280,(LPCSTR)local_80,0x33);
    param_1[0x2b2] = '\0';
  }
  iVar1 = FUN_00403ac0(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 0x300,(LPCSTR)local_80,5);
    param_1[0x304] = '\0';
  }
  iVar1 = FUN_00403bd0(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 0x305,(LPCSTR)local_80,0x15);
    param_1[0x319] = '\0';
  }
  iVar1 = FUN_00403ce0(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 0x31a,(LPCSTR)local_80,5);
    param_1[0x31e] = '\0';
  }
  iVar1 = FUN_00403df0(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 799,(LPCSTR)local_80,0x33);
    param_1[0x351] = '\0';
  }
  iVar1 = FUN_00403f00(local_80,0x80);
  if (iVar1 < 0) {
    local_84 = 0x80004005;
  }
  else {
    lstrcpynA(param_1 + 0x39f,(LPCSTR)local_80,0x81);
    param_1[0x41f] = '\0';
  }
  param_1[0x440] = '\x01';
  param_1[0x441] = '\0';
  param_1[0x442] = '\0';
  param_1[0x443] = '\0';
  param_1[0x444] = '\x01';
  param_1[0x445] = '\0';
  param_1[0x446] = '\0';
  param_1[0x447] = '\0';
  return local_84;
}


