/* Module: tokr3260.dll
   Function: FUN_68058d10
   Address: 68058d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68058d10(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_64 [24];
  
  local_64[0] = 0x3eedb113;
  local_64[1] = 0x3e073fbe;
  iVar2 = param_2 / 2;
  local_64[2] = 0xbdcb8a08;
  local_64[3] = 0xbd32921e;
  local_64[4] = 0x3d5e84f3;
  local_64[5] = 0x3c9a165c;
  local_64[6] = 0xbd0ba230;
  local_64[7] = 0xbbffa529;
  local_64[8] = 0x3cb20fe2;
  local_64[9] = 0x3b2164f3;
  local_64[10] = 0xbc5c3a3e;
  local_64[0xb] = 0xb880485a;
  local_64[0xc] = 0x3c007494;
  local_64[0xd] = 0xba46385c;
  local_64[0xe] = 0xbb8a2139;
  local_64[0xf] = 0x3a4d58fc;
  local_64[0x10] = 0x3b054d24;
  local_64[0x11] = 0xba087604;
  local_64[0x12] = 0xba5f97c4;
  local_64[0x13] = 0x397e0500;
  local_64[0x14] = 0x399de6b7;
  local_64[0x15] = 0xb86b8abb;
  local_64[0x16] = 0xb8c10d8a;
  local_64[0x17] = 0xb775446d;
  if (0 < iVar2) {
    iVar3 = iVar2 * 4;
    puVar4 = local_64;
    puVar5 = (undefined4 *)(param_1 + iVar3);
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -4;
      *puVar5 = uVar1;
      *(undefined4 *)(param_1 + iVar3) = uVar1;
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}


